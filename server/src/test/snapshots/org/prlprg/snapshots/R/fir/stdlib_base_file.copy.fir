fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1373594530;
    st `file.copy` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1373594530(from, to, overwrite, recursive, `copy.mode`, `copy.date`) {
  (reg from:*, reg to:*, reg overwrite:*, reg recursive:*, reg copy_mode:*, reg copy_date:*) -+> V { var from:*, var to:*, var overwrite:*, reg overwrite_isMissing:L, reg overwrite_orDefault:*, reg recursive1:*, reg recursive2:V, reg p:p(V +), var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `copy.mode`:*, reg copy_mode_isMissing:L, reg copy_mode_orDefault:*, var `copy.date`:*, reg copy_date_isMissing:L, reg copy_date_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg from1:*, reg from2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg logical:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg to1:*, reg to2:V, reg length1:cls, reg r10:V, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg nt:*, reg nt1:V, reg r14:V, reg c2:L, reg c4:V, reg dir_exists:cls, reg to3:*, reg to4:V, reg p1:p(V +), reg r16:V, reg c5:L, reg c6:V, reg c8:L, reg recursive3:*, reg recursive4:V, reg c9:L, reg c11:V, reg _in_:cls, reg to5:*, reg to6:V, reg p2:p(V +), reg from3:*, reg from4:V, reg p3:p(V +), reg r19:V, reg c12:L, reg c13:V, reg c15:L, reg stop1:cls, reg r20:V, reg _Platform:*, reg _Platform1:V, reg c16:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg r23:V, reg c17:L, reg gsub:cls, reg from5:*, reg from6:V, reg p4:p(V +), reg r25:V, reg gsub1:cls, reg to7:*, reg to8:V, reg p5:p(V +), reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg from7:*, reg from8:V, reg to9:*, reg to10:V, reg overwrite1:*, reg overwrite2:V, reg recursive5:*, reg recursive6:V, reg copy_mode1:*, reg copy_mode2:V, reg copy_date1:*, reg copy_date2:V, reg file_copy:cls, reg r31:V, reg nf:*, reg nf1:V, reg nt2:*, reg nt3:V, reg r34:V, reg c18:L, reg stop2:cls, reg r35:V, reg recursive7:*, reg recursive8:V, reg c19:L, reg warning:cls, reg r36:V, reg nt4:*, reg nt5:V, reg nf2:*, reg nf3:V, reg r37:V, reg c20:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg from9:*, reg from10:V, reg nt6:*, reg nt7:V, reg rep_len:cls, reg r40:V, reg file_exists:cls, reg from11:*, reg from12:V, reg p6:p(V +), reg r43:V, reg overwrite3:*, reg overwrite4:V, reg r44:V, reg c21:L, reg l:*, reg c22:L, reg r46:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r48:L, reg dx3:V, reg file_exists1:cls, reg to11:*, reg to12:V, reg p7:p(V +), reg r50:V, reg ___:cls, reg r51:V, reg dir_exists1:cls, reg from13:*, reg from14:V, reg c23:L, reg from16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg okay:*, reg okay1:V, reg __:cls, reg r53:V, reg p8:p(V +), reg r55:V, reg file_exists2:cls, reg to13:*, reg to14:V, reg c24:L, reg to16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg okay2:*, reg okay3:V, reg __1:cls, reg r56:V, reg p9:p(V +), reg r58:V, reg r59:V, reg dir_exists2:cls, reg to17:*, reg to18:V, reg c25:L, reg to20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg okay4:*, reg okay5:V, reg __2:cls, reg r60:V, reg p10:p(V +), reg r62:V, reg r63:V, reg r64:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg r66:V, reg dirtofile:*, reg dirtofile1:V, reg any:cls, reg r67:V, reg c26:L, reg warning1:cls, reg r68:V, reg dirtofile2:*, reg dirtofile3:V, reg r69:V, reg l3:*, reg c27:L, reg r71:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r73:V, reg dx11:V, reg okay6:*, reg okay7:V, reg ___1:cls, reg r74:V, reg dir_exists3:cls, reg from17:*, reg from18:V, reg c28:L, reg from20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg okay8:*, reg okay9:V, reg __3:cls, reg r75:V, reg p11:p(V +), reg r77:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg r79:V, reg fromdir:*, reg fromdir1:V, reg any1:cls, reg r80:V, reg c29:L, reg warning2:cls, reg r81:V, reg fromdir2:*, reg fromdir3:V, reg r82:V, reg l6:*, reg c30:L, reg r84:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r86:V, reg dx15:V, reg okay10:*, reg okay11:V, reg ___2:cls, reg r87:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r89:V, reg r90:V, reg _in_1:cls, reg from21:*, reg from22:V, reg c31:L, reg from24:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg okay12:*, reg okay13:V, reg __4:cls, reg r91:V, reg p12:p(V +), reg to21:*, reg to22:V, reg c32:L, reg to24:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg okay14:*, reg okay15:V, reg __5:cls, reg r93:V, reg p13:p(V +), reg r95:V, reg any2:cls, reg r96:V, reg c33:L, reg stop3:cls, reg r97:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r99:V, reg r100:V, reg okay16:*, reg okay17:V, reg any3:cls, reg r101:V, reg c34:L, reg file_create:cls, reg to25:*, reg to26:V, reg c35:L, reg to28:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg okay18:*, reg okay19:V, reg __6:cls, reg r102:V, reg p14:p(V +), reg r104:V, reg l9:*, reg c36:L, reg r106:V, reg l11:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg okay20:*, reg okay21:V, reg ___3:cls, reg r109:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r110:V, reg r111:V, reg okay22:*, reg okay23:V, reg any4:cls, reg r112:V, reg c37:L, reg file_append:cls, reg to29:*, reg to30:V, reg c38:L, reg to32:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg okay24:*, reg okay25:V, reg __7:cls, reg r113:V, reg p15:p(V +), reg from25:*, reg from26:V, reg c39:L, reg from28:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg okay26:*, reg okay27:V, reg __8:cls, reg r115:V, reg p16:p(V +), reg r117:V, reg l12:*, reg c40:L, reg r119:V, reg l14:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg okay28:*, reg okay29:V, reg ___4:cls, reg r122:V, reg copy_mode3:*, reg copy_mode4:V, reg c41:L, reg c42:V, reg copy_date3:*, reg copy_date4:V, reg c44:L, reg c45:V, reg c47:L, reg file_info:cls, reg from29:*, reg from30:V, reg c48:L, reg from32:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg okay30:*, reg okay31:V, reg __9:cls, reg r123:V, reg p17:p(V +), reg r125:V, reg copy_mode5:*, reg copy_mode6:V, reg c49:L, reg Sys_chmod:cls, reg to33:*, reg to34:V, reg c50:L, reg to36:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg okay32:*, reg okay33:V, reg __10:cls, reg r126:V, reg p18:p(V +), reg fi:*, reg fi1:V, reg c51:L, reg fi3:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r128:V, reg p19:p(V +), reg r130:V, reg copy_date5:*, reg copy_date6:V, reg c52:L, reg Sys_setFileTime:cls, reg to37:*, reg to38:V, reg c53:L, reg to40:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg okay34:*, reg okay35:V, reg __11:cls, reg r132:V, reg p20:p(V +), reg fi4:*, reg fi5:V, reg c54:L, reg fi7:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg r134:V, reg p21:p(V +), reg r136:V, reg r137:V, reg r138:V, reg r139:V, reg okay36:*, reg okay37:V |
    mkenv;
    st from = from;
    st to = to;
    overwrite_isMissing = missing.0(overwrite);
    if overwrite_isMissing then L0() else L1(overwrite);
  L0():
    p = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    goto L1(p);
  L1(overwrite_orDefault):
    st overwrite = overwrite_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L2(FALSE) else L2(recursive);
  L2(recursive_orDefault):
    st recursive = recursive_orDefault;
    copy_mode_isMissing = missing.0(copy_mode);
    if copy_mode_isMissing then L3(TRUE) else L3(copy_mode);
  L3(copy_mode_orDefault):
    st `copy.mode` = copy_mode_orDefault;
    copy_date_isMissing = missing.0(copy_date);
    if copy_date_isMissing then L4(FALSE) else L4(copy_date);
  L4(copy_date_orDefault):
    st `copy.date` = copy_date_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L53() else L54();
  L5(r2):
    st nf = r2;
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L57() else L6();
  L53():
    from1 = ld from;
    check L55() else D0();
  L54():
    r1 = dyn base(<sym from>);
    goto L5(r1);
  D0():
    deopt 2 [from1];
  L6():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L55():
    from2 = force? from1;
    checkMissing(from2);
    length = ldf length in base;
    r3 = dyn length(from2);
    check L56() else D1();
  L57():
    logical = ldf logical;
    check L58() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 9 [];
  L8(r9):
    st nt = r9;
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L66() else L9();
  L56():
    goto L5(r3);
  L58():
    r5 = dyn logical();
    check L59() else D3();
  L62():
    to1 = ld to;
    check L64() else D4();
  L63():
    r8 = dyn base1(<sym to>);
    goto L8(r8);
  D3():
    deopt 10 [r5];
  D4():
    deopt 16 [to1];
  L9():
    goto L10();
  L10():
    nt = ld nt;
    check L70() else D8();
  L59():
    popenv;
    return r5;
  L64():
    to2 = force? to1;
    checkMissing(to2);
    length1 = ldf length in base;
    r10 = dyn length1(to2);
    check L65() else D5();
  L66():
    stop = ldf stop;
    check L67() else D6();
  D5():
    deopt 19 [r10];
  D6():
    deopt 23 [];
  D8():
    deopt 28 [nt];
  L65():
    goto L8(r10);
  L67():
    r12 = dyn stop("no files to copy to");
    check L68() else D7();
  L70():
    nt1 = force? nt;
    checkMissing(nt1);
    r14 = `==`(nt1, 1.0);
    c2 = `as.logical`(r14);
    if c2 then L71() else L11(c2);
  D7():
    deopt 25 [r12];
  L11(c4):
    c8 = `as.logical`(c4);
    if c8 then L75() else L12();
  L68():
    goto L10();
  L71():
    dir_exists = ldf `dir.exists`;
    check L72() else D9();
  D9():
    deopt 33 [c2];
  L12():
    nf = ld nf;
    check L107() else D28();
  L72():
    p1 = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    r16 = dyn dir_exists(p1);
    check L73() else D10();
  L75():
    recursive3 = ld recursive;
    check L76() else D11();
  D10():
    deopt 35 [c2, r16];
  D11():
    deopt 37 [recursive3];
  D28():
    deopt 93 [nf];
  L73():
    c5 = `as.logical`(r16);
    c6 = `&&`(c2, c5);
    goto L11(c6);
  L76():
    recursive4 = force? recursive3;
    checkMissing(recursive4);
    c9 = `as.logical`(recursive4);
    if c9 then L77() else L13(c9);
  L107():
    nf1 = force? nf;
    checkMissing(nf1);
    nt2 = ld nt;
    check L108() else D29();
  D29():
    deopt 94 [nf1, nt2];
  L13(c11):
    c15 = `as.logical`(c11);
    if c15 then L81() else L14();
  L77():
    _in_ = ldf `%in%`;
    check L78() else D12();
  L108():
    nt3 = force? nt2;
    checkMissing(nt3);
    r34 = `>`(nf1, nt3);
    c18 = `as.logical`(r34);
    if c18 then L109() else L20();
  D12():
    deopt 40 [c9];
  L14():
    goto L15();
  L15():
    _Platform = ld `.Platform`;
    check L85() else D16();
  L19():
    nt4 = ld nt;
    check L118() else D35();
  L20():
    recursive7 = ld recursive;
    check L113() else D32();
  L78():
    p2 = prom<V +>{
      to5 = ld to;
      to6 = force? to5;
      checkMissing(to6);
      return to6;
    };
    p3 = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    r19 = dyn _in_(p2, p3);
    check L79() else D13();
  L81():
    stop1 = ldf stop;
    check L82() else D14();
  L109():
    stop2 = ldf stop;
    check L110() else D30();
  D13():
    deopt 43 [c9, r19];
  D14():
    deopt 46 [];
  D16():
    deopt 51 [_Platform];
  D30():
    deopt 98 [];
  D32():
    deopt 101 [recursive7];
  D35():
    deopt 109 [nt4];
  L79():
    c12 = `as.logical`(r19);
    c13 = `&&`(c9, c12);
    goto L13(c13);
  L82():
    r20 = dyn stop1("attempt to copy a directory to itself");
    check L83() else D15();
  L85():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c16 = `is.object`(_Platform1);
    if c16 then L87() else L88(_Platform1);
  L110():
    r35 = dyn stop2("more 'from' files than 'to' files");
    check L111() else D31();
  L113():
    recursive8 = force? recursive7;
    checkMissing(recursive8);
    c19 = `as.logical`(recursive8);
    if c19 then L114() else L21();
  L118():
    nt5 = force? nt4;
    checkMissing(nt5);
    nf2 = ld nf;
    check L119() else D36();
  D15():
    deopt 48 [r20];
  D31():
    deopt 100 [r35];
  D36():
    deopt 110 [nt5, nf2];
  L21():
    goto L19();
  L83():
    goto L15();
  L86(dx1):
    r23 = `==`(dx1, "windows");
    c17 = `as.logical`(r23);
    if c17 then L90() else L16();
  L87():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(_Platform3):
    r22 = `$`(_Platform3, <sym OS.type>);
    goto L86(r22);
  L111():
    goto L19();
  L114():
    warning = ldf warning;
    check L115() else D33();
  L119():
    nf3 = force? nf2;
    checkMissing(nf3);
    r37 = `>`(nt5, nf3);
    c20 = `as.logical`(r37);
    if c20 then L120() else L22();
  D33():
    deopt 104 [];
  L16():
    goto L17();
  L17():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L22():
    goto L24();
  L24():
    file_exists = ldf `file.exists`;
    check L127() else D40();
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L86(dx);
  L90():
    gsub = ldf gsub;
    check L91() else D17();
  L115():
    r36 = dyn warning("'recursive' will be ignored as 'to' is not a single existing directory");
    check L116() else D34();
  L120():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L121() else L122();
  D17():
    deopt 57 [];
  D34():
    deopt 106 [r36];
  D40():
    deopt 125 [];
  L18(r30):
    popenv;
    return r30;
  L23(r39):
    st from = r39;
    goto L24();
  L91():
    p4 = prom<V +>{
      from5 = ld from;
      from6 = force? from5;
      checkMissing(from6);
      return from6;
    };
    r25 = dyn gsub[, , , fixed]("/", "\\", p4, TRUE);
    check L92() else D18();
  L96():
    from7 = ld from;
    check L98() else D21();
  L97():
    r29 = dyn base2(<lang file.copy(from, to, overwrite, recursive, copy.mode, copy.date)>);
    goto L18(r29);
  L116():
    goto L19();
  L121():
    from9 = ld from;
    check L123() else D37();
  L122():
    r38 = dyn base3[, `length.out`](<sym from>, <sym nt>);
    goto L23(r38);
  L127():
    p6 = prom<V +>{
      from11 = ld from;
      from12 = force? from11;
      checkMissing(from12);
      return from12;
    };
    r43 = dyn file_exists(p6);
    check L128() else D41();
  D18():
    deopt 63 [r25];
  D21():
    deopt 78 [from7];
  D37():
    deopt 115 [from9];
  D41():
    deopt 127 [r43];
  L92():
    st from = r25;
    gsub1 = ldf gsub;
    check L93() else D19();
  L98():
    from8 = force? from7;
    checkMissing(from8);
    to9 = ld to;
    check L99() else D22();
  L123():
    from10 = force? from9;
    checkMissing(from10);
    nt6 = ld nt;
    check L124() else D38();
  L128():
    st okay = r43;
    overwrite3 = ld overwrite;
    check L129() else D42();
  D19():
    deopt 66 [];
  D22():
    deopt 80 [to9];
  D38():
    deopt 117 [nt6];
  D42():
    deopt 129 [overwrite3];
  L93():
    p5 = prom<V +>{
      to7 = ld to;
      to8 = force? to7;
      checkMissing(to8);
      return to8;
    };
    r27 = dyn gsub1[, , , fixed]("/", "\\", p5, TRUE);
    check L94() else D20();
  L99():
    to10 = force? to9;
    checkMissing(to10);
    overwrite1 = ld overwrite;
    check L100() else D23();
  L124():
    nt7 = force? nt6;
    checkMissing(nt7);
    rep_len = ldf rep_len in base;
    r40 = dyn rep_len(from10, nt7);
    check L125() else D39();
  L129():
    overwrite4 = force? overwrite3;
    checkMissing(overwrite4);
    r44 = `!`(overwrite4);
    c21 = `as.logical`(r44);
    if c21 then L130() else L25();
  D20():
    deopt 72 [r27];
  D23():
    deopt 82 [overwrite1];
  D39():
    deopt 120 [r40];
  L25():
    dir_exists1 = ldf `dir.exists`;
    check L137() else D45();
  L27():
    dir_exists3 = ldf `dir.exists`;
    check L156() else D57();
  L94():
    st to = r27;
    goto L17();
  L100():
    overwrite2 = force? overwrite1;
    checkMissing(overwrite2);
    recursive5 = ld recursive;
    check L101() else D24();
  L125():
    goto L23(r40);
  L130():
    l = ld okay;
    c22 = `is.object`(l);
    if c22 then L131() else L132(FALSE, l);
  D24():
    deopt 84 [recursive5];
  D45():
    deopt 142 [];
  D57():
    deopt 176 [];
  L26(r48, dx3):
    st okay = dx3;
    goto L27();
  L101():
    recursive6 = force? recursive5;
    checkMissing(recursive6);
    copy_mode1 = ld `copy.mode`;
    check L102() else D25();
  L131():
    dr2 = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132(FALSE, dr2);
  L132(r46, l2):
    file_exists1 = ldf `file.exists`;
    check L134() else D43();
  L137():
    p8 = prom<V +>{
      from13 = ld from;
      from14 = force? from13;
      checkMissing(from14);
      c23 = `is.object`(from14);
      if c23 then L1() else L2(from14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", from14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(from16):
      okay = ld okay;
      okay1 = force? okay;
      __ = ldf `[` in base;
      r53 = dyn __(from16, okay1);
      goto L0(r53);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r55 = dyn dir_exists1(p8);
    check L138() else D46();
  L156():
    p11 = prom<V +>{
      from17 = ld from;
      from18 = force? from17;
      checkMissing(from18);
      c28 = `is.object`(from18);
      if c28 then L1() else L2(from18);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", from18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(from20):
      okay8 = ld okay;
      okay9 = force? okay8;
      __3 = ldf `[` in base;
      r75 = dyn __3(from20, okay9);
      goto L0(r75);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r77 = dyn dir_exists3(p11);
    check L157() else D58();
  D25():
    deopt 86 [copy_mode1];
  D43():
    deopt 136 [r46, l2, FALSE];
  D46():
    deopt 144 [r55];
  D58():
    deopt 178 [r77];
  L102():
    copy_mode2 = force? copy_mode1;
    checkMissing(copy_mode2);
    copy_date1 = ld `copy.date`;
    check L103() else D26();
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(FALSE, dx2);
  L134():
    p7 = prom<V +>{
      to11 = ld to;
      to12 = force? to11;
      checkMissing(to12);
      return to12;
    };
    r50 = dyn file_exists1(p7);
    check L135() else D44();
  L138():
    file_exists2 = ldf `file.exists`;
    check L139() else D47();
  L157():
    st fromdir = r77;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L158() else L159();
  D26():
    deopt 88 [copy_date1];
  D44():
    deopt 138 [r46, l2, FALSE, r50];
  D47():
    deopt 145 [r55];
  L31(r79):
    c29 = `as.logical`(r79);
    if c29 then L162() else L32();
  L103():
    copy_date2 = force? copy_date1;
    checkMissing(copy_date2);
    file_copy = ldf `file.copy` in base;
    r31 = dyn file_copy(from8, to10, overwrite2, recursive6, copy_mode2, copy_date2);
    check L104() else D27();
  L135():
    ___ = ldf `[<-` in base;
    r51 = dyn ___(l2, FALSE, r50);
    goto L26(r46, r51);
  L139():
    p9 = prom<V +>{
      to13 = ld to;
      to14 = force? to13;
      checkMissing(to14);
      c24 = `is.object`(to14);
      if c24 then L1() else L2(to14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", to14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(to16):
      okay2 = ld okay;
      okay3 = force? okay2;
      __1 = ldf `[` in base;
      r56 = dyn __1(to16, okay3);
      goto L0(r56);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r58 = dyn file_exists2(p9);
    check L140() else D48();
  L158():
    fromdir = ld fromdir;
    check L160() else D59();
  L159():
    r78 = dyn base5(<sym fromdir>);
    goto L31(r78);
  D27():
    deopt 91 [r31];
  D48():
    deopt 147 [r55, r58];
  D59():
    deopt 182 [fromdir];
  L32():
    goto L34();
  L34():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L171() else L172();
  L104():
    goto L18(r31);
  L140():
    r59 = `&&`(r55, r58);
    dir_exists2 = ldf `dir.exists`;
    check L141() else D49();
  L160():
    fromdir1 = force? fromdir;
    checkMissing(fromdir1);
    any1 = ldf any in base;
    r80 = dyn any1(fromdir1);
    check L161() else D60();
  L162():
    warning2 = ldf warning;
    check L163() else D61();
  D49():
    deopt 149 [r59];
  D60():
    deopt 185 [r80];
  D61():
    deopt 187 [];
  L35(r90):
    c33 = `as.logical`(r90);
    if c33 then L176() else L36();
  L141():
    p10 = prom<V +>{
      to17 = ld to;
      to18 = force? to17;
      checkMissing(to18);
      c25 = `is.object`(to18);
      if c25 then L1() else L2(to18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", to18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(to20):
      okay4 = ld okay;
      okay5 = force? okay4;
      __2 = ldf `[` in base;
      r60 = dyn __2(to20, okay5);
      goto L0(r60);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r62 = dyn dir_exists2(p10);
    check L142() else D50();
  L161():
    goto L31(r80);
  L163():
    r81 = dyn warning2("directories are omitted unless 'recursive = TRUE'");
    check L164() else D62();
  L171():
    _in_1 = ldf `%in%`;
    check L173() else D65();
  L172():
    r89 = dyn base6(<lang `%in%`(`[`(from, okay), `[`(to, okay))>);
    goto L35(r89);
  D50():
    deopt 151 [r59, r62];
  D62():
    deopt 189 [r81];
  D65():
    deopt 203 [];
  L36():
    goto L37();
  L37():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L180() else L181();
  L142():
    r63 = `!`(r62);
    r64 = `&&`(r59, r63);
    st dirtofile = r64;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L143() else L144();
  L164():
    fromdir2 = ld fromdir;
    check L165() else D63();
  L173():
    p12 = prom<V +>{
      from21 = ld from;
      from22 = force? from21;
      checkMissing(from22);
      c31 = `is.object`(from22);
      if c31 then L1() else L2(from22);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", from22);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(from24):
      okay12 = ld okay;
      okay13 = force? okay12;
      __4 = ldf `[` in base;
      r91 = dyn __4(from24, okay13);
      goto L0(r91);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p13 = prom<V +>{
      to21 = ld to;
      to22 = force? to21;
      checkMissing(to22);
      c32 = `is.object`(to22);
      if c32 then L1() else L2(to22);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", to22);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(to24):
      okay14 = ld okay;
      okay15 = force? okay14;
      __5 = ldf `[` in base;
      r93 = dyn __5(to24, okay15);
      goto L0(r93);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r95 = dyn _in_1(p12, p13);
    check L174() else D66();
  L176():
    stop3 = ldf stop;
    check L177() else D68();
  D63():
    deopt 190 [fromdir2];
  D66():
    deopt 206 [r95];
  D68():
    deopt 210 [];
  L28(r66):
    c26 = `as.logical`(r66);
    if c26 then L147() else L29();
  L38(r100):
    c34 = `as.logical`(r100);
    if c34 then L184() else L39();
  L143():
    dirtofile = ld dirtofile;
    check L145() else D51();
  L144():
    r65 = dyn base4(<sym dirtofile>);
    goto L28(r65);
  L165():
    fromdir3 = force? fromdir2;
    checkMissing(fromdir3);
    r82 = `!`(fromdir3);
    l6 = ld okay;
    c30 = `is.object`(l6);
    if c30 then L166() else L167(r82, l6);
  L174():
    any2 = ldf any in base;
    r96 = dyn any2(r95);
    check L175() else D67();
  L177():
    r97 = dyn stop3("file can not be copied both 'from' and 'to'");
    check L178() else D69();
  L180():
    okay16 = ld okay;
    check L182() else D70();
  L181():
    r99 = dyn base7(<sym okay>);
    goto L38(r99);
  D51():
    deopt 157 [dirtofile];
  D67():
    deopt 208 [r96];
  D69():
    deopt 212 [r97];
  D70():
    deopt 217 [okay16];
  L29():
    goto L27();
  L33(r86, dx15):
    st okay = dx15;
    goto L34();
  L39():
    goto L52();
  L52():
    okay36 = ld okay;
    check L222() else D90();
  L145():
    dirtofile1 = force? dirtofile;
    checkMissing(dirtofile1);
    any = ldf any in base;
    r67 = dyn any(dirtofile1);
    check L146() else D52();
  L147():
    warning1 = ldf warning;
    check L148() else D53();
  L166():
    dr14 = tryDispatchBuiltin.0("[<-", l6, r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L168() else L167(r82, dr14);
  L167(r84, l8):
    okay10 = ld okay;
    check L169() else D64();
  L175():
    goto L35(r96);
  L178():
    goto L37();
  L182():
    okay17 = force? okay16;
    checkMissing(okay17);
    any3 = ldf any in base;
    r101 = dyn any3(okay17);
    check L183() else D71();
  L184():
    file_create = ldf `file.create`;
    check L185() else D72();
  D52():
    deopt 160 [r67];
  D53():
    deopt 162 [];
  D64():
    deopt 194 [r84, l8, r82, okay10];
  D71():
    deopt 220 [r101];
  D72():
    deopt 222 [];
  D90():
    deopt 283 [okay36];
  L146():
    goto L28(r67);
  L148():
    r68 = dyn warning1("cannot overwrite a non-directory with a directory");
    check L149() else D54();
  L168():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L33(r82, dx14);
  L169():
    okay11 = force? okay10;
    ___2 = ldf `[<-` in base;
    r87 = dyn ___2(l8, r82, okay11);
    goto L33(r84, r87);
  L183():
    goto L38(r101);
  L185():
    p14 = prom<V +>{
      to25 = ld to;
      to26 = force? to25;
      checkMissing(to26);
      c35 = `is.object`(to26);
      if c35 then L1() else L2(to26);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", to26);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(to28):
      okay18 = ld okay;
      okay19 = force? okay18;
      __6 = ldf `[` in base;
      r102 = dyn __6(to28, okay19);
      goto L0(r102);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r104 = dyn file_create(p14);
    check L186() else D73();
  L222():
    okay37 = force? okay36;
    checkMissing(okay37);
    popenv;
    return okay37;
  D54():
    deopt 164 [r68];
  D73():
    deopt 224 [r104];
  L149():
    dirtofile2 = ld dirtofile;
    check L150() else D55();
  L186():
    l9 = ld okay;
    c36 = `is.object`(l9);
    if c36 then L187() else L188(r104, l9);
  D55():
    deopt 165 [dirtofile2];
  L40(dx23):
    st okay = dx23;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L191() else L192();
  L150():
    dirtofile3 = force? dirtofile2;
    checkMissing(dirtofile3);
    r69 = `!`(dirtofile3);
    l3 = ld okay;
    c27 = `is.object`(l3);
    if c27 then L151() else L152(r69, l3);
  L187():
    dr22 = tryDispatchBuiltin.0("[<-", l9, r104);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L189() else L188(r104, dr22);
  L188(r106, l11):
    okay20 = ld okay;
    check L190() else D74();
  D74():
    deopt 226 [r106, l11, r104, okay20];
  L30(r73, dx11):
    st okay = dx11;
    goto L27();
  L41(r111):
    c37 = `as.logical`(r111);
    if c37 then L195() else L42();
  L151():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r69);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L153() else L152(r69, dr10);
  L152(r71, l5):
    okay6 = ld okay;
    check L154() else D56();
  L189():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L40(dx22);
  L190():
    okay21 = force? okay20;
    ___3 = ldf `[<-` in base;
    r109 = dyn ___3(l11, r104, okay21);
    goto L40(r109);
  L191():
    okay22 = ld okay;
    check L193() else D75();
  L192():
    r110 = dyn base8(<sym okay>);
    goto L41(r110);
  D56():
    deopt 169 [r71, l5, r69, okay6];
  D75():
    deopt 232 [okay22];
  L42():
    goto L51(NULL);
  L51(r139):
    goto L52();
  L153():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L30(r69, dx10);
  L154():
    okay7 = force? okay6;
    ___1 = ldf `[<-` in base;
    r74 = dyn ___1(l5, r69, okay7);
    goto L30(r71, r74);
  L193():
    okay23 = force? okay22;
    checkMissing(okay23);
    any4 = ldf any in base;
    r112 = dyn any4(okay23);
    check L194() else D76();
  L195():
    file_append = ldf `file.append`;
    check L196() else D77();
  D76():
    deopt 235 [r112];
  D77():
    deopt 237 [];
  L194():
    goto L41(r112);
  L196():
    p15 = prom<V +>{
      to29 = ld to;
      to30 = force? to29;
      checkMissing(to30);
      c38 = `is.object`(to30);
      if c38 then L1() else L2(to30);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", to30);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(to32):
      okay24 = ld okay;
      okay25 = force? okay24;
      __7 = ldf `[` in base;
      r113 = dyn __7(to32, okay25);
      goto L0(r113);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    p16 = prom<V +>{
      from25 = ld from;
      from26 = force? from25;
      checkMissing(from26);
      c39 = `is.object`(from26);
      if c39 then L1() else L2(from26);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", from26);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(from28):
      okay26 = ld okay;
      okay27 = force? okay26;
      __8 = ldf `[` in base;
      r115 = dyn __8(from28, okay27);
      goto L0(r115);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    r117 = dyn file_append(p15, p16);
    check L197() else D78();
  D78():
    deopt 240 [r117];
  L197():
    l12 = ld okay;
    c40 = `is.object`(l12);
    if c40 then L198() else L199(r117, l12);
  L43(dx29):
    st okay = dx29;
    copy_mode3 = ld `copy.mode`;
    check L202() else D80();
  L198():
    dr28 = tryDispatchBuiltin.0("[<-", l12, r117);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L200() else L199(r117, dr28);
  L199(r119, l14):
    okay28 = ld okay;
    check L201() else D79();
  D79():
    deopt 242 [r119, l14, r117, okay28];
  D80():
    deopt 246 [copy_mode3];
  L200():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L43(dx28);
  L201():
    okay29 = force? okay28;
    ___4 = ldf `[<-` in base;
    r122 = dyn ___4(l14, r117, okay29);
    goto L43(r122);
  L202():
    copy_mode4 = force? copy_mode3;
    checkMissing(copy_mode4);
    c41 = `as.logical`(copy_mode4);
    if c41 then L44(c41) else L203();
  L44(c42):
    c47 = `as.logical`(c42);
    if c47 then L206() else L45();
  L203():
    copy_date3 = ld `copy.date`;
    check L204() else D81();
  D81():
    deopt 248 [c41, copy_date3];
  L45():
    goto L50(NULL);
  L50(r138):
    goto L51(r138);
  L204():
    copy_date4 = force? copy_date3;
    checkMissing(copy_date4);
    c44 = `as.logical`(copy_date4);
    c45 = `||`(c41, c44);
    goto L44(c45);
  L206():
    file_info = ldf `file.info`;
    check L207() else D82();
  D82():
    deopt 252 [];
  L207():
    p17 = prom<V +>{
      from29 = ld from;
      from30 = force? from29;
      checkMissing(from30);
      c48 = `is.object`(from30);
      if c48 then L1() else L2(from30);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", from30);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(from32):
      okay30 = ld okay;
      okay31 = force? okay30;
      __9 = ldf `[` in base;
      r123 = dyn __9(from32, okay31);
      goto L0(r123);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r125 = dyn file_info[, extra_cols](p17, FALSE);
    check L208() else D83();
  D83():
    deopt 256 [r125];
  L208():
    st fi = r125;
    copy_mode5 = ld `copy.mode`;
    check L209() else D84();
  D84():
    deopt 258 [copy_mode5];
  L209():
    copy_mode6 = force? copy_mode5;
    checkMissing(copy_mode6);
    c49 = `as.logical`(copy_mode6);
    if c49 then L210() else L46();
  L46():
    goto L47();
  L47():
    copy_date5 = ld `copy.date`;
    check L214() else D87();
  L210():
    Sys_chmod = ldf `Sys.chmod`;
    check L211() else D85();
  D85():
    deopt 261 [];
  D87():
    deopt 268 [copy_date5];
  L211():
    p18 = prom<V +>{
      to33 = ld to;
      to34 = force? to33;
      checkMissing(to34);
      c50 = `is.object`(to34);
      if c50 then L1() else L2(to34);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", to34);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(to36):
      okay32 = ld okay;
      okay33 = force? okay32;
      __10 = ldf `[` in base;
      r126 = dyn __10(to36, okay33);
      goto L0(r126);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    p19 = prom<V +>{
      fi = ld fi;
      fi1 = force? fi;
      checkMissing(fi1);
      c51 = `is.object`(fi1);
      if c51 then L1() else L2(fi1);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("$", fi1);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(fi3):
      r128 = `$`(fi3, <sym mode>);
      goto L0(r128);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r130 = dyn Sys_chmod(p18, p19, TRUE);
    check L212() else D86();
  L214():
    copy_date6 = force? copy_date5;
    checkMissing(copy_date6);
    c52 = `as.logical`(copy_date6);
    if c52 then L215() else L48();
  D86():
    deopt 265 [r130];
  L48():
    goto L49(NULL);
  L49(r137):
    goto L50(r137);
  L212():
    goto L47();
  L215():
    Sys_setFileTime = ldf `Sys.setFileTime`;
    check L216() else D88();
  D88():
    deopt 271 [];
  L216():
    p20 = prom<V +>{
      to37 = ld to;
      to38 = force? to37;
      checkMissing(to38);
      c53 = `is.object`(to38);
      if c53 then L1() else L2(to38);
    L0(dx37):
      return dx37;
    L1():
      dr36 = tryDispatchBuiltin.1("[", to38);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(to40):
      okay34 = ld okay;
      okay35 = force? okay34;
      __11 = ldf `[` in base;
      r132 = dyn __11(to40, okay35);
      goto L0(r132);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    };
    p21 = prom<V +>{
      fi4 = ld fi;
      fi5 = force? fi4;
      checkMissing(fi5);
      c54 = `is.object`(fi5);
      if c54 then L1() else L2(fi5);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("$", fi5);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(fi7):
      r134 = `$`(fi7, <sym mtime>);
      goto L0(r134);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r136 = dyn Sys_setFileTime(p20, p21);
    check L217() else D89();
  D89():
    deopt 274 [r136];
  L217():
    goto L49(r136);
  }
}