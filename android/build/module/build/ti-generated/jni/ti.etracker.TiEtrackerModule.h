/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace ti {
namespace etracker {

class TiEtrackerModule : public titanium::Proxy
{
public:
	explicit TiEtrackerModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void trackOrder(const v8::FunctionCallbackInfo<v8::Value>&);
	static void flush(const v8::FunctionCallbackInfo<v8::Value>&);
	static void trackUserDefined(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getConsent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void denyTracking(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stopTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getStatus(const v8::FunctionCallbackInfo<v8::Value>&);
	static void trackScreenView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void allowTracking(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // etracker
} // ti
