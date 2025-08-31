/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _outPut = [[],[]];
{
	_outPut params["_class","_random"];
	_class pushBack (_x select 0);
	_random pushBack (_x select 1);
	_outPut = [_class, _random];
} forEach _this;

_outPut