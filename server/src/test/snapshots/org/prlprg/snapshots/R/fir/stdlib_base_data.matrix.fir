fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg p:p(V +), reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p1:p(V +), reg seq:cls, reg as_Date:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg data_matrix:cls, reg DF:*, reg DF1:V, reg c1:L, reg DF3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg data_matrix1:cls, reg DF4:*, reg DF5:V, reg p5:p(V +), reg r13:V |
    mkenv;
    r = clos inner853453239;
    st `data.matrix` = r;
    data_frame = ldf `data.frame`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    p1 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __ = ldf `[` in base;
      r2 = dyn __(letters3, <int 10, 11, 12>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      seq = ldf seq;
      p2 = prom<V +>{
        as_Date = ldf `as.Date`;
        r4 = dyn as_Date("2004-01-01");
        return r4;
      };
      r6 = dyn seq[, by, `length.out`](p2, "week", 3.0);
      return r6;
    };
    r8 = dyn data_frame[a, b, c, stringsAsFactors](p, p1, p3, TRUE);
    check L1() else D1();
  D1():
    deopt 13 [r8];
  L1():
    st DF = r8;
    data_matrix = ldf `data.matrix`;
    check L2() else D2();
  D2():
    deopt 16 [];
  L2():
    p4 = prom<V +>{
      DF = ld DF;
      DF1 = force? DF;
      checkMissing(DF1);
      c1 = `is.object`(DF1);
      if c1 then L1() else L2(DF1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", DF1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(DF3):
      __1 = ldf `[` in base;
      r9 = dyn __1(DF3, <int 1, 2>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn data_matrix(p4);
    check L3() else D3();
  D3():
    deopt 18 [r11];
  L3():
    data_matrix1 = ldf `data.matrix`;
    check L4() else D4();
  D4():
    deopt 20 [];
  L4():
    p5 = prom<V +>{
      DF4 = ld DF;
      DF5 = force? DF4;
      checkMissing(DF5);
      return DF5;
    };
    r13 = dyn data_matrix1(p5);
    check L5() else D5();
  D5():
    deopt 22 [r13];
  L5():
    popenv;
    return r13;
  }
}
fun inner853453239(frame, `rownames.force`) {
  (reg frame:*, reg rownames_force:*) -+> V { var frame:*, var `rownames.force`:*, reg rownames_force_isMissing:L, reg rownames_force_orDefault:*, reg is_data_frame:cls, reg frame1:*, reg frame2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg as_matrix:cls, reg frame3:*, reg frame4:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg frame5:*, reg frame6:V, reg dim:cls, reg r9:V, reg isFALSE:cls, reg rownames_force1:*, reg rownames_force2:V, reg p2:p(V +), reg r11:V, reg c1:L, reg r12:V, reg isTRUE:cls, reg rownames_force3:*, reg rownames_force4:V, reg p3:p(V +), reg r14:V, reg c2:L, reg row_names:cls, reg frame7:*, reg frame8:V, reg p4:p(V +), reg r16:V, reg _row_names_info:cls, reg frame9:*, reg frame10:V, reg p5:p(V +), reg r18:V, reg r19:V, reg c3:L, reg row_names1:cls, reg frame11:*, reg frame12:V, reg p6:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg d:*, reg d1:V, reg c4:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r24:V, reg r25:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg frame13:*, reg frame14:V, reg c6:L, reg i6:I, reg frame16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __1:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg i13:I, reg r28:V, reg xi:*, reg xi1:V, reg c7:L, reg c8:L, reg i14:I, reg c9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg i18:I, reg c13:L, reg r30:V, reg xi2:*, reg xi3:V, reg is_numeric:cls, reg r31:V, reg c14:L, reg c15:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg i26:I, reg r34:V, reg xi4:*, reg xi5:V, reg c18:L, reg c19:L, reg i27:I, reg c20:V, reg is_factor:cls, reg xi6:*, reg xi7:V, reg p7:p(V +), reg r36:V, reg c22:L, reg c23:V, reg c25:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg i34:I, reg r38:V, reg xi8:*, reg xi9:V, reg as_integer:cls, reg r39:V, reg l1:*, reg c26:L, reg i36:I, reg r41:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i38:I, reg dx5:V, reg i39:*, reg i40:V, reg ____:cls, reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg i45:I, reg r47:V, reg xi10:*, reg xi11:V, reg c27:L, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg i50:I, reg r49:V, reg factor:cls, reg xi12:*, reg xi13:V, reg p8:p(V +), reg r51:V, reg as_integer1:cls, reg r52:V, reg l4:*, reg c29:L, reg i52:I, reg r54:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i54:I, reg dx7:V, reg i55:*, reg i56:V, reg ____1:cls, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg i61:I, reg r60:V, reg xi14:*, reg xi15:V, reg isS4:cls, reg r61:V, reg c30:L, reg __2:cls, reg r62:V, reg r63:cls, reg xi16:*, reg xi17:V, reg p9:p(V +), reg r65:V, reg i64:I, reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg xi18:*, reg xi19:V, reg as_numeric:cls, reg r68:V, reg l7:*, reg c31:L, reg i68:I, reg r70:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i70:I, reg dx9:V, reg i71:*, reg i72:V, reg ____2:cls, reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg unlist:cls, reg lapply:cls, reg frame17:*, reg frame18:V, reg p10:p(V +), reg is_integer:*, reg is_integer1:V, reg p11:p(V +), reg r78:V, reg p12:p(V +), reg r80:V, reg all:cls, reg r81:V, reg matrix:cls, reg intOK:*, reg intOK1:V, reg c32:L, reg p13:p(V +), reg d4:*, reg d5:V, reg c33:L, reg d7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r83:V, reg p14:p(V +), reg d8:*, reg d9:V, reg c34:L, reg d11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r85:V, reg p15:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg rn:*, reg rn1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg frame19:*, reg frame20:V, reg names:cls, reg r91:V, reg list:cls, reg r92:V, reg p16:p(V +), reg r94:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r95:V, reg r96:V, reg d12:*, reg d13:V, reg c35:L, reg d15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r97:V, reg r98:I, reg s1:V, reg l10:I, reg i73:I, reg i74:I, reg i75:I, reg c36:L, reg x1:V, reg frame21:*, reg frame22:V, reg c37:L, reg i79:I, reg frame24:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i81:I, reg dx17:V, reg i82:*, reg i83:V, reg __6:cls, reg r99:V, reg l11:*, reg c38:L, reg i85:I, reg dx19:V, reg l13:*, reg dr18:V, reg dc9:L, reg dx21:V, reg i87:I, reg dx23:V, reg i88:*, reg i89:V, reg ___:cls, reg r100:V, reg x2:*, reg x3:V |
    mkenv;
    st frame = frame;
    rownames_force_isMissing = missing.0(rownames_force);
    if rownames_force_isMissing then L0(NA_LGL) else L0(rownames_force);
  L0(rownames_force_orDefault):
    st `rownames.force` = rownames_force_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L40() else D0();
  D0():
    deopt 1 [];
  L40():
    p = prom<V +>{
      frame1 = ld frame;
      frame2 = force? frame1;
      checkMissing(frame2);
      return frame2;
    };
    r1 = dyn is_data_frame(p);
    check L41() else D1();
  D1():
    deopt 3 [r1];
  L41():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L42() else L1();
  L1():
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L42():
    as_matrix = ldf `as.matrix`;
    check L43() else D2();
  D2():
    deopt 6 [];
  L3(r8):
    st d = r8;
    isFALSE = ldf isFALSE;
    check L51() else D6();
  L43():
    p1 = prom<V +>{
      frame3 = ld frame;
      frame4 = force? frame3;
      checkMissing(frame4);
      return frame4;
    };
    r4 = dyn as_matrix(p1);
    check L44() else D3();
  L47():
    frame5 = ld frame;
    check L49() else D4();
  L48():
    r7 = dyn base(<sym frame>);
    goto L3(r7);
  D3():
    deopt 8 [r4];
  D4():
    deopt 14 [frame5];
  D6():
    deopt 20 [];
  L44():
    popenv;
    return r4;
  L49():
    frame6 = force? frame5;
    checkMissing(frame6);
    dim = ldf dim in base;
    r9 = dyn dim(frame6);
    check L50() else D5();
  L51():
    p2 = prom<V +>{
      rownames_force1 = ld `rownames.force`;
      rownames_force2 = force? rownames_force1;
      checkMissing(rownames_force2);
      return rownames_force2;
    };
    r11 = dyn isFALSE(p2);
    check L52() else D7();
  D5():
    deopt 17 [r9];
  D7():
    deopt 22 [r11];
  L50():
    goto L3(r9);
  L52():
    c1 = `as.logical`(r11);
    if c1 then L53() else L4();
  L4():
    isTRUE = ldf isTRUE;
    check L55() else D8();
  L5(r12):
    st rn = r12;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L53():
    goto L5(NULL);
  D8():
    deopt 26 [];
  L8(r23):
    s = toForSeq(r23);
    l = length(s);
    i = 0;
    goto L10(i);
  L55():
    p3 = prom<V +>{
      rownames_force3 = ld `rownames.force`;
      rownames_force4 = force? rownames_force3;
      checkMissing(rownames_force4);
      return rownames_force4;
    };
    r14 = dyn isTRUE(p3);
    check L56() else D9();
  L67():
    d = ld d;
    check L69() else D16();
  L68():
    r22 = dyn base1(<lang `[`(d, 2)>);
    goto L8(r22);
  D9():
    deopt 28 [r14];
  D16():
    deopt 47 [d];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L73() else L32();
  L56():
    c2 = `as.logical`(r14);
    if c2 then L57() else L6();
  L69():
    d1 = force? d;
    checkMissing(d1);
    c4 = `is.object`(d1);
    if c4 then L70() else L71(d1);
  L6():
    _row_names_info = ldf `.row_names_info`;
    check L61() else D12();
  L9(dx1):
    r25 = seq_len(dx1);
    goto L8(r25);
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    frame13 = ld frame;
    check L74() else D17();
  L57():
    row_names = ldf `row.names`;
    check L58() else D10();
  L70():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L72() else L71(dr);
  L71(d3):
    __ = ldf `[` in base;
    r24 = dyn __(d3, 2);
    goto L9(r24);
  L73():
    sym10 = ldf all;
    base10 = ldf all in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  D10():
    deopt 30 [];
  D12():
    deopt 34 [];
  D17():
    deopt 53 [i2, frame13];
  L33(r75):
    st intOK = r75;
    matrix = ldf matrix;
    check L146() else D44();
  L58():
    p4 = prom<V +>{
      frame7 = ld frame;
      frame8 = force? frame7;
      checkMissing(frame8);
      return frame8;
    };
    r16 = dyn row_names(p4);
    check L59() else D11();
  L61():
    p5 = prom<V +>{
      frame9 = ld frame;
      frame10 = force? frame9;
      checkMissing(frame10);
      return frame10;
    };
    r18 = dyn _row_names_info(p5);
    check L62() else D13();
  L72():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L74():
    frame14 = force? frame13;
    checkMissing(frame14);
    c6 = `is.object`(frame14);
    if c6 then L75() else L76(i2, frame14);
  L141():
    unlist = ldf unlist;
    check L143() else D41();
  L142():
    r74 = dyn base10(<lang unlist(lapply(frame, is.integer))>);
    goto L33(r74);
  D11():
    deopt 32 [r16];
  D13():
    deopt 36 [r18];
  D41():
    deopt 151 [];
  D44():
    deopt 158 [];
  L11(i8, dx3):
    st xi = dx3;
    sym2 = ldf `is.integer`;
    base2 = ldf `is.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L59():
    goto L5(r16);
  L62():
    r19 = `<=`(r18, 0);
    c3 = `as.logical`(r19);
    if c3 then L63() else L7();
  L75():
    dr2 = tryDispatchBuiltin.1("[[", frame14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L77() else L76(i2, dr2);
  L76(i6, frame16):
    i9 = ld i;
    check L78() else D18();
  L143():
    p12 = prom<V +>{
      lapply = ldf lapply;
      p10 = prom<V +>{
        frame17 = ld frame;
        frame18 = force? frame17;
        checkMissing(frame18);
        return frame18;
      };
      p11 = prom<V +>{
        is_integer = ld `is.integer`;
        is_integer1 = force? is_integer;
        checkMissing(is_integer1);
        return is_integer1;
      };
      r78 = dyn lapply(p10, p11);
      return r78;
    };
    r80 = dyn unlist(p12);
    check L144() else D42();
  L146():
    p13 = prom<V +>{
      intOK = ld intOK;
      intOK1 = force? intOK;
      checkMissing(intOK1);
      c32 = `as.logical`(intOK1);
      if c32 then L1() else L0();
    L0():
      return NA_REAL;
    L1():
      return NA_INT;
    };
    p14 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      c33 = `is.object`(d5);
      if c33 then L1() else L2(d5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", d5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(d7):
      __3 = ldf `[` in base;
      r83 = dyn __3(d7, 1);
      goto L0(r83);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p15 = prom<V +>{
      d8 = ld d;
      d9 = force? d8;
      checkMissing(d9);
      c34 = `is.object`(d9);
      if c34 then L1() else L2(d9);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", d9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(d11):
      __4 = ldf `[` in base;
      r85 = dyn __4(d11, 2);
      goto L0(r85);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p16 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r88):
      return r88;
    L2():
      rn = ld rn;
      rn1 = force? rn;
      checkMissing(rn1);
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r87 = dyn base11(<sym rn>, <lang names(frame)>);
      goto L0(r87);
    L1(r90):
      list = ldf list in base;
      r92 = dyn list(rn1, r90);
      goto L0(r92);
    L4():
      frame19 = ld frame;
      frame20 = force? frame19;
      checkMissing(frame20);
      names = ldf names in base;
      r91 = dyn names(frame20);
      goto L1(r91);
    L5():
      r89 = dyn base12(<sym frame>);
      goto L1(r89);
    };
    r94 = dyn matrix[, nrow, ncol, dimnames](p13, p14, p15, p16);
    check L147() else D45();
  D18():
    deopt 55 [i6, frame16, i9];
  D42():
    deopt 153 [r80];
  D45():
    deopt 166 [r94];
  L7():
    row_names1 = ldf `row.names`;
    check L65() else D14();
  L12(i13, r28):
    c8 = `as.logical`(r28);
    if c8 then L13(i13, c8) else L82();
  L63():
    goto L5(NULL);
  L77():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i2, dx2);
  L78():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r26 = dyn __1(frame16, i10);
    goto L11(i6, r26);
  L79():
    xi = ld xi;
    check L81() else D19();
  L80():
    r27 = dyn base2(<sym xi>);
    goto L12(i8, r27);
  L144():
    all = ldf all in base;
    r81 = dyn all(r80);
    check L145() else D43();
  L147():
    st x = r94;
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  D14():
    deopt 42 [];
  D19():
    deopt 60 [i8, xi];
  D43():
    deopt 155 [r81];
  L13(i14, c9):
    c17 = `as.logical`(c9);
    if c17 then L88() else L15();
  L34(r96):
    s1 = toForSeq(r96);
    l10 = length(s1);
    i73 = 0;
    goto L36(i73);
  L65():
    p6 = prom<V +>{
      frame11 = ld frame;
      frame12 = force? frame11;
      checkMissing(frame12);
      return frame12;
    };
    r21 = dyn row_names1(p6);
    check L66() else D15();
  L81():
    xi1 = force? xi;
    checkMissing(xi1);
    c7 = `is.integer`(xi1);
    goto L12(i8, c7);
  L82():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L145():
    goto L33(r81);
  L148():
    d12 = ld d;
    check L150() else D46();
  L149():
    r95 = dyn base13(<lang `[`(d, 2)>);
    goto L34(r95);
  D15():
    deopt 44 [r21];
  D46():
    deopt 169 [d12];
  L14(i18, c13, r30):
    c14 = `as.logical`(r30);
    c15 = `||`(c13, c14);
    goto L13(i18, c15);
  L15():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L36(i74):
    i75 = `+`.1(i74, 1);
    c36 = `<`.1(l10, i75);
    if c36 then L154() else L39();
  L66():
    goto L5(r21);
  L83():
    xi2 = ld xi;
    check L85() else D20();
  L84():
    r29 = dyn base3(<sym xi>);
    goto L14(i13, c8, r29);
  L88():
    goto L10(i14);
  L150():
    d13 = force? d12;
    checkMissing(d13);
    c35 = `is.object`(d13);
    if c35 then L151() else L152(d13);
  D20():
    deopt 65 [i13, c8, xi2];
  L17(i26, r34):
    c19 = `as.logical`(r34);
    if c19 then L18(i26, c19) else L94();
  L35(dx15):
    r98 = seq_len(dx15);
    goto L34(r98);
  L39():
    x1 = `[[`(s1, i75, NULL, TRUE);
    st i = x1;
    frame21 = ld frame;
    check L155() else D47();
  L85():
    xi3 = force? xi2;
    checkMissing(xi3);
    is_numeric = ldf `is.numeric` in base;
    r31 = dyn is_numeric(xi3);
    check L86() else D21();
  L91():
    xi4 = ld xi;
    check L93() else D22();
  L92():
    r33 = dyn base4(<sym xi>);
    goto L17(i14, r33);
  L151():
    dr14 = tryDispatchBuiltin.1("[", d13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L153() else L152(dr14);
  L152(d15):
    __5 = ldf `[` in base;
    r97 = dyn __5(d15, 2);
    goto L35(r97);
  L154():
    x2 = ld x;
    check L164() else D50();
  D21():
    deopt 68 [i13, c8, r31];
  D22():
    deopt 75 [i14, xi4];
  D47():
    deopt 175 [i75, frame21];
  D50():
    deopt 190 [x2];
  L18(i27, c20):
    c25 = `as.logical`(c20);
    if c25 then L98() else L19();
  L86():
    goto L14(i13, c8, r31);
  L93():
    xi5 = force? xi4;
    checkMissing(xi5);
    c18 = `is.logical`(xi5);
    goto L17(i14, c18);
  L94():
    is_factor = ldf `is.factor`;
    check L95() else D23();
  L153():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L35(dx14);
  L155():
    frame22 = force? frame21;
    checkMissing(frame22);
    c37 = `is.object`(frame22);
    if c37 then L156() else L157(i75, frame22);
  L164():
    x3 = force? x2;
    checkMissing(x3);
    popenv;
    return x3;
  D23():
    deopt 79 [i26, c19];
  L19():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L109() else L110();
  L37(i81, dx17):
    l11 = ld x;
    c38 = `is.object`(l11);
    if c38 then L160() else L161(i81, dx17, l11);
  L95():
    p7 = prom<V +>{
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      return xi7;
    };
    r36 = dyn is_factor(p7);
    check L96() else D24();
  L98():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L156():
    dr16 = tryDispatchBuiltin.1("[[", frame22);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L158() else L157(i75, dr16);
  L157(i79, frame24):
    i82 = ld i;
    check L159() else D48();
  D24():
    deopt 81 [i26, c19, r36];
  D48():
    deopt 177 [i79, frame24, i82];
  L20(i34, r38):
    l1 = ld frame;
    c26 = `is.object`(l1);
    if c26 then L103() else L104(i34, r38, l1);
  L23(i45, r47):
    c28 = `as.logical`(r47);
    if c28 then L112() else L24();
  L38(i87, dx23):
    st x = dx23;
    goto L36(i87);
  L96():
    c22 = `as.logical`(r36);
    c23 = `||`(c19, c22);
    goto L18(i26, c23);
  L99():
    xi8 = ld xi;
    check L101() else D25();
  L100():
    r37 = dyn base5(<sym xi>);
    goto L20(i27, r37);
  L109():
    xi10 = ld xi;
    check L111() else D28();
  L110():
    r46 = dyn base6(<sym xi>);
    goto L23(i27, r46);
  L158():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L37(i75, dx16);
  L159():
    i83 = force? i82;
    __6 = ldf `[[` in base;
    r99 = dyn __6(frame24, i83);
    goto L37(i79, r99);
  L160():
    dr18 = tryDispatchBuiltin.0("[<-", l11, dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L162() else L161(i81, dx17, dr18);
  L161(i85, dx19, l13):
    i88 = ld i;
    check L163() else D49();
  D25():
    deopt 85 [i27, xi8];
  D28():
    deopt 99 [i27, xi10];
  D49():
    deopt 182 [i85, dx19, l13, dx17, i88];
  L21(i38, dx5):
    st frame = dx5;
    goto L10(i38);
  L24():
    sym8 = ldf isS4;
    base8 = ldf isS4 in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L124() else L125();
  L101():
    xi9 = force? xi8;
    checkMissing(xi9);
    as_integer = ldf `as.integer` in base;
    r39 = dyn as_integer(xi9);
    check L102() else D26();
  L103():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r38);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(i34, r38, dr4);
  L104(i36, r41, l3):
    i39 = ld i;
    check L106() else D27();
  L111():
    xi11 = force? xi10;
    checkMissing(xi11);
    c27 = `is.character`(xi11);
    goto L23(i27, c27);
  L112():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L162():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L38(i81, dx21);
  L163():
    i89 = force? i88;
    ___ = ldf `[<-` in base;
    r100 = dyn ___(l11, <missing>, i89, dx17);
    goto L38(i85, r100);
  D26():
    deopt 88 [i27, r39];
  D27():
    deopt 90 [i36, r41, l3, r38, i39];
  L25(i50, r49):
    l4 = ld frame;
    c29 = `is.object`(l4);
    if c29 then L118() else L119(i50, r49, l4);
  L28(i61, r60):
    c30 = `as.logical`(r60);
    if c30 then L128() else L29();
  L102():
    goto L20(i27, r39);
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(i34, dx4);
  L106():
    i40 = force? i39;
    ____ = ldf `[[<-` in base;
    r44 = dyn ____(l3, r38, i40);
    goto L21(i36, r44);
  L113():
    factor = ldf factor;
    check L115() else D29();
  L114():
    r48 = dyn base7(<lang factor(xi)>);
    goto L25(i45, r48);
  L124():
    xi14 = ld xi;
    check L126() else D33();
  L125():
    r59 = dyn base8(<sym xi>);
    goto L28(i45, r59);
  D29():
    deopt 105 [i45];
  D33():
    deopt 121 [i45, xi14];
  L26(i54, dx7):
    st frame = dx7;
    goto L10(i54);
  L29():
    sym9 = ldf `as.numeric`;
    base9 = ldf `as.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L133() else L134();
  L30(i64, r66):
    l7 = ld frame;
    c31 = `is.object`(l7);
    if c31 then L137() else L138(i64, r66, l7);
  L115():
    p8 = prom<V +>{
      xi12 = ld xi;
      xi13 = force? xi12;
      checkMissing(xi13);
      return xi13;
    };
    r51 = dyn factor(p8);
    check L116() else D30();
  L118():
    dr6 = tryDispatchBuiltin.0("[[<-", l4, r49);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L120() else L119(i50, r49, dr6);
  L119(i52, r54, l6):
    i55 = ld i;
    check L121() else D32();
  L126():
    xi15 = force? xi14;
    checkMissing(xi15);
    isS4 = ldf isS4 in base;
    r61 = dyn isS4(xi15);
    check L127() else D34();
  L128():
    __2 = ldf `::`;
    check L129() else D35();
  D30():
    deopt 107 [i45, r51];
  D32():
    deopt 111 [i52, r54, l6, r49, i55];
  D34():
    deopt 124 [i45, r61];
  D35():
    deopt 126 [i61];
  L31(i70, dx9):
    st frame = dx9;
    goto L10(i70);
  L116():
    as_integer1 = ldf `as.integer` in base;
    r52 = dyn as_integer1(r51);
    check L117() else D31();
  L120():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L26(i50, dx6);
  L121():
    i56 = force? i55;
    ____1 = ldf `[[<-` in base;
    r57 = dyn ____1(l6, r49, i56);
    goto L26(i52, r57);
  L127():
    goto L28(i45, r61);
  L129():
    r62 = dyn __2("methods", "as");
    check L130() else D36();
  L133():
    xi18 = ld xi;
    check L135() else D38();
  L134():
    r67 = dyn base9(<sym xi>);
    goto L30(i61, r67);
  L137():
    dr8 = tryDispatchBuiltin.0("[[<-", l7, r66);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L139() else L138(i64, r66, dr8);
  L138(i68, r70, l9):
    i71 = ld i;
    check L140() else D40();
  D31():
    deopt 109 [i45, r52];
  D36():
    deopt 129 [i61, r62];
  D38():
    deopt 136 [i61, xi18];
  D40():
    deopt 141 [i68, r70, l9, r66, i71];
  L117():
    goto L25(i45, r52);
  L130():
    checkFun.0(r62);
    r63 = r62 as cls;
    p9 = prom<V +>{
      xi16 = ld xi;
      xi17 = force? xi16;
      checkMissing(xi17);
      return xi17;
    };
    r65 = dyn r63(p9, "numeric");
    check L131() else D37();
  L135():
    xi19 = force? xi18;
    checkMissing(xi19);
    as_numeric = ldf `as.numeric` in base;
    r68 = dyn as_numeric(xi19);
    check L136() else D39();
  L139():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L31(i64, dx8);
  L140():
    i72 = force? i71;
    ____2 = ldf `[[<-` in base;
    r73 = dyn ____2(l9, r66, i72);
    goto L31(i68, r73);
  D37():
    deopt 133 [i61, r65];
  D39():
    deopt 139 [i61, r68];
  L131():
    goto L30(i61, r65);
  L136():
    goto L30(i61, r68);
  }
}