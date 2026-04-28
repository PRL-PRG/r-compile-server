fun main() {
  () -+> v1(I) { reg closure:cls, reg result:v1(I), reg ret:v1(I) |
    closure = build_closure< --> cls >();
    result = apply_closure< cls -+> v1(I) >(closure);
    ret = `+`< v1(I),v1(I) --> v1(I) >(result, <int 3>);
    return ret;
  }
}

fun build_closure() {
  () --> cls { reg c:cls |
    c = clos payload;
    return c;
  }
}

fun apply_closure(closure) {
  (reg closure:cls) -+> v1(I) { reg base:V, reg base0:v1(I), reg sum:v1(I) |
    base = dyn closure();
    base0 = base as v1(I);
    sum = `+`< v1(I),v1(I) --> v1(I) >(base0, <int 2>);
    return sum;
  }
}

fun payload() {
  () --> v1(I) { |
    return <int 37>;
  }
}
