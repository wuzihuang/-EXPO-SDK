Pod::Spec.new do |s|
  s.name         = "BUDemoSource"
  s.version      = "1.0.0.0"
  s.license  = 'MIT'
  s.summary      = "BUDemoSource"
  s.description  = "BUDemoSource"
  s.homepage     = "https://github.com/bytedance/Bytedance-UnionAD"
  s.authors      = { "xuzhijun" => "xuzhijun.644@bytedance.com"}
  s.platform     = :ios, "10.0"
  s.source       = { :git => "git@code.byted.org:TTIOS/tt_sdk_CSJ.git", :branch => 'v00000'}
  s.frameworks       = 'UIKit', 'MapKit', 'WebKit', 'MediaPlayer', 'CoreLocation', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate','AudioToolbox','JavaScriptCore','Security','CoreImage','AudioToolbox','ImageIO','QuartzCore','CoreGraphics','CoreText'
  s.weak_frameworks  = 'AppTrackingTransparency', 'DeviceCheck', 'CoreML', 'CoreHaptics'
  s.libraries        = 'c++', 'resolv', 'z', 'sqlite3', 'bz2', 'xml2', 'iconv', 'c++abi'
  
  s.requires_arc = true

  s.pod_target_xcconfig = {
    'CODE_SIGNING_ALLOWED' => 'NO'
  }
  
  s.default_subspec = ['Demo']
  
  s.subspec 'Demo' do |ss|
    
    ss.dependency 'BUDemoSource/CSJDemoSource'
    ss.dependency 'BUDemoSource/MediationCustomAdapter'
    
  end
  
  
  
  s.subspec 'CSJDemoSource' do |ss|
    
    ss.public_header_files = "DomesticDemo/BUDemo/App/**/*.h"
    ss.source_files = "DomesticDemo/BUDemo/App/**/*.{h,m,a,c,mm,pch}"
    ss.prefix_header_file = 'DomesticDemo/BUDemo/PrefixHeader.pch'
    ss.exclude_files = "DomesticDemo/BUDemo/App/Example/controller/ugen/*.*"
    
    # 公共的第三方库
    ss.dependency 'Masonry'
    ss.dependency 'MBProgressHUD'
    ss.dependency 'MJRefresh'
    ss.dependency 'SDWebImage'
    
    # Demo 资源
    ss.dependency 'BUDemoSource/CSJDemoResource'
    
    # 穿山甲相关的SDK
    ss.dependency 'BUDemoSource/CSJRelateSDK'
    
    
  end
  
  # Gromore 相关的代码
  s.subspec 'MediationCustomAdapter' do |ss|

    ss.public_header_files = "MediationCustomAdapter/**/*.h"
    ss.source_files = "MediationCustomAdapter/**/*.{h,m,a,c,mm,pch}"
    
    ss.dependency 'BUDemoSource/CSJRelateSDK'
  end
  
  # Demo 需要的资源文件
  s.subspec 'CSJDemoResource' do |ss|
    ss.resource_bundles = {
      'CSJDemoResource' => [
        'DomesticDemo/BUDemo/Resource/CSJDemoResource/**/*.*'
      ]
    }
  end
  
  # 穿山甲相关的SDK（即Ads-CN，这里是本地依赖）
  s.subspec 'CSJRelateSDK' do |ss|
    configuration = 'Release'
    if configuration == 'Develop'
      ss.dependency 'BUAdSDK'
      ss.dependency 'BUAdTestMeasurement'
      ss.dependency 'CSJMediation'
    elsif configuration == 'Release'
      ss.vendored_frameworks = 'SDK/BUAdSDK.xcframework', 'SDK/CSJMediation.xcframework', 'SDK/BUAdTestMeasurement.xcframework'
      ss.resources = ['SDK/CSJAdSDK.bundle', 'SDK/BUAdTestMeasurement.bundle']
    end
  end
  

end
