check(function(x = NULL) {
  list(
    is.character(x),
    is.complex(x),
    is.double(x),
    is.integer(x),
    is.logical(x),
    is.name(x),
    is.null(x),
    is.object(x),
    is.symbol(x)
  )
})