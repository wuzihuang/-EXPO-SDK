# -EXPO-SDK

穿山甲（CSJ / Pangle）广告 SDK。

## iOS `7.8.0.5`

目录：`ios/union_platform_iOS_7.8.0.5_platform`

- `SDK/`：`BUAdSDK.xcframework`、`CSJMediation.xcframework` 等
- `SDKs/`：优量汇、快手、百度、Sigmob 聚合 adapter
- `DomesticDemo/`：国内 Demo 工程
- `MediationCustomAdapter/`：自定义聚合 adapter 示例

`BUAdSDK` 设备包和模拟器包都超过 GitHub 单文件 100MB 限制，用 Git LFS 存放。

## Android `7.8.1.4`

目录：`android/`

- `open_ad_sdk_7.8.1.4.aar`：穿山甲 SDK
- `adn/`、`adapter/`：优量汇、快手、百度、Sigmob
- `demo/`：Demo 工程
- `demo_7.8.1.4.apk`：Demo 安装包
- `tools-release.aar`、`whiteList.txt`

## 克隆

```bash
git lfs install
git clone https://github.com/wuzihuang/-EXPO-SDK.git
```

未安装 Git LFS 时，两个 `BUAdSDK` 只会下到指针文件，iOS SDK 无法链接。
