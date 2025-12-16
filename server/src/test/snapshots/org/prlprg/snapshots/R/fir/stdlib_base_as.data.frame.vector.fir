fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1954341438`;
    st `as.data.frame.vector` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1954341438`(x, `row.names`, optional, `...`, nm) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots, reg nm:*) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, var nm:*, reg nm_isMissing:L, reg nm_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg force:cls, reg nm1:*, reg nm2:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg length:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg row_names1:*, reg row_names2:V, reg c:V, reg c1:L, reg nrows:*, reg nrows1:V, reg r13:V, reg c2:L, reg character:cls, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x3:*, reg x4:V, reg names:cls, reg r20:V, reg length1:cls, reg r21:V, reg nrows2:*, reg nrows3:V, reg r22:V, reg c3:L, reg c4:V, reg anyDuplicated:cls, reg row_names3:*, reg row_names4:V, reg p3:p(V +), reg r24:V, reg c6:L, reg c7:V, reg c9:L, reg _set_row_names:cls, reg nrows4:*, reg nrows5:V, reg p4:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg row_names5:*, reg row_names6:V, reg c10:L, reg c11:L, reg c12:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c16:L, reg r31:V, reg row_names7:*, reg row_names8:V, reg c17:L, reg c18:L, reg c19:V, reg r32:V, reg c21:L, reg c22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg c26:L, reg r34:V, reg row_names9:*, reg row_names10:V, reg length2:cls, reg r35:V, reg nrows6:*, reg nrows7:V, reg r36:V, reg c27:L, reg c28:V, reg c30:L, reg stop:cls, reg gettextf:cls, reg nrows8:*, reg nrows9:V, reg p5:p(V +), reg r38:V, reg p6:p(V +), reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg x5:*, reg x6:V, reg names1:cls, reg r45:V, reg c31:V, reg r46:V, reg c32:L, reg l:*, reg names__:cls, reg r47:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg x7:*, reg x8:V, reg list:cls, reg r51:V, reg optional1:*, reg optional2:V, reg r52:V, reg c33:L, reg nm3:*, reg nm4:V, reg l1:*, reg names__1:cls, reg r53:V, reg structure:cls, reg value:*, reg value1:V, reg p7:p(V +), reg row_names11:*, reg row_names12:V, reg p8:p(V +), reg r56:V |
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
    st `...` = ddd;
    nm_isMissing = missing.0(nm);
    if nm_isMissing then L2() else L3(nm);
  L2():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L3(p1);
  L3(nm_orDefault):
    st nm = nm_orDefault;
    force = ldf force;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p2 = prom<V +>{
      nm1 = ld nm;
      nm2 = force? nm1;
      checkMissing(nm2);
      return nm2;
    };
    r7 = dyn force(p2);
    check L28() else D1();
  D1():
    deopt 3 [r7];
  L28():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L4(r9):
    st nrows = r9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L29():
    x1 = ld x;
    check L31() else D2();
  L30():
    r8 = dyn base1(<sym x>);
    goto L4(r8);
  D2():
    deopt 6 [x1];
  L5(r12):
    c1 = `as.logical`(r12);
    if c1 then L36() else L6();
  L31():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r10 = dyn length(x2);
    check L32() else D3();
  L33():
    row_names1 = ld `row.names`;
    check L35() else D4();
  L34():
    r11 = dyn base2(<sym row.names>);
    goto L5(r11);
  D3():
    deopt 9 [r10];
  D4():
    deopt 12 [row_names1];
  L6():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L13():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  L32():
    goto L4(r10);
  L35():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c = `==`(row_names2, NULL);
    goto L5(c);
  L36():
    nrows = ld nrows;
    check L37() else D5();
  D5():
    deopt 15 [nrows];
  L14(r29):
    c11 = `as.logical`(r29);
    if c11 then L15(c11) else L62();
  L20(r42):
    r46 = `!`(r42);
    c32 = `as.logical`(r46);
    if c32 then L84() else L22();
  L37():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r13 = `==`(nrows1, 0);
    c2 = `as.logical`(r13);
    if c2 then L38() else L7();
  L59():
    row_names5 = ld `row.names`;
    check L61() else D16();
  L60():
    r28 = dyn base5(<sym row.names>);
    goto L14(r28);
  L78():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L80() else L81();
  L79():
    r41 = dyn base8(<lang names(x)>);
    goto L20(r41);
  D16():
    deopt 49 [row_names5];
  L7():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L8(r15):
    goto L13();
  L15(c12):
    r32 = `!`(c12);
    c21 = `as.logical`(r32);
    if c21 then L17(c21) else L67();
  L21(r44):
    c31 = `==`(r44, NULL);
    goto L20(c31);
  L22():
    goto L23();
  L23():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L88() else L89();
  L38():
    character = ldf character;
    check L39() else D6();
  L61():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    c10 = `is.character`(row_names6);
    goto L14(c10);
  L62():
    sym6 = ldf `is.integer`;
    base6 = ldf `is.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  L80():
    x5 = ld x;
    check L82() else D23();
  L81():
    r43 = dyn base9(<sym x>);
    goto L21(r43);
  L84():
    l = ld x;
    names__ = ldf `names<-`;
    check L85() else D25();
  D6():
    deopt 20 [];
  D23():
    deopt 78 [x5];
  D25():
    deopt 87 [NULL, l, NULL];
  L9(r17):
    nrows2 = ld nrows;
    check L49() else D11();
  L16(c16, r31):
    c18 = `as.logical`(r31);
    c19 = `||`(c16, c18);
    goto L15(c19);
  L17(c22):
    c30 = `as.logical`(c22);
    if c30 then L74() else L19();
  L24(r50):
    st value = r50;
    optional1 = ld optional;
    check L92() else D29();
  L39():
    r14 = dyn character();
    check L40() else D7();
  L42():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L43():
    r16 = dyn base3(<lang `<-`(row.names, names(x))>);
    goto L9(r16);
  L63():
    row_names7 = ld `row.names`;
    check L65() else D17();
  L64():
    r30 = dyn base6(<sym row.names>);
    goto L16(c11, r30);
  L67():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L82():
    x6 = force? x5;
    checkMissing(x6);
    names1 = ldf names in base;
    r45 = dyn names1(x6);
    check L83() else D24();
  L85():
    r47 = dyn names__(l, NULL, NULL);
    check L86() else D26();
  L88():
    x7 = ld x;
    check L90() else D27();
  L89():
    r49 = dyn base10(<sym x>);
    goto L24(r49);
  D7():
    deopt 21 [r14];
  D11():
    deopt 33 [r17, nrows2];
  D17():
    deopt 53 [c11, row_names7];
  D24():
    deopt 81 [r45];
  D26():
    deopt 89 [NULL, r47];
  D27():
    deopt 95 [x7];
  D29():
    deopt 100 [optional1];
  L10(r19):
    st `row.names` = r19;
    length1 = ldf length in base;
    r21 = dyn length1(r19);
    check L48() else D10();
  L18(c26, r34):
    nrows6 = ld nrows;
    check L72() else D20();
  L19():
    goto L13();
  L40():
    st `row.names` = r14;
    goto L8(r14);
  L44():
    x3 = ld x;
    check L46() else D8();
  L45():
    r18 = dyn base4(<sym x>);
    goto L10(r18);
  L49():
    nrows3 = force? nrows2;
    checkMissing(nrows3);
    r22 = `!=`(r17, nrows3);
    c3 = `as.logical`(r22);
    if c3 then L11(c3) else L50();
  L65():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    c17 = `is.integer`(row_names8);
    goto L16(c11, c17);
  L68():
    row_names9 = ld `row.names`;
    check L70() else D18();
  L69():
    r33 = dyn base7(<sym row.names>);
    goto L18(c21, r33);
  L74():
    stop = ldf stop;
    check L75() else D21();
  L83():
    goto L21(r45);
  L86():
    st x = r47;
    goto L23();
  L90():
    x8 = force? x7;
    checkMissing(x8);
    list = ldf list in base;
    r51 = dyn list(x8);
    check L91() else D28();
  L92():
    optional2 = force? optional1;
    checkMissing(optional2);
    r52 = `!`(optional2);
    c33 = `as.logical`(r52);
    if c33 then L93() else L25();
  D8():
    deopt 27 [x3];
  D10():
    deopt 33 [r21];
  D18():
    deopt 60 [c21, row_names9];
  D20():
    deopt 63 [c26, r34, nrows6];
  D21():
    deopt 68 [];
  D28():
    deopt 98 [r51];
  L11(c4):
    c9 = `as.logical`(c4);
    if c9 then L54() else L12();
  L25():
    goto L26();
  L26():
    structure = ldf structure;
    check L98() else D33();
  L46():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r20 = dyn names(x4);
    check L47() else D9();
  L48():
    goto L9(r21);
  L50():
    anyDuplicated = ldf anyDuplicated;
    check L51() else D12();
  L70():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    length2 = ldf length in base;
    r35 = dyn length2(row_names10);
    check L71() else D19();
  L72():
    nrows7 = force? nrows6;
    checkMissing(nrows7);
    r36 = `!=`(r34, nrows7);
    c27 = `as.logical`(r36);
    c28 = `||`(c26, c27);
    goto L17(c28);
  L75():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        nrows8 = ld nrows;
        nrows9 = force? nrows8;
        checkMissing(nrows9);
        return nrows9;
      };
      r38 = dyn gettextf("'row.names' is not a character or integer vector of length %d", p5);
      return r38;
    };
    r40 = dyn stop[, domain](p6, NA_LGL);
    check L76() else D22();
  L91():
    goto L24(r51);
  L93():
    nm3 = ld nm;
    check L94() else D30();
  D9():
    deopt 30 [r20];
  D12():
    deopt 37 [c3];
  D19():
    deopt 63 [c21, r35];
  D22():
    deopt 72 [r40];
  D30():
    deopt 103 [nm3];
  D33():
    deopt 113 [];
  L12():
    goto L8(NULL);
  L47():
    goto L10(r20);
  L51():
    p3 = prom<V +>{
      row_names3 = ld `row.names`;
      row_names4 = force? row_names3;
      checkMissing(row_names4);
      return row_names4;
    };
    r24 = dyn anyDuplicated(p3);
    check L52() else D13();
  L54():
    _set_row_names = ldf `.set_row_names`;
    check L55() else D14();
  L71():
    goto L18(c21, r35);
  L76():
    goto L13();
  L94():
    nm4 = force? nm3;
    checkMissing(nm4);
    l1 = ld value;
    names__1 = ldf `names<-`;
    check L95() else D31();
  L98():
    p7 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    p8 = prom<V +>{
      row_names11 = ld `row.names`;
      row_names12 = force? row_names11;
      checkMissing(row_names12);
      return row_names12;
    };
    r56 = dyn structure[, `row.names`, class](p7, p8, "data.frame");
    check L99() else D34();
  D13():
    deopt 39 [c3, r24];
  D14():
    deopt 42 [];
  D31():
    deopt 106 [nm4, l1, nm4];
  D34():
    deopt 119 [r56];
  L52():
    c6 = `as.logical`(r24);
    c7 = `||`(c3, c6);
    goto L11(c7);
  L55():
    p4 = prom<V +>{
      nrows4 = ld nrows;
      nrows5 = force? nrows4;
      checkMissing(nrows5);
      return nrows5;
    };
    r26 = dyn _set_row_names(p4);
    check L56() else D15();
  L95():
    r53 = dyn names__1(l1, NULL, nm4);
    check L96() else D32();
  L99():
    popenv;
    return r56;
  D15():
    deopt 44 [r26];
  D32():
    deopt 108 [nm4, r53];
  L56():
    st `row.names` = r26;
    goto L8(r26);
  L96():
    st value = r53;
    goto L26();
  }
}