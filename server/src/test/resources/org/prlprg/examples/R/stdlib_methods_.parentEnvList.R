#? stdlib
`.parentEnvList` <- function (ev) 
{
    ev <- as.environment(ev)
    value <- list(ev)
    while (!isNamespace(ev)) {
        if (identical(ev, baseenv())) {
            value[[length(value)]] <- .BaseNamespaceEnv
            break
        }
        else if (identical(ev, emptyenv())) {
            break
        }
        ev <- parent.env(ev)
        value <- c(value, list(ev))
    }
    value
}
