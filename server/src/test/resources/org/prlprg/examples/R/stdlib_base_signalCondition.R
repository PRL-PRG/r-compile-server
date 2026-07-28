#? stdlib
`signalCondition` <- function (cond) 
{
    if (!inherits(cond, "condition")) 
        cond <- simpleCondition(cond)
    msg <- conditionMessage(cond)
    call <- conditionCall(cond)
    .Internal(.signalCondition(cond, msg, call))
}
