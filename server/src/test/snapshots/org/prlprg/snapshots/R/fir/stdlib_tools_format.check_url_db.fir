fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_url_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NROW:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg new:*, reg new1:V, reg nzchar:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg ind:*, reg ind1:V, reg any:cls, reg r13:V, reg c3:L, reg sprintf:cls, reg u:*, reg u1:V, reg c4:L, reg u3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg __:cls, reg r14:V, reg p1:p(V +), reg new2:*, reg new3:V, reg c5:L, reg new5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind4:*, reg ind5:V, reg __1:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg l:*, reg c6:L, reg r20:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind6:*, reg ind7:V, reg ___:cls, reg r23:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r24:V, reg p3:p(V +), reg r26:V, reg c7:L, reg l3:*, reg c8:L, reg r29:S, reg l6:*, reg r30:S, reg l7:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r33:S, reg l9:*, reg r34:S, reg dx11:V, reg r35:V, reg c9:L, reg r37:S, reg l11:*, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg r39:S, reg l13:*, reg dx15:V, reg ind8:*, reg ind9:V, reg ___1:cls, reg r40:V, reg c10:L, reg r42:S, reg l15:*, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r45:V, reg l16:*, reg c11:L, reg r48:S, reg l19:*, reg r49:S, reg l20:*, reg dr16:V, reg dc8:L, reg dx18:V, reg r52:S, reg l22:*, reg r53:S, reg dx19:V, reg r54:V, reg c12:L, reg r56:S, reg l24:*, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg r58:S, reg l26:*, reg dx23:V, reg ind10:*, reg ind11:V, reg ___2:cls, reg r59:V, reg c13:L, reg r61:S, reg l28:*, reg dr20:V, reg dc10:L, reg dx24:V, reg r63:S, reg dx25:V, reg r64:V, reg r65:V, reg paste0:cls, reg sprintf1:cls, reg u4:*, reg u5:V, reg p4:p(V +), reg r68:V, reg p5:p(V +), reg sprintf2:cls, reg vapply:cls, reg x11:*, reg x12:V, reg c14:L, reg x14:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r70:V, reg p6:p(V +), reg paste1:*, reg paste2:V, reg p7:p(V +), reg r73:V, reg p8:p(V +), reg r75:V, reg p9:p(V +), reg ifelse:cls, reg x15:*, reg x16:V, reg c15:L, reg x18:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r77:V, reg r78:V, reg p10:p(V +), reg sprintf3:cls, reg s:*, reg s1:V, reg p11:p(V +), reg r81:V, reg p12:p(V +), reg r83:V, reg p13:p(V +), reg ifelse1:cls, reg x19:*, reg x20:V, reg c16:L, reg x22:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg r85:V, reg r86:V, reg p14:p(V +), reg sprintf4:cls, reg gsub:cls, reg m:*, reg m1:V, reg p15:p(V +), reg r89:V, reg p16:p(V +), reg r91:V, reg p17:p(V +), reg r93:V, reg p18:p(V +), reg ifelse2:cls, reg x23:*, reg x24:V, reg c17:L, reg x26:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r95:V, reg r96:V, reg p19:p(V +), reg r98:V, reg p20:p(V +), reg ifelse3:cls, reg x27:*, reg x28:V, reg c18:L, reg x30:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r100:V, reg r101:V, reg p21:p(V +), reg r103:V, reg p22:p(V +), reg ifelse4:cls, reg x31:*, reg x32:V, reg c19:L, reg x34:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg r105:V, reg r106:V, reg p23:p(V +), reg r108:V, reg p24:p(V +), reg r110:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NROW = ldf NROW;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn NROW(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L13() else L0();
  L0():
    x3 = ld x;
    check L18() else D4();
  L13():
    character = ldf character;
    check L14() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [x3];
  L14():
    r3 = dyn character();
    check L15() else D3();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L20() else L21(x4);
  D3():
    deopt 7 [r3];
  L15():
    popenv;
    return r3;
  L19(dx1):
    st u = dx1;
    x7 = ld x;
    check L23() else D5();
  L20():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(x6):
    r6 = `$`(x6, <sym URL>);
    goto L19(r6);
  D5():
    deopt 15 [x7];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L25() else L26(x8);
  L24(dx3):
    st new = dx3;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L25():
    dr2 = tryDispatchBuiltin.1("$", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(x10):
    r7 = `$`(x10, <sym New>);
    goto L24(r7);
  L2(r9):
    st ind = r9;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L28():
    new = ld new;
    check L30() else D6();
  L29():
    r8 = dyn base(<sym new>);
    goto L2(r8);
  D6():
    deopt 21 [new];
  L3(r12):
    c3 = `as.logical`(r12);
    if c3 then L36() else L4();
  L30():
    new1 = force? new;
    checkMissing(new1);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(new1);
    check L31() else D7();
  L32():
    ind = ld ind;
    check L34() else D8();
  L33():
    r11 = dyn base1(<sym ind>);
    goto L3(r11);
  D7():
    deopt 24 [r10];
  D8():
    deopt 28 [ind];
  L4():
    goto L10();
  L10():
    paste0 = ldf paste0;
    check L72() else D17();
  L31():
    goto L2(r10);
  L34():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r13 = dyn any(ind1);
    check L35() else D9();
  L36():
    sprintf = ldf sprintf;
    check L37() else D10();
  D9():
    deopt 31 [r13];
  D10():
    deopt 33 [];
  D17():
    deopt 74 [];
  L35():
    goto L3(r13);
  L37():
    p1 = prom<V +>{
      u = ld u;
      u1 = force? u;
      checkMissing(u1);
      c4 = `is.object`(u1);
      if c4 then L1() else L2(u1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", u1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(u3):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r14 = dyn __(u3, ind3);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      c5 = `is.object`(new3);
      if c5 then L1() else L2(new3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", new3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(new5):
      ind4 = ld ind;
      ind5 = force? ind4;
      __1 = ldf `[` in base;
      r16 = dyn __1(new5, ind5);
      goto L0(r16);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r18 = dyn sprintf("%s (moved to %s)", p1, p2);
    check L38() else D11();
  L72():
    p5 = prom<V +>{
      sprintf1 = ldf sprintf;
      p4 = prom<V +>{
        u4 = ld u;
        u5 = force? u4;
        checkMissing(u5);
        return u5;
      };
      r68 = dyn sprintf1("URL: %s", p4);
      return r68;
    };
    p9 = prom<V +>{
      sprintf2 = ldf sprintf;
      p8 = prom<V +>{
        vapply = ldf vapply;
        p6 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          c14 = `is.object`(x12);
          if c14 then L1() else L2(x12);
        L0(dx27):
          return dx27;
        L1():
          dr22 = tryDispatchBuiltin.1("$", x12);
          dc11 = getTryDispatchBuiltinDispatched(dr22);
          if dc11 then L3() else L2(dr22);
        L2(x14):
          r70 = `$`(x14, <sym From>);
          goto L0(r70);
        L3():
          dx26 = getTryDispatchBuiltinValue(dr22);
          goto L0(dx26);
        };
        p7 = prom<V +>{
          paste1 = ld paste;
          paste2 = force? paste1;
          checkMissing(paste2);
          return paste2;
        };
        r73 = dyn vapply[, , , collapse](p6, p7, "", "\n      ");
        return r73;
      };
      r75 = dyn sprintf2("\nFrom: %s", p8);
      return r75;
    };
    p13 = prom<V +>{
      ifelse = ldf ifelse;
      p10 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c15 = `is.object`(x16);
        if c15 then L1() else L2(x16);
      L0(dx29):
        st s = dx29;
        r78 = `==`(dx29, "");
        return r78;
      L1():
        dr24 = tryDispatchBuiltin.1("$", x16);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(x18):
        r77 = `$`(x18, <sym Status>);
        goto L0(r77);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx28);
      };
      p12 = prom<V +>{
        sprintf3 = ldf sprintf;
        p11 = prom<V +>{
          s = ld s;
          s1 = force? s;
          checkMissing(s1);
          return s1;
        };
        r81 = dyn sprintf3("\nStatus: %s", p11);
        return r81;
      };
      r83 = dyn ifelse(p10, "", p12);
      return r83;
    };
    p18 = prom<V +>{
      ifelse1 = ldf ifelse;
      p14 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        c16 = `is.object`(x20);
        if c16 then L1() else L2(x20);
      L0(dx31):
        st m = dx31;
        r86 = `==`(dx31, "");
        return r86;
      L1():
        dr26 = tryDispatchBuiltin.1("$", x20);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(x22):
        r85 = `$`(x22, <sym Message>);
        goto L0(r85);
      L3():
        dx30 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx30);
      };
      p17 = prom<V +>{
        sprintf4 = ldf sprintf;
        p16 = prom<V +>{
          gsub = ldf gsub;
          p15 = prom<V +>{
            m = ld m;
            m1 = force? m;
            checkMissing(m1);
            return m1;
          };
          r89 = dyn gsub[, , , fixed]("\n", "\n  ", p15, TRUE);
          return r89;
        };
        r91 = dyn sprintf4("\nMessage: %s", p16);
        return r91;
      };
      r93 = dyn ifelse1(p14, "", p17);
      return r93;
    };
    p20 = prom<V +>{
      ifelse2 = ldf ifelse;
      p19 = prom<V +>{
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        c17 = `is.object`(x24);
        if c17 then L1() else L2(x24);
      L0(dx33):
        st m = dx33;
        r96 = `==`(dx33, "");
        return r96;
      L1():
        dr28 = tryDispatchBuiltin.1("$", x24);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(x26):
        r95 = `$`(x26, <sym Spaces>);
        goto L0(r95);
      L3():
        dx32 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx32);
      };
      r98 = dyn ifelse2(p19, "", "\nURL contains spaces");
      return r98;
    };
    p22 = prom<V +>{
      ifelse3 = ldf ifelse;
      p21 = prom<V +>{
        x27 = ld x;
        x28 = force? x27;
        checkMissing(x28);
        c18 = `is.object`(x28);
        if c18 then L1() else L2(x28);
      L0(dx35):
        st m = dx35;
        r101 = `==`(dx35, "");
        return r101;
      L1():
        dr30 = tryDispatchBuiltin.1("$", x28);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(x30):
        r100 = `$`(x30, <sym CRAN>);
        goto L0(r100);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx34);
      };
      r103 = dyn ifelse3(p21, "", "\nCRAN URL not in canonical form");
      return r103;
    };
    p24 = prom<V +>{
      ifelse4 = ldf ifelse;
      p23 = prom<V +>{
        x31 = ld x;
        x32 = force? x31;
        checkMissing(x32);
        c19 = `is.object`(x32);
        if c19 then L1() else L2(x32);
      L0(dx37):
        st m = dx37;
        r106 = `==`(dx37, "");
        return r106;
      L1():
        dr32 = tryDispatchBuiltin.1("$", x32);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(x34):
        r105 = `$`(x34, <sym R>);
        goto L0(r105);
      L3():
        dx36 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx36);
      };
      r108 = dyn ifelse4(p23, "", "\nR-project URL not in canonical form");
      return r108;
    };
    r110 = dyn paste0(p5, p9, p13, p18, p20, p22, p24);
    check L73() else D18();
  D11():
    deopt 37 [r18];
  D18():
    deopt 82 [r110];
  L38():
    l = ld u;
    c6 = `is.object`(l);
    if c6 then L39() else L40(r18, l);
  L73():
    popenv;
    return r110;
  L5(dx9):
    st u = dx9;
    config_val_to_logical = ldf config_val_to_logical;
    check L43() else D13();
  L39():
    dr8 = tryDispatchBuiltin.0("[<-", l, r18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(r18, dr8);
  L40(r20, l2):
    ind6 = ld ind;
    check L42() else D12();
  D12():
    deopt 39 [r20, l2, r18, ind6];
  D13():
    deopt 44 [];
  L41():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx8);
  L42():
    ind7 = force? ind6;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, r18, ind7);
    goto L5(r23);
  L43():
    p3 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r24 = dyn Sys_getenv("_R_CHECK_URLS_SHOW_301_STATUS_", "FALSE");
      return r24;
    };
    r26 = dyn config_val_to_logical(p3);
    check L44() else D14();
  D14():
    deopt 46 [r26];
  L44():
    c7 = `as.logical`(r26);
    if c7 then L45() else L6();
  L6():
    goto L9(NULL);
  L9(r65):
    goto L10();
  L45():
    l3 = ld x;
    c8 = `is.object`(l3);
    if c8 then L47() else L48("Moved Permanently", l3, "Moved Permanently", l3);
  L46(r33, l9, r34, dx11):
    c9 = `is.object`(dx11);
    if c9 then L50() else L51(r33, l9, dx11);
  L47():
    dr10 = tryDispatchBuiltin.1("$", l3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L49() else L48("Moved Permanently", l3, "Moved Permanently", dr10);
  L48(r29, l6, r30, l7):
    r35 = `$`(l7, <sym Message>);
    goto L46(r29, l6, r30, r35);
  L7(r39, l13, dx15):
    c10 = `is.object`(l13);
    if c10 then L55() else L56(r39, l13);
  L49():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L46("Moved Permanently", l3, "Moved Permanently", dx10);
  L50():
    dr12 = tryDispatchBuiltin.0("[<-", dx11, r34);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51(r33, l9, dr12);
  L51(r37, l11, dx13):
    ind8 = ld ind;
    check L53() else D15();
  D15():
    deopt 53 [r37, l11, dx13, r34, ind8];
  L52():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L7(r33, l9, dx14);
  L53():
    ind9 = force? ind8;
    ___1 = ldf `[<-` in base;
    r40 = dyn ___1(dx13, r34, ind9);
    goto L7(r37, l11, r40);
  L54(dx17):
    st x = dx17;
    l16 = ld x;
    c11 = `is.object`(l16);
    if c11 then L59() else L60("301", l16, "301", l16);
  L55():
    dr14 = tryDispatchBuiltin.0("$<-", l13, dx15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L57() else L56(r39, dr14);
  L56(r42, l15):
    r45 = `$<-`(l15, <sym Message>, dx15);
    goto L54(r45);
  L57():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L54(dx16);
  L58(r52, l22, r53, dx19):
    c12 = `is.object`(dx19);
    if c12 then L62() else L63(r52, l22, dx19);
  L59():
    dr16 = tryDispatchBuiltin.1("$", l16);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L61() else L60("301", l16, "301", dr16);
  L60(r48, l19, r49, l20):
    r54 = `$`(l20, <sym Status>);
    goto L58(r48, l19, r49, r54);
  L8(r58, l26, dx23):
    c13 = `is.object`(l26);
    if c13 then L67() else L68(r58, l26);
  L61():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L58("301", l16, "301", dx18);
  L62():
    dr18 = tryDispatchBuiltin.0("[<-", dx19, r53);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L64() else L63(r52, l22, dr18);
  L63(r56, l24, dx21):
    ind10 = ld ind;
    check L65() else D16();
  D16():
    deopt 64 [r56, l24, dx21, r53, ind10];
  L64():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L8(r52, l22, dx22);
  L65():
    ind11 = force? ind10;
    ___2 = ldf `[<-` in base;
    r59 = dyn ___2(dx21, r53, ind11);
    goto L8(r56, l24, r59);
  L66(r63, dx25):
    st x = dx25;
    goto L9(r63);
  L67():
    dr20 = tryDispatchBuiltin.0("$<-", l26, dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L69() else L68(r58, dr20);
  L68(r61, l28):
    r64 = `$<-`(l28, <sym Status>, dx23);
    goto L66(r61, r64);
  L69():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L66(r58, dx24);
  }
}