# SmartHomeSampleriOS app

## About

For information on Connect SDK, visit [http://connectsdk.com/discover/](http://connectsdk.com/discover/).

## Setup

### Dependencies

- Add ConnectSDK for iOS to the project. See [link](https://github.com/ConnectSDK/Connect-SDK-iOS) for setup instructions.
- Add Belkin WeMo SDK. Get it from [http://developers.belkin.com/wemo/sdk](http://developers.belkin.com/wemo/sdk), `unzip` the file you'll receive, and copy the contents of the `-iphoneos/` directory into `WeMoSDK/` directory. To fix the `duplicate symbols` errors during linking, patch one of the libraries by running the `WeMoSDK/wemo_duplicate_symbols_fix.sh` script.
- Add [Philips Hue SDK](http://www.developers.meethue.com/documentation/apple-sdk). Add [Cocoa Lumberjack](https://github.com/PhilipsHue/PhilipsHueSDK-iOS-OSX/tree/master/Lumberjack), which is required by Philips Hue.
- Add Nuance Dragon mobile [SpeechKit framework](http://nuancemobiledeveloper.com/public/index.php). Update the variables `kNuanceAppId`, `kNuanceAppHost`, `kNuanceAppHost` and `SpeechKitApplicationKey` in `Secret.m` with the values provided. For instructions for SpeechKit setup see [this document](http://dragonmobile.nuancemobiledeveloper.com/public/Help/DragonMobileSDKReference_iOS/SpeechKit_Guide/ServerConnection.html).
- Update the following access parameters to [Wink API](http://docs.wink.apiary.io): `kWinkUsername`, `kWinkPassword`, `kWinkClientId`, and `kWinkClientSecret`.

## See also

For more information on using Connect SDK, we recommend you review the following material:

- [Connect SDK iOS Docs](http://connectsdk.com/docs/ios)
- [API Documentation](http://connectsdk.com/apis/ios/)

## License

Copyright 2015 LG Electronics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
