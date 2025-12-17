fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3063089155;
    st `write.dcf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3063089155(x, file, append, useBytes, indent, width, `keep.white`) {
  (reg x:*, reg file:*, reg append:*, reg useBytes:*, reg indent:*, reg width:*, reg keep_white:*) -+> V { var x:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, var indent:*, reg indent_isMissing:L, reg indent_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption1:cls, reg r3:V, reg r4:V, reg p1:p(V +), var `keep.white`:*, reg keep_white_isMissing:L, reg keep_white_orDefault:*, reg file1:*, reg file2:V, reg r6:V, reg c:L, reg stdout:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg file3:*, reg file4:V, reg c1:L, reg c2:L, reg file5:cls, reg file6:*, reg file7:V, reg p2:p(V +), reg append1:*, reg append2:V, reg c3:L, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg on_exit:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg file8:*, reg file9:V, reg inherits:cls, reg r19:V, reg r20:V, reg c4:L, reg stop:cls, reg r21:V, reg r23:cls, reg r24:cls, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r26:V, reg r27:V, reg c5:L, reg as_data_frame:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg x5:*, reg x6:V, reg names:cls, reg r33:V, reg matrix:cls, reg nrow:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg ncol:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r38:V, reg p9:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg nmx:*, reg nmx1:V, reg keep_white1:*, reg keep_white2:V, reg match:cls, reg r45:V, reg is_na:cls, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg x11:*, reg x12:V, reg r49:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x13:V, reg x14:*, reg x15:V, reg c7:L, reg i6:I, reg x17:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg i11:I, reg r52:V, reg xj:*, reg xj1:V, reg is_atomic:cls, reg r53:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg i16:I, reg r55:V, reg xj2:*, reg xj3:V, reg is_na1:cls, reg r56:V, reg r57:V, reg fmt:cls, reg nmx2:*, reg nmx3:V, reg c9:L, reg nmx5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j2:*, reg j3:V, reg __1:cls, reg r58:V, reg p10:p(V +), reg xj4:*, reg xj5:V, reg c10:L, reg xj7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i17:*, reg i18:V, reg __2:cls, reg r60:V, reg p11:p(V +), reg foldable:*, reg foldable1:V, reg c11:L, reg foldable3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg j4:*, reg j5:V, reg __3:cls, reg r62:V, reg p12:p(V +), reg r64:V, reg l1:*, reg c12:L, reg i20:I, reg r66:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i22:I, reg r68:V, reg dx9:V, reg i23:*, reg i24:V, reg j6:*, reg j7:V, reg ___:cls, reg r69:V, reg i25:I, reg nmx6:*, reg nmx7:V, reg c13:L, reg i27:I, reg nmx9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i29:I, reg dx11:V, reg j8:*, reg j9:V, reg __4:cls, reg r71:V, reg foldable4:*, reg foldable5:V, reg c14:L, reg i31:I, reg foldable7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i33:I, reg dx13:V, reg j10:*, reg j11:V, reg __5:cls, reg r72:V, reg vapply:cls, reg xj8:*, reg xj9:V, reg p13:p(V +), reg r74:cls, reg p14:p(V +), reg r76:V, reg r77:V, reg vapply1:cls, reg xj10:*, reg xj11:V, reg c15:L, reg xj13:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i34:*, reg i35:V, reg __6:cls, reg r78:V, reg p15:p(V +), reg r80:cls, reg p16:p(V +), reg r82:V, reg l4:*, reg c16:L, reg i37:I, reg r84:V, reg l6:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i39:I, reg r86:V, reg dx17:V, reg i40:*, reg i41:V, reg j12:*, reg j13:V, reg ___1:cls, reg r87:V, reg t:cls, reg out:*, reg out1:V, reg p17:p(V +), reg r89:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg out2:*, reg out3:V, reg nzchar:cls, reg r92:V, reg character:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg is_not_empty:*, reg is_not_empty1:V, reg sum:cls, reg r95:V, reg p18:p(V +), reg r97:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r98:V, reg r99:V, reg eor:*, reg eor1:V, reg length:cls, reg r100:V, reg c17:L, reg l7:*, reg c18:L, reg r102:S, reg l9:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r104:S, reg dx19:V, reg which:cls, reg diff:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg r106:V, reg col:cls, reg out4:*, reg out5:V, reg p19:p(V +), reg r108:V, reg c19:cls, reg r109:V, reg c20:L, reg r111:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg is_not_empty2:*, reg is_not_empty3:V, reg __7:cls, reg r112:V, reg p20:p(V +), reg r114:V, reg r115:V, reg p21:p(V +), reg r117:V, reg ___2:cls, reg r118:V, reg writeLines:cls, reg paste0:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r120:V, reg r121:V, reg out6:*, reg out7:V, reg c21:L, reg out9:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg is_not_empty4:*, reg is_not_empty5:V, reg __8:cls, reg r122:V, reg c22:cls, reg r123:V, reg p22:p(V +), reg eor2:*, reg eor3:V, reg p23:p(V +), reg r126:V, reg p24:p(V +), reg file10:*, reg file11:V, reg p25:p(V +), reg useBytes1:*, reg useBytes2:V, reg p26:p(V +), reg r130:V |
    mkenv;
    st x = x;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L2(FALSE) else L2(useBytes);
  L2(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    indent_isMissing = missing.0(indent);
    if indent_isMissing then L3() else L4(indent);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.1, r);
      return r1;
    };
    goto L4(p);
  L4(indent_orDefault):
    st indent = indent_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L5() else L6(width);
  L5():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r3 = dyn getOption1("width");
      r4 = `*`(0.9, r3);
      return r4;
    };
    goto L6(p1);
  L6(width_orDefault):
    st width = width_orDefault;
    keep_white_isMissing = missing.0(keep_white);
    if keep_white_isMissing then L7(NULL) else L7(keep_white);
  L7(keep_white_orDefault):
    st `keep.white` = keep_white_orDefault;
    file1 = ld file;
    check L38() else D0();
  D0():
    deopt 0 [file1];
  L38():
    file2 = force? file1;
    checkMissing(file2);
    r6 = `==`(file2, "");
    c = `as.logical`(r6);
    if c then L39() else L8();
  L8():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L9():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L39():
    stdout = ldf stdout;
    check L40() else D1();
  D1():
    deopt 5 [];
  L10(r10):
    c2 = `as.logical`(r10);
    if c2 then L46() else L11();
  L13(r18):
    r20 = `!`(r18);
    c4 = `as.logical`(r20);
    if c4 then L56() else L14();
  L40():
    r7 = dyn stdout();
    check L41() else D2();
  L43():
    file3 = ld file;
    check L45() else D3();
  L44():
    r9 = dyn base(<sym file>);
    goto L10(r9);
  L52():
    file8 = ld file;
    check L54() else D6();
  L53():
    r17 = dyn base2(<sym file>, "connection");
    goto L13(r17);
  D2():
    deopt 6 [r7];
  D3():
    deopt 9 [file3];
  D6():
    deopt 25 [file8];
  L11():
    goto L9();
  L14():
    goto L15();
  L15():
    r23 = clos inner1236783023;
    st escape_paragraphs = r23;
    r24 = clos inner3447954687;
    st fmt = r24;
    is_data_frame = ldf `is.data.frame`;
    check L60() else D10();
  L41():
    st file = r7;
    goto L9();
  L45():
    file4 = force? file3;
    checkMissing(file4);
    c1 = `is.character`(file4);
    goto L10(c1);
  L46():
    file5 = ldf file;
    check L47() else D4();
  L54():
    file9 = force? file8;
    checkMissing(file9);
    inherits = ldf inherits in base;
    r19 = dyn inherits(file9, "connection", FALSE);
    check L55() else D7();
  L56():
    stop = ldf stop;
    check L57() else D8();
  D4():
    deopt 13 [];
  D7():
    deopt 30 [r19];
  D8():
    deopt 33 [];
  D10():
    deopt 45 [];
  L47():
    p2 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    p3 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      c3 = `as.logical`(append2);
      if c3 then L1() else L0();
    L0():
      return "w";
    L1():
      return "a";
    };
    r13 = dyn file5(p2, p3);
    check L48() else D5();
  L55():
    goto L13(r19);
  L57():
    r21 = dyn stop("'file' must be a character string or connection");
    check L58() else D9();
  L60():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r26 = dyn is_data_frame(p4);
    check L61() else D11();
  D5():
    deopt 16 [r13];
  D9():
    deopt 35 [r21];
  D11():
    deopt 47 [r26];
  L48():
    st file = r13;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L58():
    goto L15();
  L61():
    r27 = `!`(r26);
    c5 = `as.logical`(r27);
    if c5 then L62() else L16();
  L12(r15):
    goto L9();
  L16():
    goto L17();
  L17():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L49():
    on_exit = ldf `on.exit` in base;
    r16 = dyn on_exit(<lang close(file)>);
    goto L12(r16);
  L50():
    r14 = dyn base1(<lang close(file)>);
    goto L12(r14);
  L62():
    as_data_frame = ldf `as.data.frame`;
    check L63() else D12();
  D12():
    deopt 50 [];
  L18(r32):
    st nmx = r32;
    matrix = ldf matrix;
    check L70() else D16();
  L63():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r29 = dyn as_data_frame[, optional, stringsAsFactors](p5, TRUE, FALSE);
    check L64() else D13();
  L66():
    x5 = ld x;
    check L68() else D14();
  L67():
    r31 = dyn base3(<sym x>);
    goto L18(r31);
  D13():
    deopt 56 [r29];
  D14():
    deopt 62 [x5];
  D16():
    deopt 68 [];
  L64():
    st x = r29;
    goto L17();
  L68():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r33 = dyn names(x6);
    check L69() else D15();
  L70():
    p7 = prom<V +>{
      nrow = ldf nrow;
      p6 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r35 = dyn nrow(p6);
      return r35;
    };
    p9 = prom<V +>{
      ncol = ldf ncol;
      p8 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r38 = dyn ncol(p8);
      return r38;
    };
    r40 = dyn matrix("", p7, p9);
    check L71() else D17();
  D15():
    deopt 65 [r33];
  D17():
    deopt 72 [r40];
  L69():
    goto L18(r33);
  L71():
    st out = r40;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L19(r42):
    st foldable = r42;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L72():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L73():
    r41 = dyn base4(<lang match(nmx, keep.white)>);
    goto L19(r41);
  L20(r44):
    is_na = ldf `is.na` in base;
    r46 = dyn is_na(r44);
    check L79() else D21();
  L21(r48):
    s = toForSeq(r48);
    l = length(s);
    i = 0;
    goto L22(i);
  L74():
    nmx = ld nmx;
    check L76() else D18();
  L75():
    r43 = dyn base5(<sym nmx>, <sym keep.white>);
    goto L20(r43);
  L80():
    x11 = ld x;
    check L82() else D22();
  L81():
    r47 = dyn base6(<sym x>);
    goto L21(r47);
  D18():
    deopt 78 [nmx];
  D21():
    deopt 87 [r46];
  D22():
    deopt 90 [x11];
  L22(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L83() else L32();
  L76():
    nmx1 = force? nmx;
    checkMissing(nmx1);
    keep_white1 = ld `keep.white`;
    check L77() else D19();
  L79():
    goto L19(r46);
  L82():
    x12 = force? x11;
    checkMissing(x12);
    r49 = seq_along(x12);
    goto L21(r49);
  D19():
    deopt 80 [keep_white1];
  L32():
    x13 = `[[`(s, i2, NULL, TRUE);
    st j = x13;
    x14 = ld x;
    check L84() else D23();
  L77():
    keep_white2 = force? keep_white1;
    checkMissing(keep_white2);
    match = ldf match in base;
    r45 = dyn match(nmx1, keep_white2, NA_INT, NULL);
    check L78() else D20();
  L83():
    t = ldf t;
    check L125() else D43();
  D20():
    deopt 85 [r45];
  D23():
    deopt 93 [i2, x14];
  D43():
    deopt 161 [];
  L78():
    goto L20(r45);
  L84():
    x15 = force? x14;
    checkMissing(x15);
    c7 = `is.object`(x15);
    if c7 then L85() else L86(i2, x15);
  L125():
    p17 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r89 = dyn t(p17);
    check L126() else D44();
  D44():
    deopt 163 [r89];
  L23(i8, dx1):
    st xj = dx1;
    sym7 = ldf `is.atomic`;
    base7 = ldf `is.atomic` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L85():
    dr = tryDispatchBuiltin.1("[[", x15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(i2, dr);
  L86(i6, x17):
    j = ld j;
    check L88() else D24();
  L126():
    st out = r89;
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L127() else L128();
  D24():
    deopt 95 [i6, x17, j];
  L24(i11, r52):
    c8 = `as.logical`(r52);
    if c8 then L93() else L25();
  L33(r91):
    st is_not_empty = r91;
    character = ldf character;
    check L131() else D47();
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(i2, dx);
  L88():
    j1 = force? j;
    __ = ldf `[[` in base;
    r50 = dyn __(x17, j1);
    goto L23(i6, r50);
  L89():
    xj = ld xj;
    check L91() else D25();
  L90():
    r51 = dyn base7(<sym xj>);
    goto L24(i8, r51);
  L127():
    out2 = ld out;
    check L129() else D45();
  L128():
    r90 = dyn base9(<sym out>);
    goto L33(r90);
  D25():
    deopt 101 [i8, xj];
  D45():
    deopt 167 [out2];
  D47():
    deopt 173 [];
  L25():
    nmx6 = ld nmx;
    check L106() else D33();
  L28(i25):
    goto L22(i25);
  L91():
    xj1 = force? xj;
    checkMissing(xj1);
    is_atomic = ldf `is.atomic` in base;
    r53 = dyn is_atomic(xj1);
    check L92() else D26();
  L93():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L129():
    out3 = force? out2;
    checkMissing(out3);
    nzchar = ldf nzchar in base;
    r92 = dyn nzchar(out3);
    check L130() else D46();
  L131():
    p18 = prom<V +>{
      sym10 = ldf sum;
      base10 = ldf sum in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      is_not_empty = ld is_not_empty;
      is_not_empty1 = force? is_not_empty;
      checkMissing(is_not_empty1);
      sum = ldf sum in base;
      r95 = dyn sum(is_not_empty1);
      goto L0(r95);
    L2():
      r93 = dyn base10(<sym is_not_empty>);
      goto L0(r93);
    };
    r97 = dyn character(p18);
    check L132() else D48();
  D26():
    deopt 104 [i8, r53];
  D33():
    deopt 125 [i11, nmx6];
  D46():
    deopt 170 [r92];
  D48():
    deopt 175 [r97];
  L26(i16, r55):
    r57 = `!`(r55);
    st i = r57;
    fmt = ldf fmt;
    check L98() else D29();
  L92():
    goto L24(i8, r53);
  L94():
    xj2 = ld xj;
    check L96() else D27();
  L95():
    r54 = dyn base8(<sym xj>);
    goto L26(i11, r54);
  L106():
    nmx7 = force? nmx6;
    checkMissing(nmx7);
    c13 = `is.object`(nmx7);
    if c13 then L107() else L108(i11, nmx7);
  L130():
    goto L33(r92);
  L132():
    st eor = r97;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L133() else L134();
  D27():
    deopt 107 [i11, xj2];
  D29():
    deopt 114 [i16];
  L29(i29, dx11):
    st nmxj = dx11;
    foldable4 = ld foldable;
    check L111() else D35();
  L34(r99):
    c17 = `as.logical`(r99);
    if c17 then L137() else L35();
  L96():
    xj3 = force? xj2;
    checkMissing(xj3);
    is_na1 = ldf `is.na` in base;
    r56 = dyn is_na1(xj3);
    check L97() else D28();
  L98():
    p10 = prom<V +>{
      nmx2 = ld nmx;
      nmx3 = force? nmx2;
      checkMissing(nmx3);
      c9 = `is.object`(nmx3);
      if c9 then L1() else L2(nmx3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", nmx3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(nmx5):
      j2 = ld j;
      j3 = force? j2;
      __1 = ldf `[` in base;
      r58 = dyn __1(nmx5, j3);
      goto L0(r58);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p11 = prom<V +>{
      xj4 = ld xj;
      xj5 = force? xj4;
      checkMissing(xj5);
      c10 = `is.object`(xj5);
      if c10 then L1() else L2(xj5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", xj5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xj7):
      i17 = ld i;
      i18 = force? i17;
      __2 = ldf `[` in base;
      r60 = dyn __2(xj7, i18);
      goto L0(r60);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      foldable = ld foldable;
      foldable1 = force? foldable;
      checkMissing(foldable1);
      c11 = `is.object`(foldable1);
      if c11 then L1() else L2(foldable1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", foldable1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(foldable3):
      j4 = ld j;
      j5 = force? j4;
      __3 = ldf `[` in base;
      r62 = dyn __3(foldable3, j5);
      goto L0(r62);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r64 = dyn fmt(p10, p11, p12);
    check L99() else D30();
  L107():
    dr10 = tryDispatchBuiltin.1("[", nmx7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L109() else L108(i11, dr10);
  L108(i27, nmx9):
    j8 = ld j;
    check L110() else D34();
  L133():
    eor = ld eor;
    check L135() else D49();
  L134():
    r98 = dyn base11(<sym eor>);
    goto L34(r98);
  D28():
    deopt 110 [i11, r56];
  D30():
    deopt 118 [i16, r64];
  D34():
    deopt 127 [i27, nmx9, j8];
  D35():
    deopt 131 [i29, foldable4];
  D49():
    deopt 179 [eor];
  L35():
    goto L37();
  L37():
    writeLines = ldf writeLines;
    check L144() else D53();
  L97():
    goto L26(i11, r56);
  L99():
    l1 = ld out;
    c12 = `is.object`(l1);
    if c12 then L100() else L101(i16, r64, l1);
  L109():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L29(i11, dx10);
  L110():
    j9 = force? j8;
    __4 = ldf `[` in base;
    r71 = dyn __4(nmx9, j9);
    goto L29(i27, r71);
  L111():
    foldable5 = force? foldable4;
    checkMissing(foldable5);
    c14 = `is.object`(foldable5);
    if c14 then L112() else L113(i29, foldable5);
  L135():
    eor1 = force? eor;
    checkMissing(eor1);
    length = ldf length in base;
    r100 = dyn length(eor1);
    check L136() else D50();
  L137():
    l7 = ld eor;
    c18 = `is.object`(l7);
    if c18 then L138() else L139("\n", l7);
  D50():
    deopt 182 [r100];
  D53():
    deopt 195 [];
  L27(i22, r68, dx9):
    st out = dx9;
    goto L28(i22);
  L30(i33, dx13):
    st fold = dx13;
    vapply = ldf vapply;
    check L116() else D37();
  L36(r104, dx19):
    st eor = dx19;
    goto L37();
  L100():
    dr8 = tryDispatchBuiltin.0("[<-", l1, r64);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L102() else L101(i16, r64, dr8);
  L101(i20, r66, l3):
    i23 = ld i;
    check L103() else D31();
  L112():
    dr12 = tryDispatchBuiltin.1("[", foldable5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L114() else L113(i29, dr12);
  L113(i31, foldable7):
    j10 = ld j;
    check L115() else D36();
  L136():
    goto L34(r100);
  L138():
    dr18 = tryDispatchBuiltin.0("[<-", l7, "\n");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L140() else L139("\n", dr18);
  L139(r102, l9):
    which = ldf which;
    check L141() else D51();
  L144():
    p24 = prom<V +>{
      paste0 = ldf paste0;
      p22 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L2() else L3();
      L0(r121):
        return r121;
      L2():
        out6 = ld out;
        out7 = force? out6;
        checkMissing(out7);
        c21 = `is.object`(out7);
        if c21 then L4() else L5(out7);
      L3():
        r120 = dyn base13(<lang `[`(out, is_not_empty)>);
        goto L0(r120);
      L1(dx23):
        c22 = ldf c in base;
        r123 = dyn c22(dx23);
        goto L0(r123);
      L4():
        dr22 = tryDispatchBuiltin.1("[", out7);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L6() else L5(dr22);
      L5(out9):
        is_not_empty4 = ld is_not_empty;
        is_not_empty5 = force? is_not_empty4;
        __8 = ldf `[` in base;
        r122 = dyn __8(out9, is_not_empty5);
        goto L1(r122);
      L6():
        dx22 = getTryDispatchBuiltinValue(dr22);
        goto L1(dx22);
      };
      p23 = prom<V +>{
        eor2 = ld eor;
        eor3 = force? eor2;
        checkMissing(eor3);
        return eor3;
      };
      r126 = dyn paste0(p22, p23);
      return r126;
    };
    p25 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    p26 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r130 = dyn writeLines[, , useBytes](p24, p25, p26);
    check L145() else D54();
  D31():
    deopt 120 [i20, r66, l3, r64, i23];
  D36():
    deopt 133 [i31, foldable7, j10];
  D37():
    deopt 138 [i33];
  D51():
    deopt 187 [r102, l9, "\n"];
  D54():
    deopt 200 [r130];
  L102():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L27(i16, r64, dx8);
  L103():
    i24 = force? i23;
    j6 = ld j;
    check L104() else D32();
  L114():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L30(i29, dx12);
  L115():
    j11 = force? j10;
    __5 = ldf `[` in base;
    r72 = dyn __5(foldable7, j11);
    goto L30(i31, r72);
  L116():
    p13 = prom<V +>{
      xj8 = ld xj;
      xj9 = force? xj8;
      checkMissing(xj9);
      return xj9;
    };
    p14 = prom<V +>{
      r74 = clos inner1236783023;
      return r74;
    };
    r76 = dyn vapply(p13, p14, NA_LGL);
    check L117() else D38();
  L140():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L36("\n", dx18);
  L141():
    p21 = prom<V +>{
      diff = ldf diff;
      p20 = prom<V +>{
        sym12 = ldf c;
        base12 = ldf c in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L2() else L3();
      L0(r106):
        c20 = `is.object`(r106);
        if c20 then L4() else L5(r106);
      L2():
        col = ldf col;
        p19 = prom<V +>{
          out4 = ld out;
          out5 = force? out4;
          checkMissing(out5);
          return out5;
        };
        r108 = dyn col(p19);
        c19 = ldf c in base;
        r109 = dyn c19(r108);
        goto L0(r109);
      L3():
        r105 = dyn base12(<lang col(out)>);
        goto L0(r105);
      L1(dx21):
        return dx21;
      L4():
        dr20 = tryDispatchBuiltin.1("[", r106);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L6() else L5(dr20);
      L5(r111):
        is_not_empty2 = ld is_not_empty;
        is_not_empty3 = force? is_not_empty2;
        __7 = ldf `[` in base;
        r112 = dyn __7(r111, is_not_empty3);
        goto L1(r112);
      L6():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L1(dx20);
      };
      r114 = dyn diff(p20);
      r115 = `>=`(r114, 1);
      return r115;
    };
    r117 = dyn which(p21);
    check L142() else D52();
  L145():
    popenv;
    return r130;
  D32():
    deopt 121 [i20, r66, l3, r64, i24, j6];
  D38():
    deopt 142 [i33, r76];
  D52():
    deopt 189 [r102, l9, "\n", r117];
  L104():
    j7 = force? j6;
    ___ = ldf `[<-` in base;
    r69 = dyn ___(l3, r64, i24, j7);
    goto L27(i20, r66, r69);
  L117():
    r77 = `!`(r76);
    st i = r77;
    vapply1 = ldf vapply;
    check L118() else D39();
  L142():
    ___2 = ldf `[<-` in base;
    r118 = dyn ___2(l9, "\n", r117);
    goto L36(r102, r118);
  D39():
    deopt 146 [i33];
  L118():
    p15 = prom<V +>{
      xj10 = ld xj;
      xj11 = force? xj10;
      checkMissing(xj11);
      c15 = `is.object`(xj11);
      if c15 then L1() else L2(xj11);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", xj11);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(xj13):
      i34 = ld i;
      i35 = force? i34;
      __6 = ldf `[` in base;
      r78 = dyn __6(xj13, i35);
      goto L0(r78);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p16 = prom<V +>{
      r80 = clos inner1236783023;
      return r80;
    };
    r82 = dyn vapply1(p15, p16, "");
    check L119() else D40();
  D40():
    deopt 150 [i33, r82];
  L119():
    l4 = ld out;
    c16 = `is.object`(l4);
    if c16 then L120() else L121(i33, r82, l4);
  L31(i39, r86, dx17):
    st out = dx17;
    goto L28(i39);
  L120():
    dr16 = tryDispatchBuiltin.0("[<-", l4, r82);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L122() else L121(i33, r82, dr16);
  L121(i37, r84, l6):
    i40 = ld i;
    check L123() else D41();
  D41():
    deopt 152 [i37, r84, l6, r82, i40];
  L122():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L31(i33, r82, dx16);
  L123():
    i41 = force? i40;
    j12 = ld j;
    check L124() else D42();
  D42():
    deopt 153 [i37, r84, l6, r82, i41, j12];
  L124():
    j13 = force? j12;
    ___1 = ldf `[<-` in base;
    r87 = dyn ___1(l6, r82, i41, j13);
    goto L31(i37, r84, r87);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg gsub:cls, reg gsub1:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st s = s;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gsub1 = ldf gsub;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r1 = dyn gsub1[, , , perl, useBytes]("\n[ \t]*\n", "\n .\n ", p, TRUE, TRUE);
      return r1;
    };
    r3 = dyn gsub[, , , perl, useBytes]("\n \\.([^\n])", "\n  .\\1", p1, TRUE, TRUE);
    check L1() else D1();
  D1():
    deopt 9 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3447954687(tag, val, fold) {
  (reg tag:*, reg val:*, reg fold:*) -+> V { var tag:*, var val:*, var fold:*, reg fold_isMissing:L, reg fold_orDefault:*, reg fold1:*, reg fold2:V, reg c:L, reg formatDL:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tag1:*, reg tag2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg val1:*, reg val2:V, reg length:cls, reg r4:V, reg rep_int:cls, reg r5:V, reg p:p(V +), reg val3:*, reg val4:V, reg p1:p(V +), reg width:*, reg width1:V, reg p2:p(V +), reg indent:*, reg indent1:V, reg p3:p(V +), reg r10:V, reg r11:V, reg sprintf:cls, reg tag3:*, reg tag4:V, reg p4:p(V +), reg gsub:cls, reg val5:*, reg val6:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg escape_paragraphs:cls, reg s:*, reg s1:V, reg p7:p(V +), reg r18:V |
    mkenv;
    st tag = tag;
    st val = val;
    fold_isMissing = missing.0(fold);
    if fold_isMissing then L0(TRUE) else L0(fold);
  L0(fold_orDefault):
    st fold = fold_orDefault;
    fold1 = ld fold;
    check L3() else D0();
  D0():
    deopt 0 [fold1];
  L3():
    fold2 = force? fold1;
    checkMissing(fold2);
    c = `as.logical`(fold2);
    if c then L4() else L1();
  L1():
    sprintf = ldf sprintf;
    check L8() else D3();
  L2(r11):
    st s = r11;
    escape_paragraphs = ldf escape_paragraphs;
    check L10() else D5();
  L4():
    formatDL = ldf formatDL;
    check L5() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 14 [];
  D5():
    deopt 21 [];
  L5():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      tag1 = ld tag;
      tag2 = force? tag1;
      checkMissing(tag2);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<sym tag>, <lang length(val)>);
      goto L0(r);
    L1(r3):
      rep_int = ldf `rep.int` in base;
      r5 = dyn rep_int(tag2, r3);
      goto L0(r5);
    L4():
      val1 = ld val;
      val2 = force? val1;
      checkMissing(val2);
      length = ldf length in base;
      r4 = dyn length(val2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym val>);
      goto L1(r2);
    };
    p1 = prom<V +>{
      val3 = ld val;
      val4 = force? val3;
      checkMissing(val4);
      return val4;
    };
    p2 = prom<V +>{
      width = ld width;
      width1 = force? width;
      checkMissing(width1);
      return width1;
    };
    p3 = prom<V +>{
      indent = ld indent;
      indent1 = force? indent;
      checkMissing(indent1);
      return indent1;
    };
    r10 = dyn formatDL[, , style, width, indent](p, p1, "list", p2, p3);
    check L6() else D2();
  L8():
    p4 = prom<V +>{
      tag3 = ld tag;
      tag4 = force? tag3;
      checkMissing(tag4);
      return tag4;
    };
    p6 = prom<V +>{
      gsub = ldf gsub;
      p5 = prom<V +>{
        val5 = ld val;
        val6 = force? val5;
        checkMissing(val6);
        return val6;
      };
      r14 = dyn gsub("\n([^[:blank:]])", "\n \\1", p5);
      return r14;
    };
    r16 = dyn sprintf("%s: %s", p4, p6);
    check L9() else D4();
  L10():
    p7 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r18 = dyn escape_paragraphs(p7);
    check L11() else D6();
  D2():
    deopt 12 [r10];
  D4():
    deopt 18 [r16];
  D6():
    deopt 23 [r18];
  L6():
    goto L2(r10);
  L9():
    goto L2(r16);
  L11():
    popenv;
    return r18;
  }
}