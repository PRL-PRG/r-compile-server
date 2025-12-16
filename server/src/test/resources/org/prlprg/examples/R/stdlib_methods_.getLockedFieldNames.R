#? stdlib
`.getLockedFieldNames` <- function (def) 
{
    env <- def@fieldPrototypes
    env[[.lockedFieldsMetaName]] %||% character()
}
