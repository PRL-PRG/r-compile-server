fun main() {
  () -+> V { reg r:V |
    r = force_< * -+> V >(1);
    return r;
  }
}

fun force_(x) {
  (reg x:*) -+> V { reg r:V |
    r = force? x;
    return r;
  }
  (reg x:I) --> I { |
    return x;
  }
  (reg x:R) --> R { |
    return x;
  }
}