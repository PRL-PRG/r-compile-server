#? stdlib
`.setLockedFieldNames` <- function (def, value) 
{
    env <- def@fieldPrototypes
    env[[.lockedFieldsMetaName]] <- value
    value
}
