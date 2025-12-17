fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_code_usage_in_package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg grepl:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg ind:*, reg ind1:V, reg any:cls, reg r7:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r10:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind4:*, reg ind5:V, reg r11:V, reg __1:cls, reg r12:V, reg c4:cls, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x13:*, reg x14:V, reg length1:cls, reg r18:V, reg c5:L, reg _canonicalize_quotes:cls, reg x15:*, reg x16:V, reg p1:p(V +), reg r20:V, reg regexec:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r22:V, reg vapply:cls, reg Filter:cls, reg length2:*, reg length3:V, reg p3:p(V +), reg regmatches:cls, reg y2:*, reg y3:V, reg p4:p(V +), reg m:*, reg m1:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg __2:*, reg __3:V, reg p8:p(V +), reg r31:V, reg regexec1:cls, reg y4:*, reg y5:V, reg p9:p(V +), reg r33:V, reg vapply1:cls, reg Filter1:cls, reg length4:*, reg length5:V, reg p10:p(V +), reg regmatches1:cls, reg y6:*, reg y7:V, reg p11:p(V +), reg m2:*, reg m3:V, reg p12:p(V +), reg r37:V, reg p13:p(V +), reg r39:V, reg p14:p(V +), reg __4:*, reg __5:V, reg p15:p(V +), reg r42:V, reg sort:cls, reg unique:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg funs:*, reg funs1:V, reg vars:*, reg vars1:V, reg c6:cls, reg r45:V, reg p16:p(V +), reg r47:V, reg p17:p(V +), reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg strwrap:cls, reg x17:*, reg x18:V, reg p18:p(V +), reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg y8:*, reg y9:V, reg length6:cls, reg r56:V, reg c7:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg strwrap1:cls, reg paste:cls, reg y10:*, reg y11:V, reg p19:p(V +), reg r60:V, reg p20:p(V +), reg r62:V, reg c8:cls, reg r63:V, reg r64:V, reg c9:cls, reg r65:V, reg character:cls, reg r66:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c = `as.logical`(r1);
    if c then L20() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L8();
  L8():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L19() else D1();
  L20():
    grepl = ldf grepl;
    check L21() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L9(r17):
    c5 = `as.logical`(r17);
    if c5 then L47() else L10();
  L19():
    goto L0(r2);
  L21():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn grepl[, , fixed](": partial argument match of", p, TRUE);
    check L22() else D3();
  L43():
    x13 = ld x;
    check L45() else D11();
  L44():
    r16 = dyn base3(<sym x>);
    goto L9(r16);
  D3():
    deopt 12 [r4];
  D11():
    deopt 42 [x13];
  L10():
    character = ldf character;
    check L77() else D33();
  L22():
    st ind = r4;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L45():
    x14 = force? x13;
    checkMissing(x14);
    length1 = ldf length in base;
    r18 = dyn length1(x14);
    check L46() else D12();
  L47():
    _canonicalize_quotes = ldf `.canonicalize_quotes`;
    check L48() else D13();
  D12():
    deopt 45 [r18];
  D13():
    deopt 47 [];
  D33():
    deopt 118 [];
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L27() else L3();
  L23():
    ind = ld ind;
    check L25() else D4();
  L24():
    r5 = dyn base1(<sym ind>);
    goto L2(r5);
  L46():
    goto L9(r18);
  L48():
    p1 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r20 = dyn _canonicalize_quotes(p1);
    check L49() else D14();
  L77():
    r66 = dyn character();
    check L78() else D34();
  D4():
    deopt 16 [ind];
  D14():
    deopt 49 [r20];
  D34():
    deopt 119 [r66];
  L3():
    goto L7(NULL);
  L7(r14):
    goto L8();
  L25():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r7 = dyn any(ind1);
    check L26() else D5();
  L27():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L49():
    st y = r20;
    regexec = ldf regexec;
    check L50() else D15();
  L78():
    popenv;
    return r66;
  D5():
    deopt 19 [r7];
  D15():
    deopt 52 [];
  L4(r9):
    st x = r9;
    goto L7(r9);
  L26():
    goto L2(r7);
  L28():
    x5 = ld x;
    check L30() else D6();
  L29():
    r8 = dyn base2(<lang `[`(x, ind)>, <lang `[`(x, `!`(ind))>);
    goto L4(r8);
  L50():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r22 = dyn regexec("no visible global function definition for '(.*)'", p2);
    check L51() else D16();
  D6():
    deopt 22 [x5];
  D16():
    deopt 55 [r22];
  L30():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L31() else L32(x6);
  L51():
    st m = r22;
    vapply = ldf vapply;
    check L52() else D17();
  D17():
    deopt 58 [];
  L5(dx1):
    x9 = ld x;
    check L35() else D8();
  L31():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(x8):
    ind2 = ld ind;
    check L34() else D7();
  L52():
    p7 = prom<V +>{
      Filter = ldf Filter;
      p3 = prom<V +>{
        length2 = ld length;
        length3 = force? length2;
        checkMissing(length3);
        return length3;
      };
      p6 = prom<V +>{
        regmatches = ldf regmatches;
        p4 = prom<V +>{
          y2 = ld y;
          y3 = force? y2;
          checkMissing(y3);
          return y3;
        };
        p5 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        r26 = dyn regmatches(p4, p5);
        return r26;
      };
      r28 = dyn Filter(p3, p6);
      return r28;
    };
    p8 = prom<V +>{
      __2 = ld `[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r31 = dyn vapply(p7, p8, "", 2);
    check L53() else D18();
  D7():
    deopt 24 [x8, ind2];
  D8():
    deopt 27 [x9];
  D18():
    deopt 63 [r31];
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L34():
    ind3 = force? ind2;
    __ = ldf `[` in base;
    r10 = dyn __(x8, ind3);
    goto L5(r10);
  L35():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L36() else L37(x10);
  L53():
    st funs = r31;
    regexec1 = ldf regexec;
    check L54() else D19();
  D19():
    deopt 66 [];
  L6(dx3):
    c4 = ldf c in base;
    r13 = dyn c4(dx1, dx3);
    check L40() else D10();
  L36():
    dr2 = tryDispatchBuiltin.1("[", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(dr2);
  L37(x12):
    ind4 = ld ind;
    check L39() else D9();
  L54():
    p9 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r33 = dyn regexec1("no visible binding for global variable '(.*)'", p9);
    check L55() else D20();
  D9():
    deopt 29 [x12, ind4];
  D10():
    deopt 34 [r13];
  D20():
    deopt 69 [r33];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L39():
    ind5 = force? ind4;
    checkMissing(ind5);
    r11 = `!`(ind5);
    __1 = ldf `[` in base;
    r12 = dyn __1(x12, r11);
    goto L6(r12);
  L40():
    goto L4(r13);
  L55():
    st m = r33;
    vapply1 = ldf vapply;
    check L56() else D21();
  D21():
    deopt 72 [];
  L56():
    p14 = prom<V +>{
      Filter1 = ldf Filter;
      p10 = prom<V +>{
        length4 = ld length;
        length5 = force? length4;
        checkMissing(length5);
        return length5;
      };
      p13 = prom<V +>{
        regmatches1 = ldf regmatches;
        p11 = prom<V +>{
          y6 = ld y;
          y7 = force? y6;
          checkMissing(y7);
          return y7;
        };
        p12 = prom<V +>{
          m2 = ld m;
          m3 = force? m2;
          checkMissing(m3);
          return m3;
        };
        r37 = dyn regmatches1(p11, p12);
        return r37;
      };
      r39 = dyn Filter1(p10, p13);
      return r39;
    };
    p15 = prom<V +>{
      __4 = ld `[`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r42 = dyn vapply1(p14, p15, "", 2);
    check L57() else D22();
  D22():
    deopt 77 [r42];
  L57():
    st vars = r42;
    sort = ldf sort;
    check L58() else D23();
  D23():
    deopt 80 [];
  L58():
    p17 = prom<V +>{
      unique = ldf unique;
      p16 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        funs = ld funs;
        funs1 = force? funs;
        checkMissing(funs1);
        vars = ld vars;
        vars1 = force? vars;
        checkMissing(vars1);
        c6 = ldf c in base;
        r45 = dyn c6(funs1, vars1);
        goto L0(r45);
      L2():
        r43 = dyn base4(<sym funs>, <sym vars>);
        goto L0(r43);
      };
      r47 = dyn unique(p16);
      return r47;
    };
    r49 = dyn sort(p17);
    check L59() else D24();
  D24():
    deopt 82 [r49];
  L59():
    st y = r49;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L11(r51):
    popenv;
    return r51;
  L60():
    strwrap = ldf strwrap;
    check L62() else D25();
  L61():
    r50 = dyn base5(<lang strwrap(x, indent=0, exdent=2)>, <lang if(length(y), {
        c("Undefined global functions or variables:", strwrap(paste(y, collapse=" "), indent=2, exdent=2))
      })>);
    goto L11(r50);
  D25():
    deopt 87 [];
  L62():
    p18 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r53 = dyn strwrap[, indent, exdent](p18, 0, 2);
    check L63() else D26();
  D26():
    deopt 93 [r53];
  L63():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L12(r55):
    c7 = `as.logical`(r55);
    if c7 then L68() else L13();
  L64():
    y8 = ld y;
    check L66() else D27();
  L65():
    r54 = dyn base6(<sym y>);
    goto L12(r54);
  D27():
    deopt 96 [y8];
  L13():
    goto L15(NULL);
  L15(r64):
    c9 = ldf c in base;
    r65 = dyn c9(r53, r64);
    check L75() else D32();
  L66():
    y9 = force? y8;
    checkMissing(y9);
    length6 = ldf length in base;
    r56 = dyn length6(y9);
    check L67() else D28();
  L68():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  D28():
    deopt 99 [r56];
  D32():
    deopt 116 [r65];
  L14(r58):
    goto L15(r58);
  L67():
    goto L12(r56);
  L69():
    strwrap1 = ldf strwrap;
    check L71() else D29();
  L70():
    r57 = dyn base7("Undefined global functions or variables:", <lang strwrap(paste(y, collapse=" "), indent=2, exdent=2)>);
    goto L14(r57);
  L75():
    goto L11(r65);
  D29():
    deopt 104 [];
  L71():
    p20 = prom<V +>{
      paste = ldf paste;
      p19 = prom<V +>{
        y10 = ld y;
        y11 = force? y10;
        checkMissing(y11);
        return y11;
      };
      r60 = dyn paste[, collapse](p19, " ");
      return r60;
    };
    r62 = dyn strwrap1[, indent, exdent](p20, 2, 2);
    check L72() else D30();
  D30():
    deopt 110 [r62];
  L72():
    c8 = ldf c in base;
    r63 = dyn c8("Undefined global functions or variables:", r62);
    check L73() else D31();
  D31():
    deopt 112 [r63];
  L73():
    goto L14(r63);
  }
}