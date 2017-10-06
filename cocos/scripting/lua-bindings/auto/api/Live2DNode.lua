
--------------------------------
-- @module Live2DNode
-- @extend DrawNode
-- @parent_module 

--------------------------------
-- 
-- @function [parent=#Live2DNode] transformScreenX 
-- @param self
-- @param #float deviceX
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] transformScreenY 
-- @param self
-- @param #float deviceY
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] transformViewY 
-- @param self
-- @param #float deviceY
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] transformViewX 
-- @param self
-- @param #float deviceX
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] runExpression 
-- @param self
-- @param #string name
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] runRandomMotion 
-- @param self
-- @param #string name
-- @param #int priority
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] setSacleX 
-- @param self
-- @param #float x
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] hitTest 
-- @param self
-- @param #string pid
-- @param #float x
-- @param #float y
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] runRandomExpression 
-- @param self
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] updateViewMatrix 
-- @param self
-- @param #float dx
-- @param #float dy
-- @param #float cx
-- @param #float cy
-- @param #float scale
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] setPosition 
-- @param self
-- @param #float x
-- @param #float y
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] onDrag 
-- @param self
-- @param #float x
-- @param #float y
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] getPosition 
-- @param self
-- @return vec2_table#vec2_table ret (return value: vec2_table)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] load 
-- @param self
-- @param #string dir
-- @param #string json
-- @return Live2DNode#Live2DNode ret (return value: Live2DNode)
        
--------------------------------
-- 
-- @function [parent=#Live2DNode] Live2DNode 
-- @param self
-- @return Live2DNode#Live2DNode self (return value: Live2DNode)
        
return nil
