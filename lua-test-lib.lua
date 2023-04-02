local MyState = require "libmystate"
local obj = MyState.new(2)

obj:setvalue(32)

local currentValue = obj:getvalue()

print(currentValue)