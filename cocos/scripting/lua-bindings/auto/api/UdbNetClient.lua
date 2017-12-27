
--------------------------------
-- @module UdbNetClient
-- @extend Ref
-- @parent_module 

--------------------------------
-- 
-- @function [parent=#UdbNetClient] connectServer 
-- @param self
-- @param #char ip
-- @param #int port
-- @param #char playerId
-- @return UdbNetClient#UdbNetClient self (return value: UdbNetClient)
        
--------------------------------
-- 
-- @function [parent=#UdbNetClient] isRuning 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#UdbNetClient] Create 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#UdbNetClient] Send 
-- @param self
-- @param #char buf
-- @param #int len
-- @param #int flags
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#UdbNetClient] Close 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#UdbNetClient] UdbNetClient 
-- @param self
-- @return UdbNetClient#UdbNetClient self (return value: UdbNetClient)
        
return nil
