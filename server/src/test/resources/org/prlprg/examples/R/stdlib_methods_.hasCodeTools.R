#? stdlib
`.hasCodeTools` <- function () 
{
    if (!isTRUE(..hasCodeTools)) 
        .assignOverBinding("..hasCodeTools", length(list.files(system.file(package = "codetools"))) > 
            0, .methodsNamespace, FALSE)
    ..hasCodeTools
}
