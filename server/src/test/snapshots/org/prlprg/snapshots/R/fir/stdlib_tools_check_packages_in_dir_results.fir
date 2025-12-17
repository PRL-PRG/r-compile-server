fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2145558050;
    st check_packages_in_dir_results = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2145558050(dir, logs, `...`) {
  (reg dir:*, reg logs:*, reg ddd:dots) -+> V { var dir:*, var logs:*, reg logs_isMissing:L, reg logs_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg logs1:*, reg logs2:V, reg c:V, reg c1:L, reg Sys_glob:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg lapply:cls, reg logs3:*, reg logs4:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg ddd1:dots?, reg r10:V, reg sub:cls, reg basename:cls, reg dirname:cls, reg logs5:*, reg logs6:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg l:*, reg names__:cls, reg r17:V, reg results:*, reg results1:V |
    mkenv;
    st dir = dir;
    logs_isMissing = missing.0(logs);
    if logs_isMissing then L0(NULL) else L0(logs);
  L0(logs_orDefault):
    st logs = logs_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L2();
  L4():
    logs1 = ld logs;
    check L6() else D0();
  L5():
    r = dyn base(<sym logs>);
    goto L1(r);
  D0():
    deopt 1 [logs1];
  L2():
    goto L3();
  L3():
    lapply = ldf lapply;
    check L11() else D3();
  L6():
    logs2 = force? logs1;
    checkMissing(logs2);
    c = `==`(logs2, NULL);
    goto L1(c);
  L7():
    Sys_glob = ldf `Sys.glob`;
    check L8() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L8():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r3 = dyn file_path(p, "*.Rcheck", "00check.log");
      return r3;
    };
    r5 = dyn Sys_glob(p1);
    check L9() else D2();
  L11():
    p2 = prom<V +>{
      logs3 = ld logs;
      logs4 = force? logs3;
      checkMissing(logs4);
      return logs4;
    };
    p3 = prom<V +>{
      r8 = clos inner2516345942;
      return r8;
    };
    ddd1 = ld `...`;
    r10 = dyn lapply[, , `...`](p2, p3, ddd1);
    check L12() else D4();
  D2():
    deopt 7 [r5];
  D4():
    deopt 16 [r10];
  L9():
    st logs = r5;
    goto L3();
  L12():
    st results = r10;
    sub = ldf sub;
    check L13() else D5();
  D5():
    deopt 19 [];
  L13():
    p6 = prom<V +>{
      basename = ldf basename;
      p5 = prom<V +>{
        dirname = ldf dirname;
        p4 = prom<V +>{
          logs5 = ld logs;
          logs6 = force? logs5;
          checkMissing(logs6);
          return logs6;
        };
        r12 = dyn dirname(p4);
        return r12;
      };
      r14 = dyn basename(p5);
      return r14;
    };
    r16 = dyn sub("\\.Rcheck$", "", p6);
    check L14() else D6();
  D6():
    deopt 23 [r16];
  L14():
    l = ld results;
    names__ = ldf `names<-`;
    check L15() else D7();
  D7():
    deopt 25 [r16, l, r16];
  L15():
    r17 = dyn names__(l, NULL, r16);
    check L16() else D8();
  D8():
    deopt 27 [r16, r17];
  L16():
    st results = r17;
    results = ld results;
    check L17() else D9();
  D9():
    deopt 29 [results];
  L17():
    results1 = force? results;
    checkMissing(results1);
    popenv;
    return results1;
  }
}
fun inner2516345942(log, `...`) {
  (reg log:*, reg ddd:dots) -+> V { var log:*, var `...`:dots?, reg read_check_log:cls, reg log1:*, reg log2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg grep:cls, reg re:*, reg re1:V, reg p1:p(V +), reg lines:*, reg lines1:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg pos:*, reg pos1:V, reg length:cls, reg r7:V, reg c:L, reg sub:cls, reg re2:*, reg re3:V, reg p3:p(V +), reg lines2:*, reg lines3:V, reg c1:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg c2:L, reg lines7:V, reg pos5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg lines9:V, reg dx3:V, reg __:cls, reg r9:V, reg __1:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg r13:V, reg iconv:cls, reg lines10:*, reg lines11:V, reg p5:p(V +), reg enc:*, reg enc1:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg validUTF8:cls, reg lines12:*, reg lines13:V, reg p7:p(V +), reg r20:V, reg r21:V, reg any:cls, reg r22:V, reg c3:L, reg iconv1:cls, reg lines14:*, reg lines15:V, reg c4:L, reg lines17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg bad:*, reg bad1:V, reg __2:cls, reg r23:V, reg p8:p(V +), reg r25:V, reg l:*, reg c5:L, reg r27:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r29:V, reg dx7:V, reg bad2:*, reg bad3:V, reg ___:cls, reg r30:V, reg which:cls, reg startsWith:cls, reg lines18:*, reg lines19:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg pos6:*, reg pos7:V, reg c6:L, reg pos9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos10:*, reg pos11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg pos16:V, reg pos17:V, reg r37:V, reg lines20:*, reg lines21:V, reg length1:cls, reg r38:V, reg r39:V, reg __3:cls, reg r40:V, reg pos18:*, reg pos19:V, reg c7:L, reg pos21:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg startsWith1:cls, reg lines22:*, reg lines23:V, reg c8:L, reg lines25:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg pos22:*, reg pos23:V, reg r41:V, reg __4:cls, reg r42:V, reg p11:p(V +), reg r44:V, reg __5:cls, reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg pos24:*, reg pos25:V, reg length2:cls, reg r48:V, reg c9:L, reg lines26:*, reg lines27:V, reg c10:L, reg lines29:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos26:*, reg pos27:V, reg r49:V, reg __6:cls, reg r50:V, reg which1:cls, reg startsWith2:cls, reg lines30:*, reg lines31:V, reg p12:p(V +), reg r52:V, reg p13:p(V +), reg r54:V, reg pos28:*, reg pos29:V, reg c11:L, reg pos31:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg pos32:*, reg pos33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg pos38:V, reg pos39:V, reg r56:V, reg lines32:*, reg lines33:V, reg length3:cls, reg r57:V, reg r58:V, reg __7:cls, reg r59:V, reg pos40:*, reg pos41:V, reg c12:L, reg pos43:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg startsWith3:cls, reg lines34:*, reg lines35:V, reg c13:L, reg lines37:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg pos44:*, reg pos45:V, reg r60:V, reg __8:cls, reg r61:V, reg p14:p(V +), reg r63:V, reg __9:cls, reg r64:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r65:V, reg r66:V, reg pos46:*, reg pos47:V, reg length4:cls, reg r67:V, reg c14:L, reg lines38:*, reg lines39:V, reg c15:L, reg lines41:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg pos48:*, reg pos49:V, reg r68:V, reg __10:cls, reg r69:V, reg which2:cls, reg startsWith4:cls, reg lines42:*, reg lines43:V, reg p15:p(V +), reg r71:V, reg p16:p(V +), reg r73:V, reg pos50:*, reg pos51:V, reg c16:L, reg pos53:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg pos54:*, reg pos55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg pos60:V, reg pos61:V, reg r75:V, reg lines44:*, reg lines45:V, reg length5:cls, reg r76:V, reg r77:V, reg __11:cls, reg r78:V, reg pos62:*, reg pos63:V, reg c17:L, reg pos65:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg startsWith5:cls, reg lines46:*, reg lines47:V, reg c18:L, reg lines49:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg pos66:*, reg pos67:V, reg r79:V, reg __12:cls, reg r80:V, reg p17:p(V +), reg r82:V, reg __13:cls, reg r83:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r84:V, reg r85:V, reg pos68:*, reg pos69:V, reg length6:cls, reg r86:V, reg c19:L, reg lines50:*, reg lines51:V, reg c20:L, reg lines53:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg pos70:*, reg pos71:V, reg r87:V, reg __14:cls, reg r88:V, reg regexpr:cls, reg re4:*, reg re5:V, reg p18:p(V +), reg lines54:*, reg lines55:V, reg p19:p(V +), reg r91:V, reg m:*, reg m1:V, reg r92:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r93:V, reg r94:V, reg ind:*, reg ind1:V, reg any1:cls, reg r95:V, reg c21:L, reg sub1:cls, reg re6:*, reg re7:V, reg p20:p(V +), reg lines56:*, reg lines57:V, reg c22:L, reg lines59:V, reg dr32:V, reg dc16:L, reg dx35:V, reg dx36:V, reg ind2:*, reg ind3:V, reg __15:cls, reg r97:V, reg p21:p(V +), reg r99:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r100:V, reg r101:V, reg status:*, reg status1:V, reg r102:V, reg any2:cls, reg r103:V, reg c23:L, reg r104:S, reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg r106:V, reg status2:*, reg status3:V, reg r107:V, reg any3:cls, reg r108:V, reg c24:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg status4:*, reg status5:V, reg r111:V, reg any4:cls, reg r112:V, reg c25:L, reg r113:S, reg sym12:cls, reg base12:cls, reg guard12:L, reg r114:V, reg r115:V, reg status6:*, reg status7:V, reg lines60:*, reg lines61:V, reg c26:L, reg lines63:V, reg dr34:V, reg dc17:L, reg dx37:V, reg dx38:V, reg ind4:*, reg ind5:V, reg __16:cls, reg r116:V, reg list:cls, reg r117:V |
    mkenv;
    st log = log;
    st `...` = ddd;
    read_check_log = ldf read_check_log;
    check L40() else D0();
  D0():
    deopt 1 [];
  L40():
    p = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    ddd1 = ld `...`;
    r1 = dyn read_check_log[, `...`](p, ddd1);
    check L41() else D1();
  D1():
    deopt 4 [r1];
  L41():
    st lines = r1;
    st re = "^\\* using session charset: ";
    grep = ldf grep;
    check L42() else D2();
  D2():
    deopt 10 [];
  L42():
    p1 = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r4 = dyn grep[, , perl, useBytes](p1, p2, TRUE, TRUE);
    check L43() else D3();
  D3():
    deopt 17 [r4];
  L43():
    st pos = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L0(r6):
    c = `as.logical`(r6);
    if c then L48() else L1();
  L44():
    pos = ld pos;
    check L46() else D4();
  L45():
    r5 = dyn base(<sym pos>);
    goto L0(r5);
  D4():
    deopt 21 [pos];
  L1():
    goto L2("");
  L2(r13):
    st enc = r13;
    iconv = ldf iconv;
    check L52() else D8();
  L46():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r7 = dyn length(pos1);
    check L47() else D5();
  L48():
    sub = ldf sub;
    check L49() else D6();
  D5():
    deopt 24 [r7];
  D6():
    deopt 26 [];
  D8():
    deopt 37 [];
  L47():
    goto L0(r7);
  L49():
    p3 = prom<V +>{
      re2 = ld re;
      re3 = force? re2;
      checkMissing(re3);
      return re3;
    };
    p4 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c1 = `is.object`(lines3);
      if c1 then L2() else L3(lines3);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(lines5):
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      c2 = `is.object`(pos3);
      if c2 then L5() else L6(lines5, pos3);
    L1(lines9, dx3):
      __1 = ldf `[` in base;
      r10 = dyn __1(lines9, dx3);
      goto L0(r10);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", pos3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(lines5, dr2);
    L6(lines7, pos5):
      __ = ldf `[` in base;
      r9 = dyn __(pos5, 1);
      goto L1(lines7, r9);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(lines5, dx2);
    };
    r12 = dyn sub[, , , useBytes](p3, "", p4, TRUE);
    check L50() else D7();
  L52():
    p5 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      return lines11;
    };
    p6 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r16 = dyn iconv[, , , sub](p5, p6, "UTF-8", "byte");
    check L53() else D9();
  D7():
    deopt 32 [r12];
  D9():
    deopt 43 [r16];
  L50():
    goto L2(r12);
  L53():
    st lines = r16;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L3(r18):
    c3 = `as.logical`(r18);
    if c3 then L59() else L4();
  L54():
    validUTF8 = ldf validUTF8;
    check L56() else D10();
  L55():
    r17 = dyn base1(<lang `<-`(bad, `!`(validUTF8(lines)))>);
    goto L3(r17);
  D10():
    deopt 48 [];
  L4():
    goto L6();
  L6():
    which = ldf which;
    check L67() else D16();
  L56():
    p7 = prom<V +>{
      lines12 = ld lines;
      lines13 = force? lines12;
      checkMissing(lines13);
      return lines13;
    };
    r20 = dyn validUTF8(p7);
    check L57() else D11();
  L59():
    iconv1 = ldf iconv;
    check L60() else D13();
  D11():
    deopt 50 [r20];
  D13():
    deopt 56 [];
  D16():
    deopt 71 [];
  L57():
    r21 = `!`(r20);
    st bad = r21;
    any = ldf any in base;
    r22 = dyn any(r21);
    check L58() else D12();
  L60():
    p8 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      c4 = `is.object`(lines15);
      if c4 then L1() else L2(lines15);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", lines15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(lines17):
      bad = ld bad;
      bad1 = force? bad;
      __2 = ldf `[` in base;
      r23 = dyn __2(lines17, bad1);
      goto L0(r23);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r25 = dyn iconv1[, to, sub](p8, "ASCII", "byte");
    check L61() else D14();
  L67():
    p10 = prom<V +>{
      startsWith = ldf startsWith;
      p9 = prom<V +>{
        lines18 = ld lines;
        lines19 = force? lines18;
        checkMissing(lines19);
        return lines19;
      };
      r33 = dyn startsWith(p9, "* loading checks for arch");
      return r33;
    };
    r35 = dyn which(p10);
    check L68() else D17();
  D12():
    deopt 54 [r22];
  D14():
    deopt 62 [r25];
  D17():
    deopt 73 [r35];
  L58():
    goto L3(r22);
  L61():
    l = ld lines;
    c5 = `is.object`(l);
    if c5 then L62() else L63(r25, l);
  L68():
    st pos = r35;
    pos6 = ld pos;
    check L69() else D18();
  D18():
    deopt 75 [pos6];
  L5(r29, dx7):
    st lines = dx7;
    goto L6();
  L62():
    dr6 = tryDispatchBuiltin.0("[<-", l, r25);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(r25, dr6);
  L63(r27, l2):
    bad2 = ld bad;
    check L65() else D15();
  L69():
    pos7 = force? pos6;
    checkMissing(pos7);
    c6 = `is.object`(pos7);
    if c6 then L70() else L71(pos7);
  D15():
    deopt 64 [r27, l2, r25, bad2];
  L7(dx9):
    st pos = dx9;
    pos18 = ld pos;
    check L78() else D22();
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(r25, dx6);
  L65():
    bad3 = force? bad2;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l2, r25, bad3);
    goto L5(r27, r30);
  L70():
    dr8 = tryDispatchBuiltin.1("[", pos7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L72() else L71(dr8);
  L71(pos9):
    pos10 = ld pos;
    check L73() else D19();
  D19():
    deopt 77 [pos9, pos10];
  D22():
    deopt 87 [pos18];
  L72():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8);
  L73():
    pos11 = force? pos10;
    checkMissing(pos11);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L74() else L75();
  L78():
    pos19 = force? pos18;
    checkMissing(pos19);
    c7 = `is.object`(pos19);
    if c7 then L79() else L80(pos19);
  L8(pos16, pos17, r37):
    r39 = `<`(pos17, r37);
    __3 = ldf `[` in base;
    r40 = dyn __3(pos16, r39);
    goto L7(r40);
  L9(dx11):
    st pos = dx11;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  L74():
    lines20 = ld lines;
    check L76() else D20();
  L75():
    r36 = dyn base2(<sym lines>);
    goto L8(pos9, pos11, r36);
  L79():
    dr10 = tryDispatchBuiltin.1("[", pos19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(dr10);
  L80(pos21):
    startsWith1 = ldf startsWith;
    check L82() else D23();
  D20():
    deopt 80 [pos9, pos11, lines20];
  D23():
    deopt 90 [pos21];
  L10(r47):
    c9 = `as.logical`(r47);
    if c9 then L88() else L11();
  L76():
    lines21 = force? lines20;
    checkMissing(lines21);
    length1 = ldf length in base;
    r38 = dyn length1(lines21);
    check L77() else D21();
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L82():
    p11 = prom<V +>{
      lines22 = ld lines;
      lines23 = force? lines22;
      checkMissing(lines23);
      c8 = `is.object`(lines23);
      if c8 then L1() else L2(lines23);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", lines23);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(lines25):
      pos22 = ld pos;
      pos23 = force? pos22;
      checkMissing(pos23);
      r41 = `+`(pos23, 1);
      __4 = ldf `[` in base;
      r42 = dyn __4(lines25, r41);
      goto L0(r42);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r44 = dyn startsWith1(p11, "** checking");
    check L83() else D24();
  L84():
    pos24 = ld pos;
    check L86() else D25();
  L85():
    r46 = dyn base3(<sym pos>);
    goto L10(r46);
  D21():
    deopt 83 [pos9, pos11, r38];
  D24():
    deopt 93 [pos21, r44];
  D25():
    deopt 98 [pos24];
  L11():
    goto L13();
  L13():
    which1 = ldf which;
    check L95() else D29();
  L77():
    goto L8(pos9, pos11, r38);
  L83():
    __5 = ldf `[` in base;
    r45 = dyn __5(pos21, r44);
    goto L9(r45);
  L86():
    pos25 = force? pos24;
    checkMissing(pos25);
    length2 = ldf length in base;
    r48 = dyn length2(pos25);
    check L87() else D26();
  L88():
    lines26 = ld lines;
    check L89() else D27();
  D26():
    deopt 101 [r48];
  D27():
    deopt 102 [lines26];
  D29():
    deopt 112 [];
  L87():
    goto L10(r48);
  L89():
    lines27 = force? lines26;
    checkMissing(lines27);
    c10 = `is.object`(lines27);
    if c10 then L90() else L91(lines27);
  L95():
    p13 = prom<V +>{
      startsWith2 = ldf startsWith;
      p12 = prom<V +>{
        lines30 = ld lines;
        lines31 = force? lines30;
        checkMissing(lines31);
        return lines31;
      };
      r52 = dyn startsWith2(p12, "* checking examples");
      return r52;
    };
    r54 = dyn which1(p13);
    check L96() else D30();
  D30():
    deopt 114 [r54];
  L12(dx15):
    st lines = dx15;
    goto L13();
  L90():
    dr14 = tryDispatchBuiltin.1("[", lines27);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L92() else L91(dr14);
  L91(lines29):
    pos26 = ld pos;
    check L93() else D28();
  L96():
    st pos = r54;
    pos28 = ld pos;
    check L97() else D31();
  D28():
    deopt 104 [lines29, pos26];
  D31():
    deopt 116 [pos28];
  L92():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L12(dx14);
  L93():
    pos27 = force? pos26;
    checkMissing(pos27);
    r49 = `-`(<missing>, pos27);
    __6 = ldf `[` in base;
    r50 = dyn __6(lines29, r49);
    goto L12(r50);
  L97():
    pos29 = force? pos28;
    checkMissing(pos29);
    c11 = `is.object`(pos29);
    if c11 then L98() else L99(pos29);
  L14(dx18):
    st pos = dx18;
    pos40 = ld pos;
    check L106() else D35();
  L98():
    dr16 = tryDispatchBuiltin.1("[", pos29);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L100() else L99(dr16);
  L99(pos31):
    pos32 = ld pos;
    check L101() else D32();
  D32():
    deopt 118 [pos31, pos32];
  D35():
    deopt 128 [pos40];
  L100():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L14(dx17);
  L101():
    pos33 = force? pos32;
    checkMissing(pos33);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L106():
    pos41 = force? pos40;
    checkMissing(pos41);
    c12 = `is.object`(pos41);
    if c12 then L107() else L108(pos41);
  L15(pos38, pos39, r56):
    r58 = `<`(pos39, r56);
    __7 = ldf `[` in base;
    r59 = dyn __7(pos38, r58);
    goto L14(r59);
  L16(dx20):
    st pos = dx20;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L112() else L113();
  L102():
    lines32 = ld lines;
    check L104() else D33();
  L103():
    r55 = dyn base4(<sym lines>);
    goto L15(pos31, pos33, r55);
  L107():
    dr18 = tryDispatchBuiltin.1("[", pos41);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L109() else L108(dr18);
  L108(pos43):
    startsWith3 = ldf startsWith;
    check L110() else D36();
  D33():
    deopt 121 [pos31, pos33, lines32];
  D36():
    deopt 131 [pos43];
  L17(r66):
    c14 = `as.logical`(r66);
    if c14 then L116() else L18();
  L104():
    lines33 = force? lines32;
    checkMissing(lines33);
    length3 = ldf length in base;
    r57 = dyn length3(lines33);
    check L105() else D34();
  L109():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L16(dx19);
  L110():
    p14 = prom<V +>{
      lines34 = ld lines;
      lines35 = force? lines34;
      checkMissing(lines35);
      c13 = `is.object`(lines35);
      if c13 then L1() else L2(lines35);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("[", lines35);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(lines37):
      pos44 = ld pos;
      pos45 = force? pos44;
      checkMissing(pos45);
      r60 = `+`(pos45, 1);
      __8 = ldf `[` in base;
      r61 = dyn __8(lines37, r60);
      goto L0(r61);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    r63 = dyn startsWith3(p14, "** running examples for arch");
    check L111() else D37();
  L112():
    pos46 = ld pos;
    check L114() else D38();
  L113():
    r65 = dyn base5(<sym pos>);
    goto L17(r65);
  D34():
    deopt 124 [pos31, pos33, r57];
  D37():
    deopt 134 [pos43, r63];
  D38():
    deopt 139 [pos46];
  L18():
    goto L20();
  L20():
    which2 = ldf which;
    check L123() else D42();
  L105():
    goto L15(pos31, pos33, r57);
  L111():
    __9 = ldf `[` in base;
    r64 = dyn __9(pos43, r63);
    goto L16(r64);
  L114():
    pos47 = force? pos46;
    checkMissing(pos47);
    length4 = ldf length in base;
    r67 = dyn length4(pos47);
    check L115() else D39();
  L116():
    lines38 = ld lines;
    check L117() else D40();
  D39():
    deopt 142 [r67];
  D40():
    deopt 143 [lines38];
  D42():
    deopt 153 [];
  L115():
    goto L17(r67);
  L117():
    lines39 = force? lines38;
    checkMissing(lines39);
    c15 = `is.object`(lines39);
    if c15 then L118() else L119(lines39);
  L123():
    p16 = prom<V +>{
      startsWith4 = ldf startsWith;
      p15 = prom<V +>{
        lines42 = ld lines;
        lines43 = force? lines42;
        checkMissing(lines43);
        return lines43;
      };
      r71 = dyn startsWith4(p15, "* checking tests");
      return r71;
    };
    r73 = dyn which2(p16);
    check L124() else D43();
  D43():
    deopt 155 [r73];
  L19(dx24):
    st lines = dx24;
    goto L20();
  L118():
    dr22 = tryDispatchBuiltin.1("[", lines39);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L120() else L119(dr22);
  L119(lines41):
    pos48 = ld pos;
    check L121() else D41();
  L124():
    st pos = r73;
    pos50 = ld pos;
    check L125() else D44();
  D41():
    deopt 145 [lines41, pos48];
  D44():
    deopt 157 [pos50];
  L120():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L19(dx23);
  L121():
    pos49 = force? pos48;
    checkMissing(pos49);
    r68 = `-`(<missing>, pos49);
    __10 = ldf `[` in base;
    r69 = dyn __10(lines41, r68);
    goto L19(r69);
  L125():
    pos51 = force? pos50;
    checkMissing(pos51);
    c16 = `is.object`(pos51);
    if c16 then L126() else L127(pos51);
  L21(dx27):
    st pos = dx27;
    pos62 = ld pos;
    check L134() else D48();
  L126():
    dr24 = tryDispatchBuiltin.1("[", pos51);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L128() else L127(dr24);
  L127(pos53):
    pos54 = ld pos;
    check L129() else D45();
  D45():
    deopt 159 [pos53, pos54];
  D48():
    deopt 169 [pos62];
  L128():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L21(dx26);
  L129():
    pos55 = force? pos54;
    checkMissing(pos55);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  L134():
    pos63 = force? pos62;
    checkMissing(pos63);
    c17 = `is.object`(pos63);
    if c17 then L135() else L136(pos63);
  L22(pos60, pos61, r75):
    r77 = `<`(pos61, r75);
    __11 = ldf `[` in base;
    r78 = dyn __11(pos60, r77);
    goto L21(r78);
  L23(dx29):
    st pos = dx29;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L140() else L141();
  L130():
    lines44 = ld lines;
    check L132() else D46();
  L131():
    r74 = dyn base6(<sym lines>);
    goto L22(pos53, pos55, r74);
  L135():
    dr26 = tryDispatchBuiltin.1("[", pos63);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L137() else L136(dr26);
  L136(pos65):
    startsWith5 = ldf startsWith;
    check L138() else D49();
  D46():
    deopt 162 [pos53, pos55, lines44];
  D49():
    deopt 172 [pos65];
  L24(r85):
    c19 = `as.logical`(r85);
    if c19 then L144() else L25();
  L132():
    lines45 = force? lines44;
    checkMissing(lines45);
    length5 = ldf length in base;
    r76 = dyn length5(lines45);
    check L133() else D47();
  L137():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L23(dx28);
  L138():
    p17 = prom<V +>{
      lines46 = ld lines;
      lines47 = force? lines46;
      checkMissing(lines47);
      c18 = `is.object`(lines47);
      if c18 then L1() else L2(lines47);
    L0(dx31):
      return dx31;
    L1():
      dr28 = tryDispatchBuiltin.1("[", lines47);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(lines49):
      pos66 = ld pos;
      pos67 = force? pos66;
      checkMissing(pos67);
      r79 = `+`(pos67, 1);
      __12 = ldf `[` in base;
      r80 = dyn __12(lines49, r79);
      goto L0(r80);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    };
    r82 = dyn startsWith5(p17, "** running tests for arch");
    check L139() else D50();
  L140():
    pos68 = ld pos;
    check L142() else D51();
  L141():
    r84 = dyn base7(<sym pos>);
    goto L24(r84);
  D47():
    deopt 165 [pos53, pos55, r76];
  D50():
    deopt 175 [pos65, r82];
  D51():
    deopt 180 [pos68];
  L25():
    goto L27();
  L27():
    st re = "^\\*\\*? ((checking|creating|running examples for arch|running tests for arch) .*) \\.\\.\\.( (\\[[^ ]*\\]))?( (NOTE|WARNING|ERROR)|)$";
    regexpr = ldf regexpr;
    check L151() else D55();
  L133():
    goto L22(pos53, pos55, r76);
  L139():
    __13 = ldf `[` in base;
    r83 = dyn __13(pos65, r82);
    goto L23(r83);
  L142():
    pos69 = force? pos68;
    checkMissing(pos69);
    length6 = ldf length in base;
    r86 = dyn length6(pos69);
    check L143() else D52();
  L144():
    lines50 = ld lines;
    check L145() else D53();
  D52():
    deopt 183 [r86];
  D53():
    deopt 184 [lines50];
  D55():
    deopt 197 [];
  L143():
    goto L24(r86);
  L145():
    lines51 = force? lines50;
    checkMissing(lines51);
    c20 = `is.object`(lines51);
    if c20 then L146() else L147(lines51);
  L151():
    p18 = prom<V +>{
      re4 = ld re;
      re5 = force? re4;
      checkMissing(re5);
      return re5;
    };
    p19 = prom<V +>{
      lines54 = ld lines;
      lines55 = force? lines54;
      checkMissing(lines55);
      return lines55;
    };
    r91 = dyn regexpr[, , perl](p18, p19, TRUE);
    check L152() else D56();
  D56():
    deopt 202 [r91];
  L26(dx33):
    st lines = dx33;
    goto L27();
  L146():
    dr30 = tryDispatchBuiltin.1("[", lines51);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L148() else L147(dr30);
  L147(lines53):
    pos70 = ld pos;
    check L149() else D54();
  L152():
    st m = r91;
    m = ld m;
    check L153() else D57();
  D54():
    deopt 186 [lines53, pos70];
  D57():
    deopt 204 [m];
  L148():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L26(dx32);
  L149():
    pos71 = force? pos70;
    checkMissing(pos71);
    r87 = `-`(<missing>, pos71);
    __14 = ldf `[` in base;
    r88 = dyn __14(lines53, r87);
    goto L26(r88);
  L153():
    m1 = force? m;
    checkMissing(m1);
    r92 = `>`(m1, 0);
    st ind = r92;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L154() else L155();
  L28(r94):
    c21 = `as.logical`(r94);
    if c21 then L158() else L29();
  L154():
    ind = ld ind;
    check L156() else D58();
  L155():
    r93 = dyn base8(<sym ind>);
    goto L28(r93);
  D58():
    deopt 211 [ind];
  L29():
    goto L37("OK");
  L37(r113):
    st status = r113;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L180() else L181();
  L156():
    ind1 = force? ind;
    checkMissing(ind1);
    any1 = ldf any in base;
    r95 = dyn any1(ind1);
    check L157() else D59();
  L158():
    sub1 = ldf sub;
    check L159() else D60();
  D59():
    deopt 214 [r95];
  D60():
    deopt 216 [];
  L38(r115):
    popenv;
    return r115;
  L157():
    goto L28(r95);
  L159():
    p20 = prom<V +>{
      re6 = ld re;
      re7 = force? re6;
      checkMissing(re7);
      return re7;
    };
    p21 = prom<V +>{
      lines56 = ld lines;
      lines57 = force? lines56;
      checkMissing(lines57);
      c22 = `is.object`(lines57);
      if c22 then L1() else L2(lines57);
    L0(dx36):
      return dx36;
    L1():
      dr32 = tryDispatchBuiltin.1("[", lines57);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(lines59):
      ind2 = ld ind;
      ind3 = force? ind2;
      __15 = ldf `[` in base;
      r97 = dyn __15(lines59, ind3);
      goto L0(r97);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx35);
    };
    r99 = dyn sub1[, , , perl](p20, "\\6", p21, TRUE);
    check L160() else D61();
  L180():
    status6 = ld status;
    check L182() else D68();
  L181():
    r114 = dyn base12[status, lines](<sym status>, <lang `[`(lines, ind)>);
    goto L38(r114);
  D61():
    deopt 222 [r99];
  D68():
    deopt 261 [status6];
  L160():
    st status = r99;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L161() else L162();
  L182():
    status7 = force? status6;
    checkMissing(status7);
    lines60 = ld lines;
    check L183() else D69();
  D69():
    deopt 264 [lines60];
  L30(r101):
    c23 = `as.logical`(r101);
    if c23 then L165() else L31();
  L161():
    status = ld status;
    check L163() else D62();
  L162():
    r100 = dyn base9(<lang `==`(status, "")>);
    goto L30(r100);
  L183():
    lines61 = force? lines60;
    checkMissing(lines61);
    c26 = `is.object`(lines61);
    if c26 then L184() else L185(lines61);
  D62():
    deopt 226 [status];
  L31():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L167() else L168();
  L32(r104):
    goto L37(r104);
  L39(dx38):
    list = ldf list in base;
    r117 = dyn list(status7, dx38);
    check L188() else D71();
  L163():
    status1 = force? status;
    checkMissing(status1);
    r102 = `==`(status1, "");
    any2 = ldf any in base;
    r103 = dyn any2(r102);
    check L164() else D63();
  L165():
    goto L32("FAILURE");
  L184():
    dr34 = tryDispatchBuiltin.1("[", lines61);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L186() else L185(dr34);
  L185(lines63):
    ind4 = ld ind;
    check L187() else D70();
  D63():
    deopt 231 [r103];
  D70():
    deopt 266 [lines63, ind4];
  D71():
    deopt 271 [r117];
  L33(r106):
    c24 = `as.logical`(r106);
    if c24 then L171() else L34();
  L164():
    goto L30(r103);
  L167():
    status2 = ld status;
    check L169() else D64();
  L168():
    r105 = dyn base10(<lang `==`(status, "ERROR")>);
    goto L33(r105);
  L186():
    dx37 = getTryDispatchBuiltinValue(dr34);
    goto L39(dx37);
  L187():
    ind5 = force? ind4;
    __16 = ldf `[` in base;
    r116 = dyn __16(lines63, ind5);
    goto L39(r116);
  L188():
    goto L38(r117);
  D64():
    deopt 236 [status2];
  L34():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L173() else L174();
  L169():
    status3 = force? status2;
    checkMissing(status3);
    r107 = `==`(status3, "ERROR");
    any3 = ldf any in base;
    r108 = dyn any3(r107);
    check L170() else D65();
  L171():
    goto L32("ERROR");
  D65():
    deopt 241 [r108];
  L35(r110):
    c25 = `as.logical`(r110);
    if c25 then L177() else L36();
  L170():
    goto L33(r108);
  L173():
    status4 = ld status;
    check L175() else D66();
  L174():
    r109 = dyn base11(<lang `==`(status, "WARNING")>);
    goto L35(r109);
  D66():
    deopt 246 [status4];
  L36():
    goto L32("NOTE");
  L175():
    status5 = force? status4;
    checkMissing(status5);
    r111 = `==`(status5, "WARNING");
    any4 = ldf any in base;
    r112 = dyn any4(r111);
    check L176() else D67();
  L177():
    goto L32("WARNING");
  D67():
    deopt 251 [r112];
  L176():
    goto L35(r112);
  }
}