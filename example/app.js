var win = Ti.UI.createWindow({
	title: "etracker",
	backgroundColor: '#fff',
	layout: "vertical",
});

var etracker = require("ti.etracker");


win.addEventListener("open", function() {
	etracker.startTracker({
		accountKey: "xxxxx",
		// appName: "appName",
		// appVersion: "appVersion"
	});
	console.log("Status: ", etracker.getStatus());
})

var btn4 = Ti.UI.createButton({
	title: "get consent"
});
btn4.addEventListener("click", function() {
	etracker.getConsent({
		message: "Allow anonymous tracking?",
		yes: "yes",
		no: "no"
	});
})
win.add(btn4);

var btn5 = Ti.UI.createButton({
	title: "allow"
});
btn5.addEventListener("click", function() {
	etracker.allowTracking();
})
win.add(btn5);
var btn6 = Ti.UI.createButton({
	title: "deny"
});
btn6.addEventListener("click", function() {
	etracker.denyTracking();
})
win.add(btn6);

var btn1 = Ti.UI.createButton({
	title: "screen"
});
btn1.addEventListener("click", function() {
	etracker.trackScreenView({
		screen: "Screen",
		area: "area"
	})
})
win.add(btn1);

var btn2 = Ti.UI.createButton({
	title: "user"
});
btn2.addEventListener("click", function() {
	etracker.trackUserDefined({
		screen: "Screen",
		area: "area",
		action: "action",
		object: "object",
		category: "category",
		value: "value"
	})
})
win.add(btn2);

var btn3 = Ti.UI.createButton({
	title: "order"
});
btn3.addEventListener("click", function() {
	etracker.trackOrder({
		order: "order"
	})
})
win.add(btn3);

var btn7 = Ti.UI.createButton({
	title: "flush"
});
btn7.addEventListener("click", function() {
	etracker.flush();
})
win.add(btn7);

win.open();
