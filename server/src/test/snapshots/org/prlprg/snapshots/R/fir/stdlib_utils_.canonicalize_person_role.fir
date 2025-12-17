fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1632570902;
    st `.canonicalize_person_role` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1632570902(role) {
  (reg role:*) -+> V { var role:*, reg which:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg role1:*, reg role2:V, reg MARC_relator_db:*, reg MARC_relator_db1:V, reg c:L, reg MARC_relator_db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg match:cls, reg r5:V, reg is_na:cls, reg r6:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg pos:*, reg pos1:V, reg length:cls, reg r11:V, reg c1:L, reg pmatch:cls, reg tolower:cls, reg role3:*, reg role4:V, reg c2:L, reg role6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos2:*, reg pos3:V, reg __:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg tolower1:cls, reg MARC_relator_db4:*, reg MARC_relator_db5:V, reg c3:L, reg MARC_relator_db7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg MARC_relator_db8:*, reg MARC_relator_db9:V, reg c4:L, reg MARC_relator_db11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r21:V, reg c5:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg ind:*, reg ind1:V, reg __1:cls, reg r22:V, reg l:*, reg c6:L, reg dx13:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx15:V, reg dx17:V, reg pos4:*, reg pos5:V, reg c7:L, reg dx20:V, reg l4:*, reg dx21:V, reg pos7:V, reg dr12:V, reg dc6:L, reg dx24:V, reg dx25:V, reg l6:*, reg dx26:V, reg dx27:V, reg ind2:*, reg ind3:V, reg r23:V, reg __2:cls, reg r24:V, reg ___:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg ind4:*, reg ind5:V, reg r28:V, reg any:cls, reg r29:V, reg c8:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg pos8:*, reg pos9:V, reg c9:L, reg pos11:V, reg dr14:V, reg dc7:L, reg dx28:V, reg dx29:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r32:V, reg length1:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg p6:p(V +), reg paste:cls, reg sQuote:cls, reg role7:*, reg role8:V, reg c10:L, reg role10:V, reg dr16:V, reg dc8:L, reg dx30:V, reg dx31:V, reg pos12:*, reg pos13:V, reg c11:L, reg role12:V, reg pos15:V, reg dr18:V, reg dc9:L, reg dx32:V, reg role14:V, reg dx33:V, reg ind8:*, reg ind9:V, reg __4:cls, reg r37:V, reg __5:cls, reg r38:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg r42:V, reg p9:p(V +), reg r44:V, reg p10:p(V +), reg r46:V, reg role15:*, reg role16:V, reg c12:L, reg role18:V, reg dr20:V, reg dc10:L, reg dx34:V, reg dx35:V, reg pos16:*, reg pos17:V, reg c13:L, reg role20:V, reg pos19:V, reg dr22:V, reg dc11:L, reg dx36:V, reg role22:V, reg dx37:V, reg ind10:*, reg ind11:V, reg __6:cls, reg r47:V, reg r48:V, reg __7:cls, reg r49:V, reg dx38:V, reg role23:*, reg role24:V |
    mkenv;
    st role = role;
    which = ldf which;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf match;
      base1 = ldf match in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang match(role, `$`(MARC_relator_db, code))>);
      goto L0(r);
    L1(r3):
      is_na = ldf `is.na` in base;
      r6 = dyn is_na(r3);
      goto L0(r6);
    L4():
      role1 = ld role;
      role2 = force? role1;
      checkMissing(role2);
      MARC_relator_db = ld MARC_relator_db;
      MARC_relator_db1 = force? MARC_relator_db;
      checkMissing(MARC_relator_db1);
      c = `is.object`(MARC_relator_db1);
      if c then L7() else L8(MARC_relator_db1);
    L5():
      r2 = dyn base1(<sym role>, <lang `$`(MARC_relator_db, code)>);
      goto L1(r2);
    L6(dx1):
      match = ldf match in base;
      r5 = dyn match(role2, dx1, NA_INT, NULL);
      goto L1(r5);
    L7():
      dr = tryDispatchBuiltin.1("$", MARC_relator_db1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(MARC_relator_db3):
      r4 = `$`(MARC_relator_db3, <sym code>);
      goto L6(r4);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L6(dx);
    };
    r8 = dyn which(p);
    check L12() else D1();
  D1():
    deopt 3 [r8];
  L12():
    st pos = r8;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L0(r10):
    c1 = `as.logical`(r10);
    if c1 then L17() else L1();
  L13():
    pos = ld pos;
    check L15() else D2();
  L14():
    r9 = dyn base2(<sym pos>);
    goto L0(r9);
  D2():
    deopt 7 [pos];
  L1():
    goto L10();
  L10():
    role23 = ld role;
    check L55() else D17();
  L15():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r11 = dyn length(pos1);
    check L16() else D3();
  L17():
    pmatch = ldf pmatch;
    check L18() else D4();
  D3():
    deopt 10 [r11];
  D4():
    deopt 12 [];
  D17():
    deopt 63 [role23];
  L16():
    goto L0(r11);
  L18():
    p2 = prom<V +>{
      tolower = ldf tolower;
      p1 = prom<V +>{
        role3 = ld role;
        role4 = force? role3;
        checkMissing(role4);
        c2 = `is.object`(role4);
        if c2 then L1() else L2(role4);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", role4);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(role6):
        pos2 = ld pos;
        pos3 = force? pos2;
        __ = ldf `[` in base;
        r12 = dyn __(role6, pos3);
        goto L0(r12);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r14 = dyn tolower(p1);
      return r14;
    };
    p4 = prom<V +>{
      tolower1 = ldf tolower;
      p3 = prom<V +>{
        MARC_relator_db4 = ld MARC_relator_db;
        MARC_relator_db5 = force? MARC_relator_db4;
        checkMissing(MARC_relator_db5);
        c3 = `is.object`(MARC_relator_db5);
        if c3 then L1() else L2(MARC_relator_db5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", MARC_relator_db5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(MARC_relator_db7):
        r16 = `$`(MARC_relator_db7, <sym name>);
        goto L0(r16);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r18 = dyn tolower1(p3);
      return r18;
    };
    r20 = dyn pmatch(p2, p4, 0);
    check L19() else D5();
  L55():
    role24 = force? role23;
    checkMissing(role24);
    popenv;
    return role24;
  D5():
    deopt 16 [r20];
  L19():
    st ind = r20;
    MARC_relator_db8 = ld MARC_relator_db;
    check L20() else D6();
  D6():
    deopt 18 [MARC_relator_db8];
  L20():
    MARC_relator_db9 = force? MARC_relator_db8;
    checkMissing(MARC_relator_db9);
    c4 = `is.object`(MARC_relator_db9);
    if c4 then L22() else L23(MARC_relator_db9);
  L21(dx7):
    c5 = `is.object`(dx7);
    if c5 then L25() else L26(dx7);
  L22():
    dr6 = tryDispatchBuiltin.1("$", MARC_relator_db9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L24() else L23(dr6);
  L23(MARC_relator_db11):
    r21 = `$`(MARC_relator_db11, <sym code>);
    goto L21(r21);
  L2(dx11):
    l = ld role;
    c6 = `is.object`(l);
    if c6 then L29() else L30(dx11, l);
  L24():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx6);
  L25():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L27() else L26(dr8);
  L26(dx9):
    ind = ld ind;
    check L28() else D7();
  D7():
    deopt 21 [dx9, ind];
  L3(dx17):
    st role = dx17;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L27():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L2(dx10);
  L28():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r22 = dyn __1(dx9, ind1);
    goto L2(r22);
  L29():
    dr10 = tryDispatchBuiltin.0("[<-", l, dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L31() else L30(dx11, dr10);
  L30(dx13, l2):
    pos4 = ld pos;
    check L32() else D8();
  D8():
    deopt 25 [dx13, l2, dx11, pos4];
  L5(r27):
    c8 = `as.logical`(r27);
    if c8 then L41() else L6();
  L31():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L3(dx15);
  L32():
    pos5 = force? pos4;
    checkMissing(pos5);
    c7 = `is.object`(pos5);
    if c7 then L33() else L34(dx13, l2, dx11, pos5);
  L37():
    ind4 = ld ind;
    check L39() else D10();
  L38():
    r26 = dyn base3(<lang `<-`(ind, `(`(`==`(ind, 0)))>);
    goto L5(r26);
  D10():
    deopt 36 [ind4];
  L4(dx25, l6, dx26, dx27):
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l6, dx26, dx27);
    goto L3(r25);
  L6():
    goto L9(NULL);
  L9(dx38):
    goto L10();
  L33():
    dr12 = tryDispatchBuiltin.1("[", pos5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L35() else L34(dx13, l2, dx11, dr12);
  L34(dx20, l4, dx21, pos7):
    ind2 = ld ind;
    check L36() else D9();
  L39():
    ind5 = force? ind4;
    checkMissing(ind5);
    r28 = `==`(ind5, 0);
    st ind = r28;
    any = ldf any in base;
    r29 = dyn any(r28);
    check L40() else D11();
  L41():
    warning = ldf warning;
    check L42() else D12();
  D9():
    deopt 27 [dx20, l4, dx21, pos7, ind2];
  D11():
    deopt 42 [r29];
  D12():
    deopt 44 [];
  L35():
    dx24 = getTryDispatchBuiltinValue(dr12);
    goto L4(dx13, l2, dx11, dx24);
  L36():
    ind3 = force? ind2;
    checkMissing(ind3);
    r23 = `>`(ind3, 0);
    __2 = ldf `[` in base;
    r24 = dyn __2(pos7, r23);
    goto L4(dx20, l4, dx21, r24);
  L40():
    goto L5(r29);
  L42():
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        ngettext = ldf ngettext;
        p5 = prom<V +>{
          sym4 = ldf length;
          base4 = ldf length in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L2() else L3();
        L0(r31):
          return r31;
        L2():
          pos8 = ld pos;
          pos9 = force? pos8;
          checkMissing(pos9);
          c9 = `is.object`(pos9);
          if c9 then L4() else L5(pos9);
        L3():
          r30 = dyn base4(<lang `[`(pos, ind)>);
          goto L0(r30);
        L1(dx29):
          length1 = ldf length in base;
          r33 = dyn length1(dx29);
          goto L0(r33);
        L4():
          dr14 = tryDispatchBuiltin.1("[", pos9);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L6() else L5(dr14);
        L5(pos11):
          ind6 = ld ind;
          ind7 = force? ind6;
          __3 = ldf `[` in base;
          r32 = dyn __3(pos11, ind7);
          goto L1(r32);
        L6():
          dx28 = getTryDispatchBuiltinValue(dr14);
          goto L1(dx28);
        };
        r35 = dyn ngettext(p5, "Invalid role specification: %s.", "Invalid role specifications: %s.");
        return r35;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          sQuote = ldf sQuote;
          p7 = prom<V +>{
            role7 = ld role;
            role8 = force? role7;
            checkMissing(role8);
            c10 = `is.object`(role8);
            if c10 then L2() else L3(role8);
          L0(dx31):
            return dx31;
          L2():
            dr16 = tryDispatchBuiltin.1("[", role8);
            dc8 = getTryDispatchBuiltinDispatched(dr16);
            if dc8 then L4() else L3(dr16);
          L3(role10):
            pos12 = ld pos;
            pos13 = force? pos12;
            checkMissing(pos13);
            c11 = `is.object`(pos13);
            if c11 then L5() else L6(role10, pos13);
          L1(role14, dx33):
            __5 = ldf `[` in base;
            r38 = dyn __5(role14, dx33);
            goto L0(r38);
          L4():
            dx30 = getTryDispatchBuiltinValue(dr16);
            goto L0(dx30);
          L5():
            dr18 = tryDispatchBuiltin.1("[", pos13);
            dc9 = getTryDispatchBuiltinDispatched(dr18);
            if dc9 then L7() else L6(role10, dr18);
          L6(role12, pos15):
            ind8 = ld ind;
            ind9 = force? ind8;
            __4 = ldf `[` in base;
            r37 = dyn __4(pos15, ind9);
            goto L1(role12, r37);
          L7():
            dx32 = getTryDispatchBuiltinValue(dr18);
            goto L1(role10, dx32);
          };
          r40 = dyn sQuote(p7);
          return r40;
        };
        r42 = dyn paste[, collapse](p8, ", ");
        return r42;
      };
      r44 = dyn sprintf(p6, p9);
      return r44;
    };
    r46 = dyn warning[, domain](p10, NA_LGL);
    check L43() else D13();
  D13():
    deopt 48 [r46];
  L43():
    role15 = ld role;
    check L44() else D14();
  D14():
    deopt 49 [role15];
  L44():
    role16 = force? role15;
    checkMissing(role16);
    c12 = `is.object`(role16);
    if c12 then L45() else L46(role16);
  L7(dx35):
    st role = dx35;
    goto L9(dx35);
  L45():
    dr20 = tryDispatchBuiltin.1("[", role16);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L47() else L46(dr20);
  L46(role18):
    pos16 = ld pos;
    check L48() else D15();
  D15():
    deopt 51 [role18, pos16];
  L47():
    dx34 = getTryDispatchBuiltinValue(dr20);
    goto L7(dx34);
  L48():
    pos17 = force? pos16;
    checkMissing(pos17);
    c13 = `is.object`(pos17);
    if c13 then L49() else L50(role18, pos17);
  L8(role22, dx37):
    r48 = `-`(<missing>, dx37);
    __7 = ldf `[` in base;
    r49 = dyn __7(role22, r48);
    goto L7(r49);
  L49():
    dr22 = tryDispatchBuiltin.1("[", pos17);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L51() else L50(role18, dr22);
  L50(role20, pos19):
    ind10 = ld ind;
    check L52() else D16();
  D16():
    deopt 53 [role20, pos19, ind10];
  L51():
    dx36 = getTryDispatchBuiltinValue(dr22);
    goto L8(role18, dx36);
  L52():
    ind11 = force? ind10;
    __6 = ldf `[` in base;
    r47 = dyn __6(pos19, ind11);
    goto L8(role20, r47);
  }
}