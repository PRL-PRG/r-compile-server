fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner210098295;
    st findMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner210098295(f, signature, where) {
  (reg f:*, reg signature:*, reg where:*) -+> V { var f:*, var signature:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg is:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg r5:V, reg c:L, reg f3:*, reg f4:V, reg __:cls, reg r6:V, reg getGeneric:cls, reg f5:*, reg f6:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg fdef:*, reg fdef1:V, reg c1:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f7:*, reg f8:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg character:cls, reg r19:V, reg _TableMetaName:cls, reg __1:cls, reg r22:V, reg p8:p(V +), reg __2:cls, reg r24:V, reg p9:p(V +), reg r26:V, reg _findAll:cls, reg fM:*, reg fM1:V, reg p10:p(V +), reg where3:*, reg where4:V, reg p11:p(V +), reg r29:V, reg logical:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg where5:*, reg where6:V, reg length:cls, reg r32:V, reg p12:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg where7:*, reg where8:V, reg r37:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg where9:*, reg where10:V, reg c4:L, reg i6:I, reg where12:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __3:cls, reg r38:V, reg get:cls, reg fM2:*, reg fM3:V, reg p13:p(V +), reg wherei:*, reg wherei1:V, reg p14:p(V +), reg r41:V, reg _findMethodForFdef:cls, reg signature1:*, reg signature2:V, reg p15:p(V +), reg table:*, reg table1:V, reg p16:p(V +), reg fdef2:*, reg fdef3:V, reg p17:p(V +), reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg i13:I, reg r47:V, reg mi:*, reg mi1:V, reg c5:V, reg r48:V, reg l1:*, reg c6:L, reg i15:I, reg r50:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i17:I, reg dx3:V, reg i18:*, reg i19:V, reg ___:cls, reg r53:V, reg where13:*, reg where14:V, reg c7:L, reg where16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg found:*, reg found1:V, reg __4:cls, reg r54:V, reg vapply:cls, reg value:*, reg value1:V, reg p18:p(V +), reg class:*, reg class1:V, reg p19:p(V +), reg r57:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r58:V, reg r59:V, reg what:*, reg what1:V, reg identical:cls, reg r60:V, reg c8:L, reg c9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r61:V, reg c13:L, reg r62:V, reg what2:*, reg what3:V, reg identical1:cls, reg r63:V, reg c14:L, reg c15:V, reg c17:L, reg unlist:cls, reg value2:*, reg value3:V, reg p20:p(V +), reg r65:V, reg value4:*, reg value5:V |
    mkenv;
    st f = f;
    st signature = signature;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    is = ldf is;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r5 = dyn is(p2, "genericFunction");
    check L19() else D1();
  D1():
    deopt 4 [r5];
  L19():
    c = `as.logical`(r5);
    if c then L20() else L2();
  L2():
    getGeneric = ldf getGeneric;
    check L23() else D3();
  L3():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L20():
    f3 = ld f;
    check L21() else D2();
  D2():
    deopt 5 [f3];
  D3():
    deopt 12 [];
  L4(r12):
    c2 = `as.logical`(r12);
    if c2 then L28() else L5();
  L21():
    f4 = force? f3;
    checkMissing(f4);
    st fdef = f4;
    __ = ldf `@` in base;
    r6 = dyn __(<sym fdef>, <sym generic>);
    st f = r6;
    goto L3();
  L23():
    p3 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r10 = dyn getGeneric[, where](p3, p4);
    check L24() else D4();
  L25():
    fdef = ld fdef;
    check L27() else D5();
  L26():
    r11 = dyn base(<sym fdef>);
    goto L4(r11);
  D4():
    deopt 16 [r10];
  D5():
    deopt 19 [fdef];
  L5():
    _TableMetaName = ldf `.TableMetaName`;
    check L35() else D10();
  L24():
    st fdef = r10;
    goto L3();
  L27():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c1 = `==`(fdef1, NULL);
    goto L4(c1);
  L28():
    warning = ldf warning;
    check L29() else D6();
  D6():
    deopt 23 [];
  D10():
    deopt 35 [];
  L29():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          f7 = ld f;
          f8 = force? f7;
          checkMissing(f8);
          return f8;
        };
        r14 = dyn sQuote(p5);
        return r14;
      };
      r16 = dyn gettextf("no generic function %s found", p6);
      return r16;
    };
    r18 = dyn warning[, domain](p7, NA_LGL);
    check L30() else D7();
  L35():
    p8 = prom<V +>{
      __1 = ldf `@` in base;
      r22 = dyn __1(<sym fdef>, <sym generic>);
      return r22;
    };
    p9 = prom<V +>{
      __2 = ldf `@` in base;
      r24 = dyn __2(<sym fdef>, <sym package>);
      return r24;
    };
    r26 = dyn _TableMetaName(p8, p9);
    check L36() else D11();
  D7():
    deopt 27 [r18];
  D11():
    deopt 38 [r26];
  L30():
    character = ldf character;
    check L31() else D8();
  L36():
    st fM = r26;
    _findAll = ldf `.findAll`;
    check L37() else D12();
  D8():
    deopt 29 [];
  D12():
    deopt 41 [];
  L31():
    r19 = dyn character();
    check L32() else D9();
  L37():
    p10 = prom<V +>{
      fM = ld fM;
      fM1 = force? fM;
      checkMissing(fM1);
      return fM1;
    };
    p11 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r29 = dyn _findAll(p10, p11);
    check L38() else D13();
  D9():
    deopt 30 [r19];
  D13():
    deopt 44 [r29];
  L32():
    popenv;
    return r19;
  L38():
    st where = r29;
    logical = ldf logical;
    check L39() else D14();
  D14():
    deopt 47 [];
  L39():
    p12 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      length = ldf length in base;
      r32 = dyn length(where6);
      goto L0(r32);
    L2():
      r30 = dyn base1(<sym where>);
      goto L0(r30);
    };
    r34 = dyn logical(p12);
    check L40() else D15();
  D15():
    deopt 49 [r34];
  L40():
    st found = r34;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L7(r36):
    s = toForSeq(r36);
    l = length(s);
    i = 0;
    goto L8(i);
  L41():
    where7 = ld where;
    check L43() else D16();
  L42():
    r35 = dyn base2(<sym where>);
    goto L7(r35);
  D16():
    deopt 52 [where7];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L44() else L12();
  L43():
    where8 = force? where7;
    checkMissing(where8);
    r37 = seq_along(where8);
    goto L7(r37);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    where9 = ld where;
    check L45() else D17();
  L44():
    where13 = ld where;
    check L61() else D25();
  D17():
    deopt 55 [i2, where9];
  D25():
    deopt 89 [where13];
  L45():
    where10 = force? where9;
    checkMissing(where10);
    c4 = `is.object`(where10);
    if c4 then L46() else L47(i2, where10);
  L61():
    where14 = force? where13;
    checkMissing(where14);
    c7 = `is.object`(where14);
    if c7 then L62() else L63(where14);
  L9(i8, dx1):
    st wherei = dx1;
    get = ldf get;
    check L50() else D19();
  L13(dx5):
    st value = dx5;
    vapply = ldf vapply;
    check L66() else D27();
  L46():
    dr = tryDispatchBuiltin.1("[[", where10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(i2, dr);
  L47(i6, where12):
    i9 = ld i;
    check L49() else D18();
  L62():
    dr4 = tryDispatchBuiltin.1("[", where14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(dr4);
  L63(where16):
    found = ld found;
    check L65() else D26();
  D18():
    deopt 57 [i6, where12, i9];
  D19():
    deopt 62 [i8];
  D26():
    deopt 91 [where16, found];
  D27():
    deopt 96 [];
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(i2, dx);
  L49():
    i10 = force? i9;
    __3 = ldf `[[` in base;
    r38 = dyn __3(where12, i10);
    goto L9(i6, r38);
  L50():
    p13 = prom<V +>{
      fM2 = ld fM;
      fM3 = force? fM2;
      checkMissing(fM3);
      return fM3;
    };
    p14 = prom<V +>{
      wherei = ld wherei;
      wherei1 = force? wherei;
      checkMissing(wherei1);
      return wherei1;
    };
    r41 = dyn get[, , inherits](p13, p14, FALSE);
    check L51() else D20();
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L65():
    found1 = force? found;
    __4 = ldf `[` in base;
    r54 = dyn __4(where16, found1);
    goto L13(r54);
  L66():
    p18 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    p19 = prom<V +>{
      class = ld class;
      class1 = force? class;
      checkMissing(class1);
      return class1;
    };
    r57 = dyn vapply[, , , `USE.NAMES`](p18, p19, "", FALSE);
    check L67() else D28();
  D20():
    deopt 67 [i8, r41];
  D28():
    deopt 102 [r57];
  L51():
    st table = r41;
    _findMethodForFdef = ldf `.findMethodForFdef`;
    check L52() else D21();
  L67():
    st what = r57;
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  D21():
    deopt 70 [i8];
  L14(r59):
    c8 = `as.logical`(r59);
    if c8 then L15(c8) else L72();
  L52():
    p15 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p16 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p17 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r45 = dyn _findMethodForFdef(p15, p16, p17);
    check L53() else D22();
  L68():
    what = ld what;
    check L70() else D29();
  L69():
    r58 = dyn base4(<sym what>, "numeric");
    goto L14(r58);
  D22():
    deopt 74 [i8, r45];
  D29():
    deopt 106 [what];
  L15(c9):
    c17 = `as.logical`(c9);
    if c17 then L78() else L17();
  L53():
    st mi = r45;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L70():
    what1 = force? what;
    checkMissing(what1);
    identical = ldf identical in base;
    r60 = dyn identical(what1, "numeric", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L71() else D30();
  L72():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  D30():
    deopt 117 [r60];
  L10(i13, r47):
    r48 = `!`(r47);
    l1 = ld found;
    c6 = `is.object`(l1);
    if c6 then L57() else L58(i13, r48, l1);
  L16(c13, r62):
    c14 = `as.logical`(r62);
    c15 = `||`(c13, c14);
    goto L15(c15);
  L17():
    value4 = ld value;
    check L82() else D35();
  L54():
    mi = ld mi;
    check L56() else D23();
  L55():
    r46 = dyn base3(<sym mi>);
    goto L10(i8, r46);
  L71():
    goto L14(r60);
  L73():
    what2 = ld what;
    check L75() else D31();
  L74():
    r61 = dyn base5(<sym what>, "character");
    goto L16(c8, r61);
  L78():
    unlist = ldf unlist;
    check L79() else D33();
  D23():
    deopt 77 [i8, mi];
  D31():
    deopt 120 [c8, what2];
  D33():
    deopt 134 [];
  D35():
    deopt 137 [value4];
  L11(i17, dx3):
    st found = dx3;
    goto L8(i17);
  L56():
    mi1 = force? mi;
    checkMissing(mi1);
    c5 = `==`(mi1, NULL);
    goto L10(i8, c5);
  L57():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r48);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(i13, r48, dr2);
  L58(i15, r50, l3):
    i18 = ld i;
    check L60() else D24();
  L75():
    what3 = force? what2;
    checkMissing(what3);
    identical1 = ldf identical in base;
    r63 = dyn identical1(what3, "character", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L76() else D32();
  L79():
    p20 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r65 = dyn unlist(p20);
    check L80() else D34();
  L82():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  D24():
    deopt 82 [i15, r50, l3, r48, i18];
  D32():
    deopt 131 [c8, r63];
  D34():
    deopt 136 [r65];
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i13, dx2);
  L60():
    i19 = force? i18;
    ___ = ldf `[<-` in base;
    r53 = dyn ___(l3, r48, i19);
    goto L11(i15, r53);
  L76():
    goto L16(c8, r63);
  L80():
    popenv;
    return r65;
  }
}