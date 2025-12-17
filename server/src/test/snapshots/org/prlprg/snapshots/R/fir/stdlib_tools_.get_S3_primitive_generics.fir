fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1865164916;
    st `.get_S3_primitive_generics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1865164916(include_group_generics) {
  (reg include_group_generics:*) -+> V { var include_group_generics:*, reg include_group_generics_isMissing:L, reg include_group_generics_orDefault:*, reg include_group_generics1:*, reg include_group_generics2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg c1:cls, reg r3:V, reg __1:cls, reg r4:V |
    mkenv;
    include_group_generics_isMissing = missing.0(include_group_generics);
    if include_group_generics_isMissing then L0(TRUE) else L0(include_group_generics);
  L0(include_group_generics_orDefault):
    st include_group_generics = include_group_generics_orDefault;
    include_group_generics1 = ld include_group_generics;
    check L3() else D0();
  D0():
    deopt 0 [include_group_generics1];
  L3():
    include_group_generics2 = force? include_group_generics1;
    checkMissing(include_group_generics2);
    c = `as.logical`(include_group_generics2);
    if c then L4() else L1();
  L1():
    __1 = ldf `::`;
    check L11() else D4();
  L4():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  D4():
    deopt 76 [];
  L2(r1):
    popenv;
    return r1;
  L5():
    __ = ldf `::`;
    check L7() else D1();
  L6():
    r = dyn base(<lang `::`(base, .S3PrimitiveGenerics)>, "abs", "sign", "sqrt", "floor", "ceiling", "trunc", "round", "signif", "exp", "log", "expm1", "log1p", "cos", "sin", "tan", "cospi", "sinpi", "tanpi", "acos", "asin", "atan", "cosh", "sinh", "tanh", "acosh", "asinh", "atanh", "lgamma", "gamma", "digamma", "trigamma", "cumsum", "cumprod", "cummax", "cummin", "+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">", "all", "any", "sum", "prod", "max", "min", "range", "Arg", "Conj", "Im", "Mod", "Re", "%*%");
    goto L2(r);
  L11():
    r4 = dyn __1("base", ".S3PrimitiveGenerics");
    check L12() else D5();
  D1():
    deopt 5 [];
  D5():
    deopt 79 [r4];
  L7():
    r2 = dyn __("base", ".S3PrimitiveGenerics");
    check L8() else D2();
  L12():
    popenv;
    return r4;
  D2():
    deopt 8 [r2];
  L8():
    c1 = ldf c in base;
    r3 = dyn c1(r2, "abs", "sign", "sqrt", "floor", "ceiling", "trunc", "round", "signif", "exp", "log", "expm1", "log1p", "cos", "sin", "tan", "cospi", "sinpi", "tanpi", "acos", "asin", "atan", "cosh", "sinh", "tanh", "acosh", "asinh", "atanh", "lgamma", "gamma", "digamma", "trigamma", "cumsum", "cumprod", "cummax", "cummin", "+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">", "all", "any", "sum", "prod", "max", "min", "range", "Arg", "Conj", "Im", "Mod", "Re", "%*%");
    check L9() else D3();
  D3():
    deopt 74 [r3];
  L9():
    goto L2(r3);
  }
}