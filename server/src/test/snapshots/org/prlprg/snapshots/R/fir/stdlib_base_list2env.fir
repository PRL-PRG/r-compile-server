fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg gl:cls, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p:p(V +), reg r5:V, reg list:cls, reg r6:V, reg list2env:cls, reg L:*, reg L1:V, reg p1:p(V +), reg r8:V, reg ls:cls, reg e:*, reg e1:V, reg p2:p(V +), reg r10:V, reg stopifnot:cls, reg ls1:cls, reg e2:*, reg e3:V, reg p3:p(V +), reg r12:V, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg L2:*, reg L3:V, reg names:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg r18:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg L4:*, reg L5:V, reg c1:L, reg L7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg e4:*, reg e5:V, reg c2:L, reg e7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg identical:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg as_list:cls, reg e8:*, reg e9:V, reg p7:p(V +), reg r28:V, reg rbind:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg L8:*, reg L9:V, reg names1:cls, reg r31:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg ll:*, reg ll1:V, reg names2:cls, reg r35:V, reg p9:p(V +), reg r37:V, reg stopifnot1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg L10:*, reg L11:V, reg c3:L, reg L13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sort_list:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg L14:*, reg L15:V, reg names3:cls, reg r42:V, reg p10:p(V +), reg r44:V, reg __1:cls, reg r45:V, reg ll2:*, reg ll3:V, reg c4:L, reg ll5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sort_list1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg ll6:*, reg ll7:V, reg names4:cls, reg r48:V, reg p11:p(V +), reg r50:V, reg __2:cls, reg r51:V, reg identical1:cls, reg r52:V, reg p12:p(V +), reg r54:V, reg list2env1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg LETTERS4:*, reg LETTERS5:V, reg data_frame:cls, reg rnorm:cls, reg r57:V, reg p13:p(V +), reg rbinom:cls, reg r59:V, reg p14:p(V +), reg r61:V, reg list1:cls, reg r62:V, reg p15:p(V +), reg e10:*, reg e11:V, reg p16:p(V +), reg r65:V, reg __3:cls, reg r66:V, reg r67:cls, reg e12:*, reg e13:V, reg p17:p(V +), reg r69:V |
    mkenv;
    r = clos inner2045325924;
    st list2env = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st L = r2;
    list2env = ldf list2env;
    check L6() else D3();
  L1():
    gl = ldf gl;
    check L3() else D0();
  L2():
    r1 = dyn base[a, b, p, ff](1.0, <lang `:`(2.0, 4.0)>, <sym pi>, <lang gl(3.0, 4.0, labels=`[`(LETTERS, `:`(1.0, 3.0)))>);
    goto L0(r1);
  D0():
    deopt 13 [];
  D3():
    deopt 24 [];
  L3():
    p = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c = `is.object`(LETTERS1);
      if c then L1() else L2(LETTERS1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(LETTERS3):
      __ = ldf `[` in base;
      r3 = dyn __(LETTERS3, <int 1, 2, 3>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn gl[, , labels](3.0, 4.0, p);
    check L4() else D1();
  L6():
    p1 = prom<V +>{
      L = ld L;
      L1 = force? L;
      checkMissing(L1);
      return L1;
    };
    r8 = dyn list2env(p1);
    check L7() else D4();
  D1():
    deopt 18 [r5];
  D4():
    deopt 26 [r8];
  L4():
    list = ldf list in base;
    r6 = dyn list(1.0, <int 2, 3, 4>, 3.141592653589793, r5);
    check L5() else D2();
  L7():
    st e = r8;
    ls = ldf ls;
    check L8() else D5();
  D2():
    deopt 21 [r6];
  D5():
    deopt 29 [];
  L5():
    goto L0(r6);
  L8():
    p2 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r10 = dyn ls(p2);
    check L9() else D6();
  D6():
    deopt 31 [r10];
  L9():
    stopifnot = ldf stopifnot;
    check L10() else D7();
  D7():
    deopt 33 [];
  L10():
    p5 = prom<V +>{
      ls1 = ldf ls;
      p3 = prom<V +>{
        e2 = ld e;
        e3 = force? e2;
        checkMissing(e3);
        return e3;
      };
      r12 = dyn ls1(p3);
      sort = ldf sort;
      p4 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        L2 = ld L;
        L3 = force? L2;
        checkMissing(L3);
        names = ldf names in base;
        r15 = dyn names(L3);
        goto L0(r15);
      L2():
        r13 = dyn base1(<sym L>);
        goto L0(r13);
      };
      r17 = dyn sort(p4);
      r18 = `==`(r12, r17);
      return r18;
    };
    p6 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      L4 = ld L;
      L5 = force? L4;
      checkMissing(L5);
      c1 = `is.object`(L5);
      if c1 then L4() else L5(L5);
    L2():
      r20 = dyn base2(<lang `$`(L, b)>, <lang `$`(e, b)>);
      goto L0(r20);
    L3(dx3):
      e4 = ld e;
      e5 = force? e4;
      checkMissing(e5);
      c2 = `is.object`(e5);
      if c2 then L8() else L9(e5);
    L4():
      dr2 = tryDispatchBuiltin.1("$", L5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(L7):
      r22 = `$`(L7, <sym b>);
      goto L3(r22);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    L7(dx5):
      identical = ldf identical in base;
      r24 = dyn identical(dx3, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r24);
    L8():
      dr4 = tryDispatchBuiltin.1("$", e5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L10() else L9(dr4);
    L9(e7):
      r23 = `$`(e7, <sym b>);
      goto L7(r23);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L7(dx4);
    };
    r26 = dyn stopifnot(p5, p6);
    check L11() else D8();
  D8():
    deopt 36 [r26];
  L11():
    as_list = ldf `as.list`;
    check L12() else D9();
  D9():
    deopt 38 [];
  L12():
    p7 = prom<V +>{
      e8 = ld e;
      e9 = force? e8;
      checkMissing(e9);
      return e9;
    };
    r28 = dyn as_list(p7);
    check L13() else D10();
  D10():
    deopt 40 [r28];
  L13():
    st ll = r28;
    rbind = ldf rbind;
    check L14() else D11();
  D11():
    deopt 43 [];
  L14():
    p8 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      L8 = ld L;
      L9 = force? L8;
      checkMissing(L9);
      names1 = ldf names in base;
      r31 = dyn names1(L9);
      goto L0(r31);
    L2():
      r29 = dyn base3(<sym L>);
      goto L0(r29);
    };
    p9 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      names2 = ldf names in base;
      r35 = dyn names2(ll1);
      goto L0(r35);
    L2():
      r33 = dyn base4(<sym ll>);
      goto L0(r33);
    };
    r37 = dyn rbind(p8, p9);
    check L15() else D12();
  D12():
    deopt 46 [r37];
  L15():
    stopifnot1 = ldf stopifnot;
    check L16() else D13();
  D13():
    deopt 48 [];
  L16():
    p12 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r39):
      return r39;
    L3():
      L10 = ld L;
      L11 = force? L10;
      checkMissing(L11);
      c3 = `is.object`(L11);
      if c3 then L5() else L6(L11);
    L4():
      r38 = dyn base5(<lang `[`(L, sort.list(names(L)))>, <lang `[`(ll, sort.list(names(ll)))>);
      goto L0(r38);
    L1(dx7):
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      c4 = `is.object`(ll3);
      if c4 then L8() else L9(ll3);
    L5():
      dr6 = tryDispatchBuiltin.1("[", L11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(L13):
      sort_list = ldf `sort.list`;
      p10 = prom<V +>{
        sym6 = ldf names;
        base6 = ldf names in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        L14 = ld L;
        L15 = force? L14;
        checkMissing(L15);
        names3 = ldf names in base;
        r42 = dyn names3(L15);
        goto L0(r42);
      L2():
        r40 = dyn base6(<sym L>);
        goto L0(r40);
      };
      r44 = dyn sort_list(p10);
      __1 = ldf `[` in base;
      r45 = dyn __1(L13, r44);
      goto L1(r45);
    L2(dx9):
      identical1 = ldf identical in base;
      r52 = dyn identical1(dx7, dx9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r52);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L8():
      dr8 = tryDispatchBuiltin.1("[", ll3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L10() else L9(dr8);
    L9(ll5):
      sort_list1 = ldf `sort.list`;
      p11 = prom<V +>{
        sym7 = ldf names;
        base7 = ldf names in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r47):
        return r47;
      L1():
        ll6 = ld ll;
        ll7 = force? ll6;
        checkMissing(ll7);
        names4 = ldf names in base;
        r48 = dyn names4(ll7);
        goto L0(r48);
      L2():
        r46 = dyn base7(<sym ll>);
        goto L0(r46);
      };
      r50 = dyn sort_list1(p11);
      __2 = ldf `[` in base;
      r51 = dyn __2(ll5, r50);
      goto L2(r51);
    L10():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L2(dx8);
    };
    r54 = dyn stopifnot1(p12);
    check L17() else D14();
  D14():
    deopt 50 [r54];
  L17():
    list2env1 = ldf list2env;
    check L18() else D15();
  D15():
    deopt 52 [];
  L18():
    p15 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      LETTERS4 = ld LETTERS;
      LETTERS5 = force? LETTERS4;
      checkMissing(LETTERS5);
      data_frame = ldf `data.frame`;
      p13 = prom<V +>{
        rnorm = ldf rnorm;
        r57 = dyn rnorm(20.0);
        return r57;
      };
      p14 = prom<V +>{
        rbinom = ldf rbinom;
        r59 = dyn rbinom[, , prob](20.0, 1.0, 0.2);
        return r59;
      };
      r61 = dyn data_frame[x, y](p13, p14);
      list1 = ldf list in base;
      r62 = dyn list1(LETTERS5, "just an example", r61);
      goto L0(r62);
    L2():
      r55 = dyn base8[abc, note, df](<sym LETTERS>, "just an example", <lang data.frame(x=rnorm(20.0), y=rbinom(20.0, 1.0, prob=0.2))>);
      goto L0(r55);
    };
    p16 = prom<V +>{
      e10 = ld e;
      e11 = force? e10;
      checkMissing(e11);
      return e11;
    };
    r65 = dyn list2env1[, envir](p15, p16);
    check L19() else D16();
  D16():
    deopt 56 [r65];
  L19():
    __3 = ldf `::`;
    check L20() else D17();
  D17():
    deopt 58 [];
  L20():
    r66 = dyn __3("utils", "ls.str");
    check L21() else D18();
  D18():
    deopt 61 [r66];
  L21():
    checkFun.0(r66);
    r67 = r66 as cls;
    p17 = prom<V +>{
      e12 = ld e;
      e13 = force? e12;
      checkMissing(e13);
      return e13;
    };
    r69 = dyn r67(p17);
    check L22() else D19();
  D19():
    deopt 64 [r69];
  L22():
    popenv;
    return r69;
  }
}
fun inner2045325924(x, envir, parent, hash, size) {
  (reg x:*, reg envir:*, reg parent:*, reg hash:*, reg size:*) -+> V { var x:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var hash:*, reg hash_isMissing:L, reg hash_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg r5:V, reg p1:p(V +), var size:*, reg size_isMissing:L, reg size_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg length1:cls, reg r11:V, reg max:cls, reg r12:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg envir1:*, reg envir2:V, reg c:V, reg c1:L, reg new_env:cls, reg hash1:*, reg hash2:V, reg p3:p(V +), reg parent1:*, reg parent2:V, reg p4:p(V +), reg size1:*, reg size2:V, reg p5:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x5:*, reg x6:V, reg envir3:*, reg envir4:V, reg list2env:cls, reg r23:V |
    mkenv;
    st x = x;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0(NULL) else L0(envir);
  L0(envir_orDefault):
    st envir = envir_orDefault;
    parent_isMissing = missing.0(parent);
    if parent_isMissing then L1() else L2(parent);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(parent_orDefault):
    st parent = parent_orDefault;
    hash_isMissing = missing.0(hash);
    if hash_isMissing then L3() else L4(hash);
  L3():
    p1 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      r5 = `>`(r3, 100.0);
      visible.0();
      return r5;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r4 = dyn length(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    goto L4(p1);
  L4(hash_orDefault):
    st hash = hash_orDefault;
    size_isMissing = missing.0(size);
    if size_isMissing then L5() else L6(size);
  L5():
    p2 = prom<V +>{
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r8):
      return r8;
    L2():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r7 = dyn base1(29, <lang length(x)>);
      goto L0(r7);
    L1(r10):
      max = ldf max in base;
      r12 = dyn max(29, r10);
      goto L0(r12);
    L4():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      length1 = ldf length in base;
      r11 = dyn length1(x4);
      goto L1(r11);
    L5():
      r9 = dyn base2(<sym x>);
      goto L1(r9);
    };
    goto L6(p2);
  L6(size_orDefault):
    st size = size_orDefault;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L11() else L12();
  L7(r15):
    c1 = `as.logical`(r15);
    if c1 then L14() else L8();
  L11():
    envir1 = ld envir;
    check L13() else D0();
  L12():
    r14 = dyn base3(<sym envir>);
    goto L7(r14);
  D0():
    deopt 1 [envir1];
  L8():
    goto L9();
  L9():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L18() else L19();
  L13():
    envir2 = force? envir1;
    checkMissing(envir2);
    c = `==`(envir2, NULL);
    goto L7(c);
  L14():
    new_env = ldf `new.env`;
    check L15() else D1();
  D1():
    deopt 5 [];
  L10(r22):
    popenv;
    return r22;
  L15():
    p3 = prom<V +>{
      hash1 = ld hash;
      hash2 = force? hash1;
      checkMissing(hash2);
      return hash2;
    };
    p4 = prom<V +>{
      parent1 = ld parent;
      parent2 = force? parent1;
      checkMissing(parent2);
      return parent2;
    };
    p5 = prom<V +>{
      size1 = ld size;
      size2 = force? size1;
      checkMissing(size2);
      return size2;
    };
    r19 = dyn new_env[hash, parent, size](p3, p4, p5);
    check L16() else D2();
  L18():
    x5 = ld x;
    check L20() else D3();
  L19():
    r21 = dyn base4(<lang list2env(x, envir)>);
    goto L10(r21);
  D2():
    deopt 12 [r19];
  D3():
    deopt 18 [x5];
  L16():
    st envir = r19;
    goto L9();
  L20():
    x6 = force? x5;
    checkMissing(x6);
    envir3 = ld envir;
    check L21() else D4();
  D4():
    deopt 20 [envir3];
  L21():
    envir4 = force? envir3;
    checkMissing(envir4);
    list2env = ldf list2env in base;
    r23 = dyn list2env(x6, envir4);
    check L22() else D5();
  D5():
    deopt 23 [r23];
  L22():
    goto L10(r23);
  }
}