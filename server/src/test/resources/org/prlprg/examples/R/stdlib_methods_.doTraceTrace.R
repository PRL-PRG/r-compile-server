#? stdlib
`.doTraceTrace` <- function (on) 
{
    .assignOverBinding(".traceTraceState", on, environment(.doTraceTrace), 
        FALSE)
    on
}
