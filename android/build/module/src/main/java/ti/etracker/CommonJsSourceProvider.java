/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2019 by Axway, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
package ti.etracker;

import org.appcelerator.kroll.common.KrollSourceCodeProvider;
import org.appcelerator.kroll.util.KrollAssetHelper;

public class CommonJsSourceProvider implements KrollSourceCodeProvider
{
	public String getSourceCode()
	{
		return getSourceCode("ti.etracker");
	}

	public String getSourceCode(String module)
	{
		if (module.equals("${moduleid}/ti.etracker")) {
			module = "ti.etracker";
		}

		return KrollAssetHelper.readAsset("Resources/ti.etracker/" + module + ".js");
	}
}
