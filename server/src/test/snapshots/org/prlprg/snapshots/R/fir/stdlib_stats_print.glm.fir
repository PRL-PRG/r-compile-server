fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg paste:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg coef:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r16:V, reg length:cls, reg r17:V, reg c1:L, reg cat1:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg c3:L, reg c4:L, reg cat2:cls, reg apply:cls, reg cbind:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg co:*, reg co1:V, reg names:cls, reg r24:V, reg p5:p(V +), reg co2:*, reg co3:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg paste1:*, reg paste2:V, reg p8:p(V +), reg r30:V, reg p9:p(V +), reg r32:V, reg cat3:cls, reg r34:V, reg print_default:cls, reg format:cls, reg x11:*, reg x12:V, reg c5:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r35:V, reg p10:p(V +), reg digits1:*, reg digits2:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg cat4:cls, reg r42:V, reg cat5:cls, reg x15:*, reg x16:V, reg c6:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r43:V, reg p13:p(V +), reg x19:*, reg x20:V, reg c7:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r45:V, reg p14:p(V +), reg r47:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg naprint:cls, reg x23:*, reg x24:V, reg c8:L, reg x26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r50:V, reg p15:p(V +), reg r52:V, reg nzchar:cls, reg r53:V, reg c9:L, reg cat6:cls, reg mess:*, reg mess1:V, reg p16:p(V +), reg r55:V, reg cat7:cls, reg format1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg signif:cls, reg r59:V, reg p17:p(V +), reg r61:V, reg p18:p(V +), reg format2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg signif1:cls, reg r65:V, reg p19:p(V +), reg r67:V, reg p20:p(V +), reg format3:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg signif2:cls, reg r71:V, reg p21:p(V +), reg r73:V, reg p22:p(V +), reg r75:V, reg cat8:cls, reg r76:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg x27:*, reg x28:V, reg invisible:cls, reg r79:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        deparse = ldf deparse;
        p1 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          c = `is.object`(x2);
          if c then L1() else L2(x2);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", x2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(x4):
          r6 = `$`(x4, <sym call>);
          goto L0(r6);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r8 = dyn deparse(p1);
        return r8;
      };
      r10 = dyn paste[, sep, collapse](p2, "\n", "\n");
      return r10;
    };
    r12 = dyn cat[, , , sep]("\nCall:  ", p3, "\n\n", "");
    check L13() else D1();
  D1():
    deopt 7 [r12];
  L13():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(r14):
    c1 = `as.logical`(r14);
    if c1 then L19() else L3();
  L14():
    coef = ldf coef;
    check L16() else D2();
  L15():
    r13 = dyn base1(<lang coef(x)>);
    goto L2(r13);
  D2():
    deopt 11 [];
  L3():
    cat4 = ldf cat;
    check L38() else D14();
  L7():
    cat5 = ldf cat;
    check L40() else D16();
  L16():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r16 = dyn coef(p4);
    check L17() else D3();
  L19():
    cat1 = ldf cat;
    check L20() else D5();
  D3():
    deopt 13 [r16];
  D5():
    deopt 17 [];
  D14():
    deopt 47 [];
  D16():
    deopt 51 [];
  L17():
    length = ldf length in base;
    r17 = dyn length(r16);
    check L18() else D4();
  L20():
    r18 = dyn cat1("Coefficients");
    check L21() else D6();
  L38():
    r42 = dyn cat4("No coefficients\n\n");
    check L39() else D15();
  L40():
    p13 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      c6 = `is.object`(x16);
      if c6 then L1() else L2(x16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x18):
      r43 = `$`(x18, <sym df.null>);
      goto L0(r43);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p14 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c7 = `is.object`(x20);
      if c7 then L1() else L2(x20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x22):
      r45 = `$`(x22, <sym df.residual>);
      goto L0(r45);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r47 = dyn cat5("\nDegrees of Freedom:", p13, "Total (i.e. Null); ", p14, "Residual\n");
    check L41() else D17();
  D4():
    deopt 15 [r17];
  D6():
    deopt 19 [r18];
  D15():
    deopt 49 [r42];
  D17():
    deopt 57 [r47];
  L18():
    goto L2(r17);
  L21():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L39():
    goto L7();
  L41():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L4(r20):
    c4 = `as.logical`(r20);
    if c4 then L29() else L5();
  L8(r49):
    c9 = `as.logical`(r49);
    if c9 then L47() else L9();
  L22():
    x7 = ld x;
    check L24() else D7();
  L23():
    r19 = dyn base2(<lang `<-`(co, `$`(x, contrasts))>);
    goto L4(r19);
  L42():
    naprint = ldf naprint;
    check L44() else D18();
  L43():
    r48 = dyn base4(<lang `<-`(mess, naprint(`$`(x, na.action)))>);
    goto L8(r48);
  D7():
    deopt 21 [x7];
  D18():
    deopt 61 [];
  L5():
    goto L6();
  L6():
    cat3 = ldf cat;
    check L33() else D10();
  L9():
    goto L10();
  L10():
    cat7 = ldf cat;
    check L51() else D23();
  L24():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L26() else L27(x8);
  L29():
    cat2 = ldf cat;
    check L30() else D8();
  L44():
    p15 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c8 = `is.object`(x24);
      if c8 then L1() else L2(x24);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x24);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x26):
      r50 = `$`(x26, <sym na.action>);
      goto L0(r50);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r52 = dyn naprint(p15);
    check L45() else D19();
  L47():
    cat6 = ldf cat;
    check L48() else D21();
  D8():
    deopt 27 [];
  D10():
    deopt 35 [];
  D19():
    deopt 63 [r52];
  D21():
    deopt 68 [];
  D23():
    deopt 78 [];
  L25(dx3):
    st co = dx3;
    c3 = `is.character`(dx3);
    goto L4(c3);
  L26():
    dr2 = tryDispatchBuiltin.1("$", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(x10):
    r21 = `$`(x10, <sym contrasts>);
    goto L25(r21);
  L30():
    p9 = prom<V +>{
      apply = ldf apply;
      p7 = prom<V +>{
        cbind = ldf cbind;
        p5 = prom<V +>{
          sym3 = ldf names;
          base3 = ldf names in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r23):
          return r23;
        L1():
          co = ld co;
          co1 = force? co;
          checkMissing(co1);
          names = ldf names in base;
          r24 = dyn names(co1);
          goto L0(r24);
        L2():
          r22 = dyn base3(<sym co>);
          goto L0(r22);
        };
        p6 = prom<V +>{
          co2 = ld co;
          co3 = force? co2;
          checkMissing(co3);
          return co3;
        };
        r27 = dyn cbind(p5, p6);
        return r27;
      };
      p8 = prom<V +>{
        paste1 = ld paste;
        paste2 = force? paste1;
        checkMissing(paste2);
        return paste2;
      };
      r30 = dyn apply[, , , collapse](p7, 1, p8, "=");
      return r30;
    };
    r32 = dyn cat2("  [contrasts: ", p9, "]");
    check L31() else D9();
  L33():
    r34 = dyn cat3(":\n");
    check L34() else D11();
  L45():
    st mess = r52;
    nzchar = ldf nzchar in base;
    r53 = dyn nzchar(r52);
    check L46() else D20();
  L48():
    p16 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r55 = dyn cat6[, , , sep]("  (", p16, ")\n", "");
    check L49() else D22();
  L51():
    p18 = prom<V +>{
      format1 = ldf format;
      p17 = prom<V +>{
        sym5 = ldf signif;
        base5 = ldf signif in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r58):
        return r58;
      L1():
        signif = ldf signif in base;
        r59 = dyn signif(<lang `$`(x, null.deviance)>, <sym digits>);
        goto L0(r59);
      L2():
        r57 = dyn base5(<lang `$`(x, null.deviance)>, <sym digits>);
        goto L0(r57);
      };
      r61 = dyn format1(p17);
      return r61;
    };
    p20 = prom<V +>{
      format2 = ldf format;
      p19 = prom<V +>{
        sym6 = ldf signif;
        base6 = ldf signif in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r64):
        return r64;
      L1():
        signif1 = ldf signif in base;
        r65 = dyn signif1(<lang `$`(x, deviance)>, <sym digits>);
        goto L0(r65);
      L2():
        r63 = dyn base6(<lang `$`(x, deviance)>, <sym digits>);
        goto L0(r63);
      };
      r67 = dyn format2(p19);
      return r67;
    };
    p22 = prom<V +>{
      format3 = ldf format;
      p21 = prom<V +>{
        sym7 = ldf signif;
        base7 = ldf signif in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r70):
        return r70;
      L1():
        signif2 = ldf signif in base;
        r71 = dyn signif2(<lang `$`(x, aic)>, <sym digits>);
        goto L0(r71);
      L2():
        r69 = dyn base7(<lang `$`(x, aic)>, <sym digits>);
        goto L0(r69);
      };
      r73 = dyn format3(p21);
      return r73;
    };
    r75 = dyn cat7("Null Deviance:\t   ", p18, "\nResidual Deviance:", p20, "\tAIC:", p22);
    check L52() else D24();
  D9():
    deopt 31 [r32];
  D11():
    deopt 37 [r34];
  D20():
    deopt 66 [r53];
  D22():
    deopt 74 [r55];
  D24():
    deopt 85 [r75];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L31():
    goto L6();
  L34():
    print_default = ldf `print.default`;
    check L35() else D12();
  L46():
    goto L8(r53);
  L49():
    goto L10();
  L52():
    cat8 = ldf cat;
    check L53() else D25();
  D12():
    deopt 39 [];
  D25():
    deopt 87 [];
  L35():
    p12 = prom<V +>{
      format = ldf format;
      p10 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c5 = `is.object`(x12);
        if c5 then L1() else L2(x12);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x14):
        r35 = `$`(x14, <sym coefficients>);
        goto L0(r35);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p11 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r38 = dyn format[, digits](p10, p11);
      return r38;
    };
    r40 = dyn print_default[, `print.gap`, quote](p12, 2.0, FALSE);
    check L36() else D13();
  L53():
    r76 = dyn cat8("\n");
    check L54() else D26();
  D13():
    deopt 45 [r40];
  D26():
    deopt 89 [r76];
  L36():
    goto L7();
  L54():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L55() else L56();
  L11(r78):
    popenv;
    return r78;
  L55():
    x27 = ld x;
    check L57() else D27();
  L56():
    r77 = dyn base8(<sym x>);
    goto L11(r77);
  D27():
    deopt 92 [x27];
  L57():
    x28 = force? x27;
    checkMissing(x28);
    invisible = ldf invisible in base;
    r79 = dyn invisible(x28);
    check L58() else D28();
  D28():
    deopt 95 [r79];
  L58():
    goto L11(r79);
  }
}