#? stdlib
`.signalSimpleWarning` <- function (msg, call) 
withRestarts({
    .Internal(.signalCondition(simpleWarning(msg, call), msg, 
        call))
    .Internal(.dfltWarn(msg, call))
}, muffleWarning = function() NULL)
