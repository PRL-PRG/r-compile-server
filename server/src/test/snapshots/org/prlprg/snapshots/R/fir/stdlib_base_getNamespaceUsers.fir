fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner162799014;
    st getNamespaceUsers = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg getNamespaceName:cls, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg character:cls, reg r4:V, reg loadedNamespaces:cls, reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg i7:I, reg r7:V, reg getNamespaceImports:cls, reg n:*, reg n1:V, reg p2:p(V +), reg r9:V, reg names:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg i10:I, reg r12:V, reg nsname:*, reg nsname1:V, reg inames:*, reg inames1:V, reg match:cls, reg r13:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i15:I, reg r15:V, reg n2:*, reg n3:V, reg users:*, reg users1:V, reg c2:cls, reg r16:V, reg i16:I, reg users2:*, reg users3:V |
    mkenv;
    st ns = ns;
    getNamespaceName = ldf getNamespaceName;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      asNamespace = ldf asNamespace;
      p = prom<V +>{
        ns1 = ld ns;
        ns2 = force? ns1;
        checkMissing(ns2);
        return ns2;
      };
      r1 = dyn asNamespace(p);
      return r1;
    };
    r3 = dyn getNamespaceName(p1);
    check L8() else D1();
  D1():
    deopt 3 [r3];
  L8():
    st nsname = r3;
    character = ldf character;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    r4 = dyn character();
    check L10() else D3();
  D3():
    deopt 7 [r4];
  L10():
    st users = r4;
    loadedNamespaces = ldf loadedNamespaces;
    check L11() else D4();
  D4():
    deopt 10 [];
  L11():
    r5 = dyn loadedNamespaces();
    check L12() else D5();
  D5():
    deopt 11 [r5];
  L12():
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st n = x;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L13():
    users2 = ld users;
    check L31() else D15();
  D15():
    deopt 45 [users2];
  L1(i7, r7):
    st inames = r7;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    getNamespaceImports = ldf getNamespaceImports;
    check L16() else D6();
  L15():
    r6 = dyn base(<lang getNamespaceImports(n)>);
    goto L1(i2, r6);
  L31():
    users3 = force? users2;
    checkMissing(users3);
    popenv;
    return users3;
  D6():
    deopt 15 [i2];
  L2(i10, r12):
    c1 = `as.logical`(r12);
    if c1 then L24() else L3();
  L16():
    p2 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r9 = dyn getNamespaceImports(p2);
    check L17() else D7();
  L19():
    nsname = ld nsname;
    check L21() else D9();
  L20():
    r11 = dyn base1(<sym nsname>, <sym inames>, 0);
    goto L2(i7, r11);
  D7():
    deopt 17 [i2, r9];
  D9():
    deopt 23 [i7, nsname];
  L3():
    goto L5(i10);
  L5(i16):
    goto L0(i16);
  L17():
    names = ldf names in base;
    r10 = dyn names(r9);
    check L18() else D8();
  L21():
    nsname1 = force? nsname;
    checkMissing(nsname1);
    inames = ld inames;
    check L22() else D10();
  L24():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D8():
    deopt 19 [i2, r10];
  D10():
    deopt 25 [i7, inames];
  L4(i15, r15):
    st users = r15;
    goto L5(i15);
  L18():
    goto L1(i2, r10);
  L22():
    inames1 = force? inames;
    checkMissing(inames1);
    match = ldf match in base;
    r13 = dyn match(nsname1, inames1, 0, NULL);
    check L23() else D11();
  L25():
    n2 = ld n;
    check L27() else D12();
  L26():
    r14 = dyn base2(<sym n>, <sym users>);
    goto L4(i10, r14);
  D11():
    deopt 30 [i7, r13];
  D12():
    deopt 33 [i10, n2];
  L23():
    goto L2(i7, r13);
  L27():
    n3 = force? n2;
    checkMissing(n3);
    users = ld users;
    check L28() else D13();
  D13():
    deopt 35 [i10, users];
  L28():
    users1 = force? users;
    checkMissing(users1);
    c2 = ldf c in base;
    r16 = dyn c2(n3, users1);
    check L29() else D14();
  D14():
    deopt 38 [i10, r16];
  L29():
    goto L4(i10, r16);
  }
}