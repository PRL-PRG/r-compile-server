check(function(x = 42) {
  list(
    floor(x), ceiling(x), sign(x),
    expm1(x), log1p(x),
    cos(x), sin(x), tan(x), acos(x), asin(x), atan(x),
    cosh(x), sinh(x), tanh(x), acosh(x), asinh(x), atanh(x),
    lgamma(x), gamma(x), digamma(x), trigamma(x),
    cospi(x), sinpi(x), tanpi(x)
  )
})
