#? stdlib
`.okMethodLabel` <- function (method) 
{
    if (is(method, "MethodDefinition")) {
        pkgs <- packageSlot(method@target)
        length(pkgs) > 0 && all(nzchar(pkgs))
    }
    else TRUE
}
