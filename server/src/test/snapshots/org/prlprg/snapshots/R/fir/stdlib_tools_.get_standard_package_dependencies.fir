fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3266769660;
    st `.get_standard_package_dependencies` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3266769660(reverse, recursive) {
  (reg reverse:*, reg recursive:*) -+> V { var reverse:*, reg reverse_isMissing:L, reg reverse_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg unlist:cls, reg _get_standard_package_names:cls, reg r:V, reg p:p(V +), reg r2:V, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p1:p(V +), reg names:*, reg names1:V, reg p2:p(V +), reg r5:V, reg paths:*, reg paths1:V, reg c:L, reg paths3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_exists:cls, reg paths4:*, reg paths5:V, reg p3:p(V +), reg r7:V, reg __:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg which:*, reg which1:V, reg c2:cls, reg r14:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p4:p(V +), reg lapply:cls, reg paths6:*, reg paths7:V, reg p5:p(V +), reg r17:cls, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg fields:*, reg fields1:V, reg l:*, reg colnames__:cls, reg r22:V, reg package_dependencies:cls, reg names2:*, reg names3:V, reg p8:p(V +), reg a:*, reg a1:V, reg p9:p(V +), reg which2:*, reg which3:V, reg p10:p(V +), reg reverse1:*, reg reverse2:V, reg p11:p(V +), reg recursive1:*, reg recursive2:V, reg p12:p(V +), reg r28:V |
    mkenv;
    reverse_isMissing = missing.0(reverse);
    if reverse_isMissing then L0(FALSE) else L0(reverse);
  L0(reverse_orDefault):
    st reverse = reverse_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    unlist = ldf unlist;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r = dyn _get_standard_package_names();
      return r;
    };
    r2 = dyn unlist(p);
    check L6() else D1();
  D1():
    deopt 3 [r2];
  L6():
    st names = r2;
    file_path = ldf `file.path`;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    p1 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p2 = prom<V +>{
      names = ld names;
      names1 = force? names;
      checkMissing(names1);
      return names1;
    };
    r5 = dyn file_path(p1, p2, "DESCRIPTION");
    check L8() else D3();
  D3():
    deopt 10 [r5];
  L8():
    st paths = r5;
    paths = ld paths;
    check L9() else D4();
  D4():
    deopt 12 [paths];
  L9():
    paths1 = force? paths;
    checkMissing(paths1);
    c = `is.object`(paths1);
    if c then L10() else L11(paths1);
  L2(dx1):
    st paths = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L10():
    dr = tryDispatchBuiltin.1("[", paths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(paths3):
    file_exists = ldf `file.exists`;
    check L13() else D5();
  D5():
    deopt 15 [paths3];
  L3(r10):
    st which = r10;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    p3 = prom<V +>{
      paths4 = ld paths;
      paths5 = force? paths4;
      checkMissing(paths5);
      return paths5;
    };
    r7 = dyn file_exists(p3);
    check L14() else D6();
  L15():
    c1 = ldf c in base;
    r11 = dyn c1("Depends", "Imports");
    check L17() else D7();
  L16():
    r9 = dyn base("Depends", "Imports");
    goto L3(r9);
  D6():
    deopt 17 [paths3, r7];
  D7():
    deopt 25 [r11];
  L4(r13):
    st fields = r13;
    do_call = ldf `do.call`;
    check L22() else D10();
  L14():
    __ = ldf `[` in base;
    r8 = dyn __(paths3, r7);
    goto L2(r8);
  L17():
    goto L3(r11);
  L18():
    which = ld which;
    check L20() else D8();
  L19():
    r12 = dyn base1("Package", <sym which>);
    goto L4(r12);
  D8():
    deopt 30 [which];
  D10():
    deopt 36 [];
  L20():
    which1 = force? which;
    checkMissing(which1);
    c2 = ldf c in base;
    r14 = dyn c2("Package", which1);
    check L21() else D9();
  L22():
    p4 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        paths6 = ld paths;
        paths7 = force? paths6;
        checkMissing(paths7);
        return paths7;
      };
      p6 = prom<V +>{
        r17 = clos inner3913899244;
        return r17;
      };
      r19 = dyn lapply(p5, p6);
      return r19;
    };
    r21 = dyn do_call(p4, p7);
    check L23() else D11();
  D9():
    deopt 33 [r14];
  D11():
    deopt 39 [r21];
  L21():
    goto L4(r14);
  L23():
    st a = r21;
    fields = ld fields;
    check L24() else D12();
  D12():
    deopt 41 [fields];
  L24():
    fields1 = force? fields;
    checkMissing(fields1);
    l = ld a;
    colnames__ = ldf `colnames<-`;
    check L25() else D13();
  D13():
    deopt 44 [fields1, l, fields1];
  L25():
    r22 = dyn colnames__(l, NULL, fields1);
    check L26() else D14();
  D14():
    deopt 46 [fields1, r22];
  L26():
    st a = r22;
    package_dependencies = ldf package_dependencies;
    check L27() else D15();
  D15():
    deopt 49 [];
  L27():
    p8 = prom<V +>{
      names2 = ld names;
      names3 = force? names2;
      checkMissing(names3);
      return names3;
    };
    p9 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p10 = prom<V +>{
      which2 = ld which;
      which3 = force? which2;
      checkMissing(which3);
      return which3;
    };
    p11 = prom<V +>{
      reverse1 = ld reverse;
      reverse2 = force? reverse1;
      checkMissing(reverse2);
      return reverse2;
    };
    p12 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r28 = dyn package_dependencies[, , which, reverse, recursive](p8, p9, p10, p11, p12);
    check L28() else D16();
  D16():
    deopt 58 [r28];
  L28():
    popenv;
    return r28;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg _read_description:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fields:*, reg fields1:V, reg __:cls, reg r4:V |
    mkenv;
    st p = p;
    _read_description = ldf `.read_description`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r1 = dyn _read_description(p3);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    fields = ld fields;
    check L6() else D2();
  D2():
    deopt 4 [r3, fields];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    fields1 = force? fields;
    __ = ldf `[` in base;
    r4 = dyn __(r3, fields1);
    goto L0(r4);
  }
}