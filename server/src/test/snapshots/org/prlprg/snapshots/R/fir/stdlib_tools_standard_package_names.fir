fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st standard_package_names = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg list:cls, reg r8:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base[base, recommended](<lang c("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel")>, <lang c("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv")>);
    goto L0(r);
  L1(r3):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L5():
    c = ldf c in base;
    r4 = dyn c("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
    check L7() else D0();
  L6():
    r2 = dyn base1("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
    goto L1(r2);
  D0():
    deopt 19 [r4];
  L2(r6):
    list = ldf list in base;
    r8 = dyn list(r3, r6);
    check L11() else D2();
  L7():
    goto L1(r4);
  L8():
    c1 = ldf c in base;
    r7 = dyn c1("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv");
    check L10() else D1();
  L9():
    r5 = dyn base2("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv");
    goto L2(r5);
  D1():
    deopt 39 [r7];
  D2():
    deopt 42 [r8];
  L10():
    goto L2(r7);
  L11():
    goto L0(r8);
  }
}