fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1030182466`;
    st `as.data.frame.model.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1030182466`(x, `row.names`, optional, `make.names`, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg make_names:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `make.names`:*, reg make_names_isMissing:L, reg make_names_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg d:*, reg d1:V, reg c:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r6:V, reg dn:*, reg dn1:V, reg c1:L, reg dn3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg list:cls, reg r10:V, reg optional1:*, reg optional2:V, reg r11:V, reg c2:L, reg deparse:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg p:p(V +), reg r16:V, reg c3:L, reg r18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg l:*, reg names__:cls, reg r20:V, reg l1:*, reg class__:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg row_names1:*, reg row_names2:V, reg c4:V, reg r24:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg row_names3:*, reg row_names4:V, reg as_character:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg row_names5:*, reg row_names6:V, reg length:cls, reg r30:V, reg nrows:*, reg nrows1:V, reg r31:V, reg c6:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg row_names7:*, reg row_names8:V, reg length1:cls, reg r34:V, reg p1:p(V +), reg r36:V, reg p2:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg row_names9:*, reg row_names10:V, reg length2:cls, reg r40:V, reg p3:p(V +), reg nrows2:*, reg nrows3:V, reg p4:p(V +), reg r43:V, reg p5:p(V +), reg r45:V, reg row_names11:*, reg row_names12:V, reg l2:*, reg _rowNamesDF__:cls, reg make_names1:*, reg make_names2:V, reg p6:p(V +), reg r48:V, reg _set_row_names:cls, reg nrows4:*, reg nrows5:V, reg p7:p(V +), reg r50:V, reg l3:*, reg attr__:cls, reg r51:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    make_names_isMissing = missing.0(make_names);
    if make_names_isMissing then L2(TRUE) else L2(make_names);
  L2(make_names_orDefault):
    st `make.names` = make_names_orDefault;
    st `...` = ddd;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L3(r1):
    st d = r1;
    d = ld d;
    check L22() else D2();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [d];
  L20():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L21() else D1();
  L22():
    d1 = force? d;
    checkMissing(d1);
    c = `is.object`(d1);
    if c then L23() else L24(d1);
  D1():
    deopt 5 [r2];
  L4(dx1):
    st nrows = dx1;
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L21():
    goto L3(r2);
  L23():
    dr = tryDispatchBuiltin.1("[[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(d3):
    __ = ldf `[[` in base;
    r3 = dyn __(d3, 1);
    goto L4(r3);
  L5(r5):
    st dn = r5;
    dn = ld dn;
    check L30() else D5();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L26():
    x3 = ld x;
    check L28() else D3();
  L27():
    r4 = dyn base1(<sym x>);
    goto L5(r4);
  D3():
    deopt 15 [x3];
  D5():
    deopt 20 [dn];
  L28():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r6 = dyn dimnames(x4);
    check L29() else D4();
  L30():
    dn1 = force? dn;
    checkMissing(dn1);
    c1 = `is.object`(dn1);
    if c1 then L31() else L32(dn1);
  D4():
    deopt 18 [r6];
  L6(dx3):
    st `row.names` = dx3;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L29():
    goto L5(r6);
  L31():
    dr2 = tryDispatchBuiltin.1("[[", dn1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(dn3):
    __1 = ldf `[[` in base;
    r7 = dyn __1(dn3, 1);
    goto L6(r7);
  L7(r9):
    st value = r9;
    optional1 = ld optional;
    check L38() else D8();
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L34():
    x5 = ld x;
    check L36() else D6();
  L35():
    r8 = dyn base2(<sym x>);
    goto L7(r8);
  D6():
    deopt 28 [x5];
  D8():
    deopt 33 [optional1];
  L36():
    x6 = force? x5;
    checkMissing(x6);
    list = ldf list in base;
    r10 = dyn list(x6);
    check L37() else D7();
  L38():
    optional2 = force? optional1;
    checkMissing(optional2);
    r11 = `!`(optional2);
    c2 = `as.logical`(r11);
    if c2 then L39() else L8();
  D7():
    deopt 31 [r10];
  L8():
    goto L10();
  L10():
    l1 = ld value;
    class__ = ldf `class<-`;
    check L48() else D13();
  L37():
    goto L7(r10);
  L39():
    deparse = ldf deparse;
    check L40() else D9();
  D9():
    deopt 37 [];
  D13():
    deopt 53 ["data.frame", l1, "data.frame"];
  L40():
    p = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      substitute = ldf substitute in base;
      r14 = dyn substitute(<sym x>);
      goto L0(r14);
    L2():
      r12 = dyn base3(<sym x>);
      goto L0(r12);
    };
    r16 = dyn deparse(p);
    check L41() else D10();
  L48():
    r21 = dyn class__(l1, NULL, "data.frame");
    check L49() else D14();
  D10():
    deopt 39 [r16];
  D14():
    deopt 55 ["data.frame", r21];
  L41():
    c3 = `is.object`(r16);
    if c3 then L42() else L43(r16);
  L49():
    st value = r21;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L9(dx5):
    l = ld value;
    names__ = ldf `names<-`;
    check L45() else D11();
  L11(r23):
    r24 = `!`(r23);
    c5 = `as.logical`(r24);
    if c5 then L53() else L12();
  L42():
    dr4 = tryDispatchBuiltin.1("[[", r16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(r18):
    __2 = ldf `[[` in base;
    r19 = dyn __2(r18, 1);
    goto L9(r19);
  L50():
    row_names1 = ld `row.names`;
    check L52() else D15();
  L51():
    r22 = dyn base4(<sym row.names>);
    goto L11(r22);
  D11():
    deopt 44 [dx5, l, dx5];
  D15():
    deopt 58 [row_names1];
  L12():
    _set_row_names = ldf `.set_row_names`;
    check L71() else D26();
  L17():
    value = ld value;
    check L75() else D30();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L45():
    r20 = dyn names__(l, NULL, dx5);
    check L46() else D12();
  L52():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c4 = `==`(row_names2, NULL);
    goto L11(c4);
  L53():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  D12():
    deopt 46 [dx5, r20];
  D26():
    deopt 95 [];
  D30():
    deopt 104 [value];
  L13(r26):
    st `row.names` = r26;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L46():
    st value = r20;
    goto L10();
  L54():
    row_names3 = ld `row.names`;
    check L56() else D16();
  L55():
    r25 = dyn base5(<sym row.names>);
    goto L13(r25);
  L71():
    p7 = prom<V +>{
      nrows4 = ld nrows;
      nrows5 = force? nrows4;
      checkMissing(nrows5);
      return nrows5;
    };
    r50 = dyn _set_row_names(p7);
    check L72() else D27();
  L75():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D16():
    deopt 64 [row_names3];
  D27():
    deopt 97 [r50];
  L14(r29):
    nrows = ld nrows;
    check L62() else D20();
  L56():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    as_character = ldf `as.character` in base;
    r27 = dyn as_character(row_names4);
    check L57() else D17();
  L58():
    row_names5 = ld `row.names`;
    check L60() else D18();
  L59():
    r28 = dyn base6(<sym row.names>);
    goto L14(r28);
  L72():
    l3 = ld value;
    attr__ = ldf `attr<-`;
    check L73() else D28();
  D17():
    deopt 67 [r27];
  D18():
    deopt 71 [row_names5];
  D20():
    deopt 74 [r29, nrows];
  D28():
    deopt 99 [r50, l3, r50];
  L57():
    goto L13(r27);
  L60():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    length = ldf length in base;
    r30 = dyn length(row_names6);
    check L61() else D19();
  L62():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r31 = `!=`(r29, nrows1);
    c6 = `as.logical`(r31);
    if c6 then L63() else L15();
  L73():
    r51 = dyn attr__(l3, NULL, "row.names", r50);
    check L74() else D29();
  D19():
    deopt 74 [r30];
  D29():
    deopt 102 [r50, r51];
  L15():
    goto L16();
  L16():
    row_names11 = ld `row.names`;
    check L67() else D23();
  L61():
    goto L14(r30);
  L63():
    stop = ldf stop;
    check L64() else D21();
  L74():
    st value = r51;
    goto L17();
  D21():
    deopt 78 [];
  D23():
    deopt 85 [row_names11];
  L64():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        ngettext = ldf ngettext;
        p1 = prom<V +>{
          sym7 = ldf length;
          base7 = ldf length in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r33):
          return r33;
        L1():
          row_names7 = ld `row.names`;
          row_names8 = force? row_names7;
          checkMissing(row_names8);
          length1 = ldf length in base;
          r34 = dyn length1(row_names8);
          goto L0(r34);
        L2():
          r32 = dyn base7(<sym row.names>);
          goto L0(r32);
        };
        r36 = dyn ngettext(p1, "supplied %d row name for %d rows", "supplied %d row names for %d rows");
        return r36;
      };
      p3 = prom<V +>{
        sym8 = ldf length;
        base8 = ldf length in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r39):
        return r39;
      L1():
        row_names9 = ld `row.names`;
        row_names10 = force? row_names9;
        checkMissing(row_names10);
        length2 = ldf length in base;
        r40 = dyn length2(row_names10);
        goto L0(r40);
      L2():
        r38 = dyn base8(<sym row.names>);
        goto L0(r38);
      };
      p4 = prom<V +>{
        nrows2 = ld nrows;
        nrows3 = force? nrows2;
        checkMissing(nrows3);
        return nrows3;
      };
      r43 = dyn sprintf(p2, p3, p4);
      return r43;
    };
    r45 = dyn stop[, domain](p5, NA_LGL);
    check L65() else D22();
  L67():
    row_names12 = force? row_names11;
    checkMissing(row_names12);
    l2 = ld value;
    _rowNamesDF__ = ldf `.rowNamesDF<-`;
    check L68() else D24();
  D22():
    deopt 82 [r45];
  D24():
    deopt 88 [row_names12, l2, row_names12];
  L65():
    goto L16();
  L68():
    p6 = prom<V +>{
      make_names1 = ld `make.names`;
      make_names2 = force? make_names1;
      checkMissing(make_names2);
      return make_names2;
    };
    r48 = dyn _rowNamesDF__[, , `make.names`, ](l2, NULL, p6, row_names12);
    check L69() else D25();
  D25():
    deopt 92 [row_names12, r48];
  L69():
    st value = r48;
    goto L17();
  }
}