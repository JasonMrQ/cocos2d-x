
--------------------------------
-- @module Device
-- @parent_module cc

--------------------------------
-- 
-- @function [parent=#Device] getCurrentDeviceModel 
-- @param self
-- @return char#char ret (return value: char)
        
--------------------------------
-- 
-- @function [parent=#Device] getNetworkType 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- To enable or disable accelerometer.
-- @function [parent=#Device] setAccelerometerEnabled 
-- @param self
-- @param #bool isEnabled
-- @return Device#Device self (return value: cc.Device)
        
--------------------------------
-- Sets the interval of accelerometer.
-- @function [parent=#Device] setAccelerometerInterval 
-- @param self
-- @param #float interval
-- @return Device#Device self (return value: cc.Device)
        
--------------------------------
-- Controls whether the screen should remain on.<br>
-- param keepScreenOn One flag indicating that the screen should remain on.
-- @function [parent=#Device] setKeepScreenOn 
-- @param self
-- @param #bool keepScreenOn
-- @return Device#Device self (return value: cc.Device)
        
--------------------------------
-- Vibrate for the specified amount of time.<br>
-- If vibrate is not supported, then invoking this method has no effect.<br>
-- Some platforms limit to a maximum duration of 5 seconds.<br>
-- Duration is ignored on iOS due to API limitations.<br>
-- param duration The duration in seconds.
-- @function [parent=#Device] vibrate 
-- @param self
-- @param #float duration
-- @return Device#Device self (return value: cc.Device)
        
--------------------------------
-- Gets the DPI of device<br>
-- return The DPI of device.
-- @function [parent=#Device] getDPI 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- Gets UUid   机器唯一标示
-- @function [parent=#Device] getUUid 
-- @param self
-- @return char#char ret (return value: char)
        
--------------------------------
-- 
-- @function [parent=#Device] getVersion 
-- @param self
-- @return char#char ret (return value: char)
        
return nil
