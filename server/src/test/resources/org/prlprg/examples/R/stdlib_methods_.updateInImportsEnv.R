#? stdlib
`.updateInImportsEnv` <- function (what, newFun, importingPkg) 
{
    where = .getImportsEnv(importingPkg)
    if (!is.null(where) && (what %in% names(where))) {
        .assignOverBinding(what, newFun, where, FALSE)
    }
}
