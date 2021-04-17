# etracker module for Appcelerator Titanium

<span class="badge-buymeacoffee"><a href="https://www.buymeacoffee.com/miga" title="donate"><img src="https://img.shields.io/badge/buy%20me%20a%20coke-donate-orange.svg" alt="Buy Me A Coke donate button" /></a></span>


Consent-free tracking - audited GDPR compliant.
More infos about etracker at https://www.etracker.com/

### Requirements

* Android: Appcelerator Titanum 9.3.2+
* iOS: not available

### Implementation

```javascript
var etracker = require("ti.etracker");
```

### Methods:

* etracker.startTracker({ accountKey: "xxxxx", appName: "appName", appVersion: "appVersion"});
* etracker.getStatus()
* etracker.getConsent({ message: "Allow anonymous tracking?", yes: "yes",no: "no"});
* etracker.allowTracking();
* etracker.denyTracking();
* etracker.trackScreenView({ screen: "Screen", area: "area"})
* etracker.trackUserDefined({ screen: "Screen", area: "area", action: "action", object: "object", category: "category", value: "value"})
* etracker.flush();
* // TODO: etracker.trackOrder({})

### Example

See <a href="example/app.js">example/app.js</a>

## Authors

- Michael Gangolf ([@MichaelGangolf](https://twitter.com/MichaelGangolf) / [Web](http://migaweb.de))
