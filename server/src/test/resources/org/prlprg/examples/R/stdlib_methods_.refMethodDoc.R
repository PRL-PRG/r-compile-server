#? stdlib
`.refMethodDoc` <- function (topic, env) 
{
    f <- get(topic, envir = env)
    msg <- c("Call:", .makeCall(topic, f), "")
    bb <- body(f)
    if (is(bb, "{") && length(bb) > 1 && is(bb[[2]], "character")) 
        msg <- c(msg, bb[[2]], "")
    msg
}
