fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3014020399;
    st `.simpleSignature` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3014020399(classes, names, packages) {
  (reg classes:*, reg names:*, reg packages:*) -+> V { var classes:*, var names:*, var packages:*, reg new:cls, reg r:V, reg classes1:*, reg classes2:V, reg l:*, reg ___:cls, reg r1:V, reg names1:*, reg names2:V, reg l1:*, reg ___1:cls, reg r2:V, reg packages1:*, reg packages2:V, reg l2:*, reg ___2:cls, reg r3:V, reg object:*, reg object1:V |
    mkenv;
    st classes = classes;
    st names = names;
    st packages = packages;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn new("signature");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    st object = r;
    classes1 = ld classes;
    check L2() else D2();
  D2():
    deopt 5 [classes1];
  L2():
    classes2 = force? classes1;
    checkMissing(classes2);
    l = ld object;
    ___ = ldf `@<-`;
    check L3() else D3();
  D3():
    deopt 8 [classes2, l, classes2];
  L3():
    r1 = dyn ___(l, NULL, ".Data", classes2);
    check L4() else D4();
  D4():
    deopt 11 [classes2, r1];
  L4():
    st object = r1;
    names1 = ld names;
    check L5() else D5();
  D5():
    deopt 13 [names1];
  L5():
    names2 = force? names1;
    checkMissing(names2);
    l1 = ld object;
    ___1 = ldf `@<-`;
    check L6() else D6();
  D6():
    deopt 16 [names2, l1, names2];
  L6():
    r2 = dyn ___1(l1, NULL, "names", names2);
    check L7() else D7();
  D7():
    deopt 19 [names2, r2];
  L7():
    st object = r2;
    packages1 = ld packages;
    check L8() else D8();
  D8():
    deopt 21 [packages1];
  L8():
    packages2 = force? packages1;
    checkMissing(packages2);
    l2 = ld object;
    ___2 = ldf `@<-`;
    check L9() else D9();
  D9():
    deopt 24 [packages2, l2, packages2];
  L9():
    r3 = dyn ___2(l2, NULL, "package", packages2);
    check L10() else D10();
  D10():
    deopt 27 [packages2, r3];
  L10():
    st object = r3;
    object = ld object;
    check L11() else D11();
  D11():
    deopt 29 [object];
  L11():
    object1 = force? object;
    checkMissing(object1);
    popenv;
    return object1;
  }
}