fun main() {
  () -+> v1(I) {
    closure: cls = build_closure< --> cls >();
    result: v1(I) = apply_closure< cls -+> v1(I) >(closure);
    ret: v1(I) = `+`< v1(I),v1(I) --> v1(I) >(result, <int 3>);
    return ret;
  }
}

fun build_closure() {
  () --> cls {
    c: cls = clos payload;
    return c;
  }
}

fun apply_closure(closure) {
  (reg closure:cls) -+> v1(I) {
    base: V = dyn closure();
    base0: v1(I) = base as v1(I);
    sum: v1(I) = `+`< v1(I),v1(I) --> v1(I) >(base0, <int 2>);
    return sum;
  }
}

fun payload() {
  () --> v1(I) {
    return <int 37>;
  }
}
