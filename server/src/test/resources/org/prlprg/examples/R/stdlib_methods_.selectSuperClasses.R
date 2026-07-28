#? stdlib
`.selectSuperClasses` <- function (ext, dropVirtual = FALSE, namesOnly = TRUE, directOnly = TRUE, 
    simpleOnly = directOnly) 
{
    addCond <- function(xpr, prev) if (length(prev)) 
        substitute(P && N, list(P = prev, N = xpr))
    else xpr
    C <- if (dropVirtual) {
        isVirtualExt <- function(x) getClassDef(x@superClass, 
            package = packageSlot(x))@virtual
        quote(!isVirtualExt(exti))
    }
    else expression()
    if (directOnly) 
        C <- addCond(quote(length(exti@by) == 0), C)
    if (simpleOnly) 
        C <- addCond(quote(exti@simple), C)
    if (length(C)) {
        F <- function(exti) {
        }
        body(F) <- C
        (if (namesOnly) 
            names(ext)
        else ext)[vapply(ext, F, NA, USE.NAMES = FALSE)]
    }
    else if (namesOnly) 
        names(ext)
    else ext
}
