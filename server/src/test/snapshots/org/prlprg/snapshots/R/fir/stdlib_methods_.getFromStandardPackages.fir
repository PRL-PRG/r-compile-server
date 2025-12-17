fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st `.getFromStandardPackages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg as_list:cls, reg _standardPackageNamespaces:*, reg _standardPackageNamespaces1:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg namespaces:*, reg namespaces1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg lapply:cls, reg _standardPackages:*, reg _standardPackages1:V, reg p1:p(V +), reg r7:cls, reg p2:p(V +), reg r9:V, reg _standardPackages2:*, reg _standardPackages3:V, reg l:*, reg names__:cls, reg r10:V, reg list2env:cls, reg namespaces2:*, reg namespaces3:V, reg p3:p(V +), reg _standardPackageNamespaces2:*, reg _standardPackageNamespaces3:V, reg p4:p(V +), reg r13:V, reg namespaces4:*, reg namespaces5:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg ns:*, reg ns1:V, reg c2:L, reg i6:I, reg ns3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg name1:*, reg name2:V, reg __:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg i11:I, reg r17:V, reg obj:*, reg obj1:V, reg is_function:cls, reg r18:V, reg c3:L, reg obj2:*, reg obj3:V |
    mkenv;
    st name = name;
    as_list = ldf `as.list`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      _standardPackageNamespaces = ld `.standardPackageNamespaces`;
      _standardPackageNamespaces1 = force? _standardPackageNamespaces;
      checkMissing(_standardPackageNamespaces1);
      return _standardPackageNamespaces1;
    };
    r1 = dyn as_list[, `all.names`](p, TRUE);
    check L10() else D1();
  D1():
    deopt 5 [r1];
  L10():
    st namespaces = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r3):
    r5 = `==`(r3, 0);
    c = `as.logical`(r5);
    if c then L15() else L1();
  L11():
    namespaces = ld namespaces;
    check L13() else D2();
  L12():
    r2 = dyn base(<sym namespaces>);
    goto L0(r2);
  D2():
    deopt 9 [namespaces];
  L1():
    namespaces4 = ld namespaces;
    check L24() else D11();
  L2():
    popenv;
    return NULL;
  L13():
    namespaces1 = force? namespaces;
    checkMissing(namespaces1);
    length = ldf length in base;
    r4 = dyn length(namespaces1);
    check L14() else D3();
  L15():
    lapply = ldf lapply;
    check L16() else D4();
  D3():
    deopt 12 [r4];
  D4():
    deopt 16 [];
  D11():
    deopt 33 [namespaces4];
  L14():
    goto L0(r4);
  L16():
    p1 = prom<V +>{
      _standardPackages = ld `.standardPackages`;
      _standardPackages1 = force? _standardPackages;
      checkMissing(_standardPackages1);
      return _standardPackages1;
    };
    p2 = prom<V +>{
      r7 = clos inner423301576;
      return r7;
    };
    r9 = dyn lapply(p1, p2);
    check L17() else D5();
  L24():
    namespaces5 = force? namespaces4;
    checkMissing(namespaces5);
    s = toForSeq(namespaces5);
    l1 = length(s);
    i = 0;
    goto L3(i);
  D5():
    deopt 19 [r9];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l1, i2);
    if c1 then L25() else L8();
  L17():
    st namespaces = r9;
    _standardPackages2 = ld `.standardPackages`;
    check L18() else D6();
  D6():
    deopt 21 [_standardPackages2];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st ns = x;
    ns = ld ns;
    check L26() else D12();
  L18():
    _standardPackages3 = force? _standardPackages2;
    checkMissing(_standardPackages3);
    l = ld namespaces;
    names__ = ldf `names<-`;
    check L19() else D7();
  L25():
    goto L2();
  D7():
    deopt 24 [_standardPackages3, l, _standardPackages3];
  D12():
    deopt 35 [i2, ns];
  L19():
    r10 = dyn names__(l, NULL, _standardPackages3);
    check L20() else D8();
  L26():
    ns1 = force? ns;
    checkMissing(ns1);
    c2 = `is.object`(ns1);
    if c2 then L27() else L28(i2, ns1);
  D8():
    deopt 26 [_standardPackages3, r10];
  L4(i8, dx1):
    st obj = dx1;
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L20():
    st namespaces = r10;
    list2env = ldf list2env;
    check L21() else D9();
  L27():
    dr = tryDispatchBuiltin.1("[[", ns1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(i2, dr);
  L28(i6, ns3):
    name1 = ld name;
    check L30() else D13();
  D9():
    deopt 29 [];
  D13():
    deopt 37 [i6, ns3, name1];
  L5(i11, r17):
    c3 = `as.logical`(r17);
    if c3 then L35() else L6();
  L21():
    p3 = prom<V +>{
      namespaces2 = ld namespaces;
      namespaces3 = force? namespaces2;
      checkMissing(namespaces3);
      return namespaces3;
    };
    p4 = prom<V +>{
      _standardPackageNamespaces2 = ld `.standardPackageNamespaces`;
      _standardPackageNamespaces3 = force? _standardPackageNamespaces2;
      checkMissing(_standardPackageNamespaces3);
      return _standardPackageNamespaces3;
    };
    r13 = dyn list2env(p3, p4);
    check L22() else D10();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L30():
    name2 = force? name1;
    __ = ldf `[[` in base;
    r15 = dyn __(ns3, name2);
    goto L4(i6, r15);
  L31():
    obj = ld obj;
    check L33() else D14();
  L32():
    r16 = dyn base1(<sym obj>);
    goto L5(i8, r16);
  D10():
    deopt 32 [r13];
  D14():
    deopt 43 [i8, obj];
  L6():
    goto L3(i11);
  L22():
    goto L2();
  L33():
    obj1 = force? obj;
    checkMissing(obj1);
    is_function = ldf `is.function` in base;
    r18 = dyn is_function(obj1);
    check L34() else D15();
  L35():
    obj2 = ld obj;
    check L36() else D16();
  D15():
    deopt 46 [i8, r18];
  D16():
    deopt 47 [i11, obj2];
  L34():
    goto L5(i8, r18);
  L36():
    obj3 = force? obj2;
    checkMissing(obj3);
    popenv;
    return obj3;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg tryCatch:cls, reg loadNamespace:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:cls, reg p2:p(V +), reg r5:V |
    mkenv;
    st pkg = pkg;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p = prom<V +>{
        pkg1 = ld pkg;
        pkg2 = force? pkg1;
        checkMissing(pkg2);
        return pkg2;
      };
      r1 = dyn loadNamespace(p);
      return r1;
    };
    p2 = prom<V +>{
      r3 = clos inner3708401697;
      return r3;
    };
    r5 = dyn tryCatch[, error](p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg new_env:cls, reg r:V |
    mkenv;
    st e = e;
    new_env = ldf `new.env`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn new_env();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}