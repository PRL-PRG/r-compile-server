fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `.news_reader_default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg r:cls, reg readLines:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg lines:*, reg lines1:V, reg nchar:cls, reg r9:V, reg is_na:cls, reg r10:V, reg any:cls, reg r11:V, reg c:L, reg dirname:cls, reg file3:*, reg file4:V, reg p1:p(V +), reg r13:V, reg basename:cls, reg dir:*, reg dir1:V, reg p2:p(V +), reg r15:V, reg r16:V, reg c1:L, reg dirname1:cls, reg file5:*, reg file6:V, reg p3:p(V +), reg r18:V, reg file_exists:cls, reg file_path:cls, reg dir2:*, reg dir3:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg c2:L, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p6:p(V +), reg r25:V, reg c3:L, reg r27:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg dx2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg encoding:*, reg encoding1:V, reg is_na1:cls, reg r31:V, reg r32:V, reg c4:L, reg iconv:cls, reg lines2:*, reg lines3:V, reg c5:L, reg lines5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg ind:*, reg ind1:V, reg __1:cls, reg r33:V, reg p7:p(V +), reg encoding2:*, reg encoding3:V, reg p8:p(V +), reg r36:V, reg l:*, reg c6:L, reg r38:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg r40:V, reg dx6:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg lines6:*, reg lines7:V, reg c7:L, reg lines9:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg ind4:*, reg ind5:V, reg __2:cls, reg r47:V, reg nchar1:cls, reg r48:V, reg anyNA:cls, reg r49:V, reg c8:L, reg iconv1:cls, reg lines10:*, reg lines11:V, reg c9:L, reg lines13:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r50:V, reg p9:p(V +), reg r52:V, reg l3:*, reg c10:L, reg r54:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx11:V, reg r56:V, reg dx12:V, reg ind8:*, reg ind9:V, reg ___1:cls, reg r57:V, reg r58:V, reg lines14:*, reg lines15:V, reg lines16:*, reg lines17:V, reg c11:L, reg lines19:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg grepl:cls, reg lines20:*, reg lines21:V, reg p10:p(V +), reg r61:V, reg r62:V, reg __4:cls, reg r63:V, reg _standard_regexps:cls, reg r64:V, reg c12:L, reg r66:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r67:V, reg sprintf:cls, reg paste0:cls, reg r68:V, reg p11:p(V +), reg sprintf1:cls, reg paste1:cls, reg r70:V, reg p12:p(V +), reg re_valid_package_name:*, reg re_valid_package_name1:V, reg p13:p(V +), reg re_valid_package_name2:*, reg re_valid_package_name3:V, reg p14:p(V +), reg re_valid_package_name4:*, reg re_valid_package_name5:V, reg p15:p(V +), reg r75:V, reg p16:p(V +), reg _standard_regexps1:cls, reg r77:V, reg c13:L, reg r79:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r80:V, reg p17:p(V +), reg r82:V, reg grepl1:cls, reg re_v:*, reg re_v1:V, reg p18:p(V +), reg lines22:*, reg lines23:V, reg p19:p(V +), reg r85:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r86:V, reg r87:V, reg ind10:*, reg ind11:V, reg any1:cls, reg r88:V, reg r89:V, reg c14:L, reg _make_news_db:cls, reg cbind:cls, reg _collapse:cls, reg olines:*, reg olines1:V, reg p20:p(V +), reg r91:V, reg p21:p(V +), reg r93:V, reg p22:p(V +), reg r95:V, reg ind12:*, reg ind13:V, reg c15:L, reg ind15:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg __5:cls, reg r98:V, reg r99:V, reg c16:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r100:V, reg r101:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r102:V, reg r103:V, reg ind16:*, reg ind17:V, reg which_max:cls, reg r104:V, reg r105:V, reg r106:I, reg lines24:*, reg lines25:V, reg c17:L, reg lines27:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg pos:*, reg pos1:V, reg r107:V, reg __6:cls, reg r108:V, reg ind18:*, reg ind19:V, reg c18:L, reg ind21:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg pos2:*, reg pos3:V, reg r109:V, reg __7:cls, reg r110:V, reg sprintf2:cls, reg r111:V, reg split:cls, reg lines28:*, reg lines29:V, reg p23:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r113:V, reg r114:V, reg ind22:*, reg ind23:V, reg cumsum:cls, reg r115:V, reg p24:p(V +), reg r117:V, reg r118:cls, reg lapply:cls, reg chunks:*, reg chunks1:V, reg p25:p(V +), reg do_chunk:*, reg do_chunk1:V, reg p26:p(V +), reg r121:V, reg r122:cls, reg r123:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p27:p(V +), reg lapply1:cls, reg out:*, reg out1:V, reg p28:p(V +), reg finisher:*, reg finisher1:V, reg p29:p(V +), reg r127:V, reg p30:p(V +), reg r129:V, reg out2:*, reg out3:V, reg c19:L, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __8:cls, reg r130:V, reg unlist:cls, reg lapply2:cls, reg gregexpr:cls, reg entries:*, reg entries1:V, reg p31:p(V +), reg r132:V, reg p32:p(V +), reg attr:*, reg attr1:V, reg p33:p(V +), reg r135:V, reg p34:p(V +), reg r137:V, reg exdent:*, reg exdent1:V, reg c20:L, reg exdent3:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg exdent4:*, reg exdent5:V, reg r138:V, reg __9:cls, reg r139:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r140:V, reg r141:V, reg exdent6:*, reg exdent7:V, reg length:cls, reg r142:V, reg c21:L, reg gsub:cls, reg sprintf3:cls, reg strrep:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r143:V, reg r144:V, reg exdent8:*, reg exdent9:V, reg min:cls, reg r145:V, reg r146:V, reg p35:p(V +), reg r148:V, reg p36:p(V +), reg r150:V, reg p37:p(V +), reg entries2:*, reg entries3:V, reg p38:p(V +), reg r153:V, reg l6:*, reg c22:L, reg r155:V, reg dr28:V, reg dc14:L, reg dx30:V, reg r157:V, reg dx31:V, reg ___2:cls, reg r158:V, reg _make_news_db1:cls, reg out6:*, reg out7:V, reg c23:L, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __10:cls, reg r160:V, reg p39:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r162:V, reg r163:V, reg out10:*, reg out11:V, reg c24:L, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg __11:cls, reg r164:V, reg as_logical:cls, reg r165:V, reg p40:p(V +), reg r167:V |
    mkenv;
    st file = file;
    r = clos inner1236783023;
    st `.collapse` = r;
    readLines = ldf readLines;
    check L37() else D0();
  D0():
    deopt 4 [];
  L37():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r2 = dyn readLines[, warn](p, FALSE);
    check L38() else D1();
  D1():
    deopt 8 [r2];
  L38():
    st lines = r2;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L0(r4):
    c = `as.logical`(r4);
    if c then L49() else L3();
  L39():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L40():
    r3 = dyn base(<lang `<-`(ind, is.na(nchar(lines, allowNA=TRUE)))>);
    goto L0(r3);
  L1(r6):
    st ind = r6;
    any = ldf any in base;
    r11 = dyn any(r6);
    check L48() else D5();
  L3():
    goto L19();
  L19():
    lines14 = ld lines;
    check L99() else D28();
  L41():
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L42():
    r5 = dyn base1(<lang nchar(lines, allowNA=TRUE)>);
    goto L1(r5);
  L49():
    dirname = ldf dirname;
    check L50() else D6();
  D5():
    deopt 27 [r11];
  D6():
    deopt 29 [];
  D28():
    deopt 113 [lines14];
  L2(r8):
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(r8);
    check L47() else D4();
  L43():
    lines = ld lines;
    check L45() else D2();
  L44():
    r7 = dyn base2[, allowNA](<sym lines>, TRUE);
    goto L2(r7);
  L48():
    goto L0(r11);
  L50():
    p1 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r13 = dyn dirname(p1);
    check L51() else D7();
  L99():
    lines15 = force? lines14;
    checkMissing(lines15);
    st olines = lines15;
    lines16 = ld lines;
    check L100() else D29();
  D2():
    deopt 16 [lines];
  D4():
    deopt 24 [r10];
  D7():
    deopt 31 [r13];
  D29():
    deopt 116 [lines16];
  L45():
    lines1 = force? lines;
    checkMissing(lines1);
    nchar = ldf nchar in base;
    r9 = dyn nchar(lines1, "chars", TRUE, NA_LGL);
    check L46() else D3();
  L47():
    goto L1(r10);
  L51():
    st dir = r13;
    basename = ldf basename;
    check L52() else D8();
  L100():
    lines17 = force? lines16;
    checkMissing(lines17);
    c11 = `is.object`(lines17);
    if c11 then L101() else L102(lines17);
  D3():
    deopt 22 [r9];
  D8():
    deopt 34 [];
  L20(dx14):
    st lines = dx14;
    _standard_regexps = ldf `.standard_regexps`;
    check L106() else D32();
  L46():
    goto L2(r9);
  L52():
    p2 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r15 = dyn basename(p2);
    check L53() else D9();
  L101():
    dr12 = tryDispatchBuiltin.1("[", lines17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L103() else L102(dr12);
  L102(lines19):
    grepl = ldf grepl;
    check L104() else D30();
  D9():
    deopt 36 [r15];
  D30():
    deopt 119 [lines19];
  D32():
    deopt 127 [];
  L53():
    r16 = `==`(r15, "inst");
    c1 = `as.logical`(r16);
    if c1 then L54() else L4();
  L103():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx13);
  L104():
    p10 = prom<V +>{
      lines20 = ld lines;
      lines21 = force? lines20;
      checkMissing(lines21);
      return lines21;
    };
    r61 = dyn grepl("^[[:space:]]*[[:punct:]]*[[:space:]]*$", p10);
    check L105() else D31();
  L106():
    r64 = dyn _standard_regexps();
    check L107() else D33();
  D31():
    deopt 122 [lines19, r61];
  D33():
    deopt 128 [r64];
  L4():
    goto L5();
  L5():
    file_exists = ldf `file.exists`;
    check L58() else D12();
  L54():
    dirname1 = ldf dirname;
    check L55() else D10();
  L105():
    r62 = `!`(r61);
    __4 = ldf `[` in base;
    r63 = dyn __4(lines19, r62);
    goto L20(r63);
  L107():
    c12 = `is.object`(r64);
    if c12 then L109() else L110(r64);
  D10():
    deopt 40 [];
  D12():
    deopt 47 [];
  L55():
    p3 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    r18 = dyn dirname1(p3);
    check L56() else D11();
  L58():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r21 = dyn file_path(p4, "DESCRIPTION");
      st dfile = r21;
      invisible.0();
      return r21;
    };
    r23 = dyn file_exists(p5);
    check L59() else D13();
  L108(dx16):
    st re_valid_package_name = dx16;
    sprintf = ldf sprintf;
    check L112() else D34();
  L109():
    dr14 = tryDispatchBuiltin.1("$", r64);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L111() else L110(dr14);
  L110(r66):
    r67 = `$`(r66, <sym valid_package_name>);
    goto L108(r67);
  D11():
    deopt 42 [r18];
  D13():
    deopt 49 [r23];
  D34():
    deopt 132 [];
  L56():
    st dir = r18;
    goto L5();
  L59():
    c2 = `as.logical`(r23);
    if c2 then L60() else L6();
  L111():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L108(dx15);
  L112():
    p11 = prom<V +>{
      paste0 = ldf paste0;
      r68 = dyn paste0("CHANGES? *(IN|FOR).*VERSION *", "|", "CHANGES? *(IN|FOR|TO) *");
      return r68;
    };
    p16 = prom<V +>{
      sprintf1 = ldf sprintf;
      p12 = prom<V +>{
        paste1 = ldf paste;
        r70 = dyn paste1[, , , , , , , , , sep]("NEW IN .*", "VERSION:? *", "%s +", "CHANGES IN %s +", "== Changes in %s +", "== Version +", "update *", "v *", "", "|");
        return r70;
      };
      p13 = prom<V +>{
        re_valid_package_name = ld re_valid_package_name;
        re_valid_package_name1 = force? re_valid_package_name;
        checkMissing(re_valid_package_name1);
        return re_valid_package_name1;
      };
      p14 = prom<V +>{
        re_valid_package_name2 = ld re_valid_package_name;
        re_valid_package_name3 = force? re_valid_package_name2;
        checkMissing(re_valid_package_name3);
        return re_valid_package_name3;
      };
      p15 = prom<V +>{
        re_valid_package_name4 = ld re_valid_package_name;
        re_valid_package_name5 = force? re_valid_package_name4;
        checkMissing(re_valid_package_name5);
        return re_valid_package_name5;
      };
      r75 = dyn sprintf1(p12, p13, p14, p15);
      return r75;
    };
    p17 = prom<V +>{
      _standard_regexps1 = ldf `.standard_regexps`;
      r77 = dyn _standard_regexps1();
      c13 = `is.object`(r77);
      if c13 then L1() else L2(r77);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("$", r77);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(r79):
      r80 = `$`(r79, <sym valid_package_version>);
      goto L0(r80);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r82 = dyn sprintf("^([[:space:]]*(%s)|(%s))(%s).*$", p11, p16, p17);
    check L113() else D35();
  D35():
    deopt 137 [r82];
  L6():
    goto L8(NA_LGL);
  L8(dx2):
    st encoding = dx2;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L60():
    _read_description = ldf `.read_description`;
    check L61() else D14();
  L113():
    st re_v = r82;
    grepl1 = ldf grepl;
    check L114() else D36();
  D14():
    deopt 51 [];
  D36():
    deopt 140 [];
  L9(r30):
    r32 = `!`(r30);
    c4 = `as.logical`(r32);
    if c4 then L71() else L10();
  L61():
    p6 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r25 = dyn _read_description(p6);
    check L62() else D15();
  L67():
    encoding = ld encoding;
    check L69() else D16();
  L68():
    r29 = dyn base3(<sym encoding>);
    goto L9(r29);
  L114():
    p18 = prom<V +>{
      re_v = ld re_v;
      re_v1 = force? re_v;
      checkMissing(re_v1);
      return re_v1;
    };
    p19 = prom<V +>{
      lines22 = ld lines;
      lines23 = force? lines22;
      checkMissing(lines23);
      return lines23;
    };
    r85 = dyn grepl1[, , `ignore.case`](p18, p19, TRUE);
    check L115() else D37();
  D15():
    deopt 53 [r25];
  D16():
    deopt 62 [encoding];
  D37():
    deopt 145 [r85];
  L10():
    goto L12();
  L12():
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L79() else L80();
  L62():
    c3 = `is.object`(r25);
    if c3 then L63() else L64(r25);
  L69():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    is_na1 = ldf `is.na` in base;
    r31 = dyn is_na1(encoding1);
    check L70() else D17();
  L71():
    iconv = ldf iconv;
    check L72() else D18();
  L115():
    st ind = r85;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L116() else L117();
  D17():
    deopt 65 [r31];
  D18():
    deopt 68 [];
  L7(dx1):
    goto L8(dx1);
  L13(r44):
    c8 = `as.logical`(r44);
    if c8 then L90() else L16();
  L21(r87):
    r89 = `!`(r87);
    c14 = `as.logical`(r89);
    if c14 then L120() else L22();
  L63():
    dr = tryDispatchBuiltin.1("[", r25);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(dr);
  L64(r27):
    __ = ldf `[` in base;
    r28 = dyn __(r27, "Encoding");
    goto L7(r28);
  L70():
    goto L9(r31);
  L72():
    p7 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c5 = `is.object`(lines3);
      if c5 then L1() else L2(lines3);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", lines3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(lines5):
      ind = ld ind;
      ind1 = force? ind;
      __1 = ldf `[` in base;
      r33 = dyn __1(lines5, ind1);
      goto L0(r33);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    p8 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    r36 = dyn iconv(p7, p8, "");
    check L73() else D19();
  L79():
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L80():
    r43 = dyn base4(<lang nchar(`[`(lines, ind), allowNA=TRUE)>);
    goto L13(r43);
  L116():
    ind10 = ld ind;
    check L118() else D38();
  L117():
    r86 = dyn base6(<sym ind>);
    goto L21(r86);
  D19():
    deopt 72 [r36];
  D38():
    deopt 149 [ind10];
  L14(r46):
    anyNA = ldf anyNA in base;
    r49 = dyn anyNA(r46);
    check L89() else D24();
  L16():
    goto L18(NULL);
  L18(r58):
    goto L19();
  L22():
    ind12 = ld ind;
    check L125() else D42();
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L73():
    l = ld lines;
    c6 = `is.object`(l);
    if c6 then L74() else L75(r36, l);
  L81():
    lines6 = ld lines;
    check L83() else D21();
  L82():
    r45 = dyn base5[, allowNA](<lang `[`(lines, ind)>, TRUE);
    goto L14(r45);
  L90():
    iconv1 = ldf iconv;
    check L91() else D25();
  L118():
    ind11 = force? ind10;
    checkMissing(ind11);
    any1 = ldf any in base;
    r88 = dyn any1(ind11);
    check L119() else D39();
  L120():
    _make_news_db = ldf `.make_news_db`;
    check L121() else D40();
  D21():
    deopt 84 [lines6];
  D24():
    deopt 95 [r49];
  D25():
    deopt 97 [];
  D39():
    deopt 152 [r88];
  D40():
    deopt 155 [];
  D42():
    deopt 161 [ind12];
  L11(r40, dx6):
    st lines = dx6;
    goto L12();
  L74():
    dr4 = tryDispatchBuiltin.0("[<-", l, r36);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L76() else L75(r36, dr4);
  L75(r38, l2):
    ind2 = ld ind;
    check L77() else D20();
  L83():
    lines7 = force? lines6;
    checkMissing(lines7);
    c7 = `is.object`(lines7);
    if c7 then L84() else L85(lines7);
  L89():
    goto L13(r49);
  L91():
    p9 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      c9 = `is.object`(lines11);
      if c9 then L1() else L2(lines11);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", lines11);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(lines13):
      ind6 = ld ind;
      ind7 = force? ind6;
      __3 = ldf `[` in base;
      r50 = dyn __3(lines13, ind7);
      goto L0(r50);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r52 = dyn iconv1[, , , sub](p9, "", "", "byte");
    check L92() else D26();
  L119():
    goto L21(r88);
  L121():
    p22 = prom<V +>{
      cbind = ldf cbind;
      p21 = prom<V +>{
        _collapse = ldf `.collapse`;
        p20 = prom<V +>{
          olines = ld olines;
          olines1 = force? olines;
          checkMissing(olines1);
          return olines1;
        };
        r91 = dyn _collapse(p20);
        return r91;
      };
      r93 = dyn cbind(NA_STR, NA_STR, NA_STR, p21);
      return r93;
    };
    r95 = dyn _make_news_db(p22);
    check L122() else D41();
  L125():
    ind13 = force? ind12;
    checkMissing(ind13);
    c15 = `is.object`(ind13);
    if c15 then L126() else L127(ind13);
  D20():
    deopt 74 [r38, l2, r36, ind2];
  D26():
    deopt 103 [r52];
  D41():
    deopt 157 [r95];
  L15(dx8):
    nchar1 = ldf nchar in base;
    r48 = dyn nchar1(dx8, "chars", TRUE, NA_LGL);
    check L88() else D23();
  L24(dx20):
    r99 = `!`(dx20);
    c16 = `as.logical`(r99);
    if c16 then L129() else L25();
  L76():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L11(r36, dx5);
  L77():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r41 = dyn ___(l2, r36, ind3);
    goto L11(r38, r41);
  L84():
    dr6 = tryDispatchBuiltin.1("[", lines7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L86() else L85(dr6);
  L85(lines9):
    ind4 = ld ind;
    check L87() else D22();
  L92():
    l3 = ld lines;
    c10 = `is.object`(l3);
    if c10 then L93() else L94(r52, l3);
  L122():
    popenv;
    return r95;
  L126():
    dr18 = tryDispatchBuiltin.1("[", ind13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L128() else L127(dr18);
  L127(ind15):
    __5 = ldf `[` in base;
    r98 = dyn __5(ind15, 1);
    goto L24(r98);
  D22():
    deopt 86 [lines9, ind4];
  D23():
    deopt 93 [r48];
  L17(r56, dx12):
    st lines = dx12;
    goto L18(r56);
  L25():
    goto L30();
  L30():
    sprintf2 = ldf sprintf;
    check L147() else D49();
  L86():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx7);
  L87():
    ind5 = force? ind4;
    __2 = ldf `[` in base;
    r47 = dyn __2(lines9, ind5);
    goto L15(r47);
  L88():
    goto L14(r48);
  L93():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r52);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L95() else L94(r52, dr10);
  L94(r54, l5):
    ind8 = ld ind;
    check L96() else D27();
  L128():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L24(dx19);
  L129():
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L130() else L131();
  D27():
    deopt 105 [r54, l5, r52, ind8];
  D49():
    deopt 195 [];
  L26(r101):
    st pos = r101;
    lines24 = ld lines;
    check L136() else D45();
  L95():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L17(r52, dx11);
  L96():
    ind9 = force? ind8;
    ___1 = ldf `[<-` in base;
    r57 = dyn ___1(l5, r52, ind9);
    goto L17(r54, r57);
  L130():
    sym8 = ldf `which.max`;
    base8 = ldf `which.max` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L132() else L133();
  L131():
    r100 = dyn base7(<lang `-`(which.max(ind), 1)>);
    goto L26(r100);
  L147():
    r111 = dyn sprintf2("^.*(%s)[[:punct:][:space:]]*$", "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}");
    check L148() else D50();
  D45():
    deopt 178 [lines24];
  D50():
    deopt 198 [r111];
  L27(r103):
    r105 = `-`(r103, 1);
    r106 = seq_len(r105);
    goto L26(r106);
  L132():
    ind16 = ld ind;
    check L134() else D43();
  L133():
    r102 = dyn base8(<sym ind>);
    goto L27(r102);
  L136():
    lines25 = force? lines24;
    checkMissing(lines25);
    c17 = `is.object`(lines25);
    if c17 then L137() else L138(lines25);
  L148():
    st re_d = r111;
    split = ldf split;
    check L149() else D51();
  D43():
    deopt 170 [ind16];
  D51():
    deopt 201 [];
  L28(dx22):
    st lines = dx22;
    ind18 = ld ind;
    check L141() else D47();
  L134():
    ind17 = force? ind16;
    checkMissing(ind17);
    which_max = ldf `which.max` in base;
    r104 = dyn which_max(ind17);
    check L135() else D44();
  L137():
    dr20 = tryDispatchBuiltin.1("[", lines25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L139() else L138(dr20);
  L138(lines27):
    pos = ld pos;
    check L140() else D46();
  L149():
    p23 = prom<V +>{
      lines28 = ld lines;
      lines29 = force? lines28;
      checkMissing(lines29);
      return lines29;
    };
    p24 = prom<V +>{
      sym9 = ldf cumsum;
      base9 = ldf cumsum in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      ind22 = ld ind;
      ind23 = force? ind22;
      checkMissing(ind23);
      cumsum = ldf cumsum in base;
      r115 = dyn cumsum(ind23);
      goto L0(r115);
    L2():
      r113 = dyn base9(<sym ind>);
      goto L0(r113);
    };
    r117 = dyn split(p23, p24);
    check L150() else D52();
  D44():
    deopt 173 [r104];
  D46():
    deopt 180 [lines27, pos];
  D47():
    deopt 185 [ind18];
  D52():
    deopt 204 [r117];
  L135():
    goto L27(r104);
  L139():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L28(dx21);
  L140():
    pos1 = force? pos;
    checkMissing(pos1);
    r107 = `-`(<missing>, pos1);
    __6 = ldf `[` in base;
    r108 = dyn __6(lines27, r107);
    goto L28(r108);
  L141():
    ind19 = force? ind18;
    checkMissing(ind19);
    c18 = `is.object`(ind19);
    if c18 then L142() else L143(ind19);
  L150():
    st chunks = r117;
    r118 = clos inner390881012;
    st do_chunk = r118;
    lapply = ldf lapply;
    check L151() else D53();
  D53():
    deopt 210 [];
  L29(dx24):
    st ind = dx24;
    goto L30();
  L142():
    dr22 = tryDispatchBuiltin.1("[", ind19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L144() else L143(dr22);
  L143(ind21):
    pos2 = ld pos;
    check L145() else D48();
  L151():
    p25 = prom<V +>{
      chunks = ld chunks;
      chunks1 = force? chunks;
      checkMissing(chunks1);
      return chunks1;
    };
    p26 = prom<V +>{
      do_chunk = ld do_chunk;
      do_chunk1 = force? do_chunk;
      checkMissing(do_chunk1);
      return do_chunk1;
    };
    r121 = dyn lapply(p25, p26);
    check L152() else D54();
  D48():
    deopt 187 [ind21, pos2];
  D54():
    deopt 213 [r121];
  L144():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L29(dx23);
  L145():
    pos3 = force? pos2;
    checkMissing(pos3);
    r109 = `-`(<missing>, pos3);
    __7 = ldf `[` in base;
    r110 = dyn __7(ind21, r109);
    goto L29(r110);
  L152():
    st out = r121;
    r122 = clos inner2501545716;
    st reporter = r122;
    r123 = clos inner2501545716;
    st finisher = r123;
    do_call = ldf `do.call`;
    check L153() else D55();
  D55():
    deopt 222 [];
  L153():
    p27 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p30 = prom<V +>{
      lapply1 = ldf lapply;
      p28 = prom<V +>{
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        return out1;
      };
      p29 = prom<V +>{
        finisher = ld finisher;
        finisher1 = force? finisher;
        checkMissing(finisher1);
        return finisher1;
      };
      r127 = dyn lapply1(p28, p29);
      return r127;
    };
    r129 = dyn do_call(p27, p30);
    check L154() else D56();
  D56():
    deopt 225 [r129];
  L154():
    st out = r129;
    out2 = ld out;
    check L155() else D57();
  D57():
    deopt 227 [out2];
  L155():
    out3 = force? out2;
    checkMissing(out3);
    c19 = `is.object`(out3);
    if c19 then L156() else L157();
  L31(dx27):
    st entries = dx27;
    unlist = ldf unlist;
    check L159() else D58();
  L156():
    dr24 = tryDispatchBuiltin.1("[", out3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L158() else L157();
  L157():
    __8 = ldf `[` in base;
    r130 = dyn __8(out3, <missing>, 4);
    goto L31(r130);
  D58():
    deopt 235 [];
  L158():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L31(dx26);
  L159():
    p34 = prom<V +>{
      lapply2 = ldf lapply;
      p32 = prom<V +>{
        gregexpr = ldf gregexpr;
        p31 = prom<V +>{
          entries = ld entries;
          entries1 = force? entries;
          checkMissing(entries1);
          return entries1;
        };
        r132 = dyn gregexpr("\n *", p31);
        return r132;
      };
      p33 = prom<V +>{
        attr = ld attr;
        attr1 = force? attr;
        checkMissing(attr1);
        return attr1;
      };
      r135 = dyn lapply2(p32, p33, "match.length");
      return r135;
    };
    r137 = dyn unlist(p34);
    check L160() else D59();
  D59():
    deopt 237 [r137];
  L160():
    st exdent = r137;
    exdent = ld exdent;
    check L161() else D60();
  D60():
    deopt 239 [exdent];
  L161():
    exdent1 = force? exdent;
    checkMissing(exdent1);
    c20 = `is.object`(exdent1);
    if c20 then L162() else L163(exdent1);
  L32(dx29):
    st exdent = dx29;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L166() else L167();
  L162():
    dr26 = tryDispatchBuiltin.1("[", exdent1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L164() else L163(dr26);
  L163(exdent3):
    exdent4 = ld exdent;
    check L165() else D61();
  D61():
    deopt 241 [exdent3, exdent4];
  L33(r141):
    c21 = `as.logical`(r141);
    if c21 then L170() else L34();
  L164():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L32(dx28);
  L165():
    exdent5 = force? exdent4;
    checkMissing(exdent5);
    r138 = `>`(exdent5, 1);
    __9 = ldf `[` in base;
    r139 = dyn __9(exdent3, r138);
    goto L32(r139);
  L166():
    exdent6 = ld exdent;
    check L168() else D62();
  L167():
    r140 = dyn base10(<sym exdent>);
    goto L33(r140);
  D62():
    deopt 249 [exdent6];
  L34():
    goto L36();
  L36():
    _make_news_db1 = ldf `.make_news_db`;
    check L177() else D66();
  L168():
    exdent7 = force? exdent6;
    checkMissing(exdent7);
    length = ldf length in base;
    r142 = dyn length(exdent7);
    check L169() else D63();
  L170():
    gsub = ldf gsub;
    check L171() else D64();
  D63():
    deopt 252 [r142];
  D64():
    deopt 254 [];
  D66():
    deopt 268 [];
  L169():
    goto L33(r142);
  L171():
    p37 = prom<V +>{
      sprintf3 = ldf sprintf;
      p36 = prom<V +>{
        strrep = ldf strrep;
        p35 = prom<V +>{
          sym11 = ldf min;
          base11 = ldf min in base;
          guard11 = `==`.4(sym11, base11);
          if guard11 then L1() else L2();
        L0(r144):
          r146 = `-`(r144, 1);
          return r146;
        L1():
          exdent8 = ld exdent;
          exdent9 = force? exdent8;
          checkMissing(exdent9);
          min = ldf min in base;
          r145 = dyn min(exdent9);
          goto L0(r145);
        L2():
          r143 = dyn base11(<sym exdent>);
          goto L0(r143);
        };
        r148 = dyn strrep(" ", p35);
        return r148;
      };
      r150 = dyn sprintf3("\n%s", p36);
      return r150;
    };
    p38 = prom<V +>{
      entries2 = ld entries;
      entries3 = force? entries2;
      checkMissing(entries3);
      return entries3;
    };
    r153 = dyn gsub(p37, "\n", p38);
    check L172() else D65();
  L177():
    p39 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      c23 = `is.object`(out7);
      if c23 then L1() else L2();
    L0(dx33):
      return dx33;
    L1():
      dr30 = tryDispatchBuiltin.1("[", out7);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r160 = dyn __10(out7, <missing>, -5, FALSE);
      goto L0(r160);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx32);
    };
    p40 = prom<V +>{
      sym12 = ldf `as.logical`;
      base12 = ldf `as.logical` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r163):
      return r163;
    L2():
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      c24 = `is.object`(out11);
      if c24 then L4() else L5();
    L3():
      r162 = dyn base12(<lang `[`(out, , 5)>);
      goto L0(r162);
    L1(dx35):
      as_logical = ldf `as.logical` in base;
      r165 = dyn as_logical(dx35);
      goto L0(r165);
    L4():
      dr32 = tryDispatchBuiltin.1("[", out11);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L6() else L5();
    L5():
      __11 = ldf `[` in base;
      r164 = dyn __11(out11, <missing>, 5);
      goto L1(r164);
    L6():
      dx34 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx34);
    };
    r167 = dyn _make_news_db1(p39, p40);
    check L178() else D67();
  D65():
    deopt 258 [r153];
  D67():
    deopt 271 [r167];
  L172():
    l6 = ld out;
    c22 = `is.object`(l6);
    if c22 then L173() else L174(r153);
  L178():
    popenv;
    return r167;
  L35(r157, dx31):
    st out = dx31;
    goto L36();
  L173():
    dr28 = tryDispatchBuiltin.0("[<-", l6, r153);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L175() else L174(r153);
  L174(r155):
    ___2 = ldf `[<-` in base;
    r158 = dyn ___2(l6, <missing>, 4, r153);
    goto L35(r155, r158);
  L175():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L35(r153, dx30);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn paste[, collapse](p, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner390881012(chunk, header) {
  (reg chunk:*, reg header:*) -+> V { var chunk:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg header1:*, reg header2:V, reg is_na:cls, reg r2:V, reg r3:V, reg c:L, reg chunk1:*, reg chunk2:V, reg c1:L, reg chunk4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sub:cls, reg re_v:*, reg re_v1:V, reg p:p(V +), reg txt:*, reg txt1:V, reg p1:p(V +), reg r8:V, reg grepl:cls, reg re_d:*, reg re_d1:V, reg p2:p(V +), reg txt2:*, reg txt3:V, reg p3:p(V +), reg r11:V, reg c2:L, reg sub1:cls, reg re_d2:*, reg re_d3:V, reg p4:p(V +), reg txt4:*, reg txt5:V, reg p5:p(V +), reg r14:V, reg r15:V, reg chunk5:*, reg chunk6:V, reg c3:L, reg chunk8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg _collapse:cls, reg lines:*, reg lines1:V, reg p6:p(V +), reg r18:V, reg grepl1:cls, reg s:*, reg s1:V, reg p7:p(V +), reg r20:V, reg c4:L, reg sub2:cls, reg s2:*, reg s3:V, reg p8:p(V +), reg r22:V, reg sprintf:cls, reg sep:*, reg sep1:V, reg p9:p(V +), reg r24:V, reg grepl2:cls, reg ire:*, reg ire1:V, reg p10:p(V +), reg lines2:*, reg lines3:V, reg p11:p(V +), reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg sapply:cls, reg split:cls, reg lines4:*, reg lines5:V, reg p12:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg ind:*, reg ind1:V, reg cumsum:cls, reg r33:V, reg p13:p(V +), reg r35:V, reg p14:p(V +), reg r37:cls, reg p15:p(V +), reg r39:V, reg header3:*, reg header4:V, reg chunk9:*, reg chunk10:V, reg date:*, reg date1:V, reg list:cls, reg r40:V, reg grepl3:cls, reg re_c:*, reg re_c1:V, reg p16:p(V +), reg lines6:*, reg lines7:V, reg p17:p(V +), reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg ind2:*, reg ind3:V, reg any:cls, reg r46:V, reg r47:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg character:cls, reg r50:V, reg header5:*, reg header6:V, reg chunk11:*, reg chunk12:V, reg date2:*, reg date3:V, reg list1:cls, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg ind4:*, reg ind5:V, reg cumsum1:cls, reg r54:V, reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg Map:cls, reg do_chunk:*, reg do_chunk1:V, reg p18:p(V +), reg split1:cls, reg lines8:*, reg lines9:V, reg c6:L, reg lines11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pos:*, reg pos1:V, reg __2:cls, reg r59:V, reg p19:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg ind6:*, reg ind7:V, reg cumsum2:cls, reg r63:V, reg c7:L, reg r65:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos2:*, reg pos3:V, reg __3:cls, reg r66:V, reg p20:p(V +), reg r68:V, reg p21:p(V +), reg sub3:cls, reg sub4:cls, reg re_c2:*, reg re_c3:V, reg p22:p(V +), reg lines12:*, reg lines13:V, reg c8:L, reg lines15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind8:*, reg ind9:V, reg __4:cls, reg r71:V, reg p23:p(V +), reg r73:V, reg p24:p(V +), reg r75:V, reg p25:p(V +), reg r77:V, reg header7:*, reg header8:V, reg chunk13:*, reg chunk14:V, reg date4:*, reg date5:V, reg list2:cls, reg r78:V |
    mkenv;
    st chunk = chunk;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(NA_STR) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L19() else L2();
  L15():
    header1 = ld header;
    check L17() else D0();
  L16():
    r = dyn base(<sym header>);
    goto L1(r);
  D0():
    deopt 2 [header1];
  L2():
    chunk1 = ld chunk;
    check L21() else D2();
  L3():
    chunk5 = ld chunk;
    check L33() else D9();
  L17():
    header2 = force? header1;
    checkMissing(header2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(header2);
    check L18() else D1();
  L19():
    st date = NA_STR;
    goto L3();
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [chunk1];
  D9():
    deopt 43 [chunk5];
  L18():
    goto L1(r2);
  L21():
    chunk2 = force? chunk1;
    checkMissing(chunk2);
    c1 = `is.object`(chunk2);
    if c1 then L22() else L23(chunk2);
  L33():
    chunk6 = force? chunk5;
    checkMissing(chunk6);
    c3 = `is.object`(chunk6);
    if c3 then L34() else L35(chunk6);
  L4(dx1):
    st txt = dx1;
    sub = ldf sub;
    check L25() else D3();
  L7(dx3):
    st lines = dx3;
    _collapse = ldf `.collapse`;
    check L37() else D10();
  L22():
    dr = tryDispatchBuiltin.1("[", chunk2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(chunk4):
    __ = ldf `[` in base;
    r5 = dyn __(chunk4, 1);
    goto L4(r5);
  L34():
    dr2 = tryDispatchBuiltin.1("[", chunk6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(chunk8):
    __1 = ldf `[` in base;
    r16 = dyn __1(chunk8, -1);
    goto L7(r16);
  D3():
    deopt 17 [];
  D10():
    deopt 50 [];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L25():
    p = prom<V +>{
      re_v = ld re_v;
      re_v1 = force? re_v;
      checkMissing(re_v1);
      return re_v1;
    };
    p1 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r8 = dyn sub[, , , `ignore.case`](p, "\\6", p1, TRUE);
    check L26() else D4();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L37():
    p6 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r18 = dyn _collapse(p6);
    check L38() else D11();
  D4():
    deopt 23 [r8];
  D11():
    deopt 52 [r18];
  L26():
    st header = r8;
    grepl = ldf grepl;
    check L27() else D5();
  L38():
    st s = r18;
    grepl1 = ldf grepl;
    check L39() else D12();
  D5():
    deopt 26 [];
  D12():
    deopt 55 [];
  L27():
    p2 = prom<V +>{
      re_d = ld re_d;
      re_d1 = force? re_d;
      checkMissing(re_d1);
      return re_d1;
    };
    p3 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r11 = dyn grepl[, , perl](p2, p3, TRUE);
    check L28() else D6();
  L39():
    p7 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r20 = dyn grepl1("^[[:space:]]*([o*+-])", p7);
    check L40() else D13();
  D6():
    deopt 31 [r11];
  D13():
    deopt 58 [r20];
  L28():
    c2 = `as.logical`(r11);
    if c2 then L29() else L5();
  L40():
    c4 = `as.logical`(r20);
    if c4 then L41() else L8();
  L5():
    goto L6(NA_STR);
  L6(r15):
    st date = r15;
    goto L3();
  L8():
    st re_c = "^([[:alpha:]].*)[[:space:]]*$";
    grepl3 = ldf grepl;
    check L57() else D26();
  L29():
    sub1 = ldf sub;
    check L30() else D7();
  L41():
    sub2 = ldf sub;
    check L42() else D14();
  D7():
    deopt 33 [];
  D14():
    deopt 60 [];
  D26():
    deopt 101 [];
  L30():
    p4 = prom<V +>{
      re_d2 = ld re_d;
      re_d3 = force? re_d2;
      checkMissing(re_d3);
      return re_d3;
    };
    p5 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    r14 = dyn sub1[, , , perl](p4, "\\1", p5, TRUE);
    check L31() else D8();
  L42():
    p8 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r22 = dyn sub2("^[[:space:]]*([o*+-]).*$", "\\1", p8);
    check L43() else D15();
  L57():
    p16 = prom<V +>{
      re_c = ld re_c;
      re_c1 = force? re_c;
      checkMissing(re_c1);
      return re_c1;
    };
    p17 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r43 = dyn grepl3(p16, p17);
    check L58() else D27();
  D8():
    deopt 39 [r14];
  D15():
    deopt 64 [r22];
  D27():
    deopt 104 [r43];
  L31():
    goto L6(r14);
  L43():
    st sep = r22;
    sprintf = ldf sprintf;
    check L44() else D16();
  L58():
    st ind = r43;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  D16():
    deopt 67 [];
  L10(r45):
    r47 = `!`(r45);
    c5 = `as.logical`(r47);
    if c5 then L63() else L11();
  L44():
    p9 = prom<V +>{
      sep = ld sep;
      sep1 = force? sep;
      checkMissing(sep1);
      return sep1;
    };
    r24 = dyn sprintf("^[[:space:]]*([%s])[[:space:]]+", p9);
    check L45() else D17();
  L59():
    ind2 = ld ind;
    check L61() else D28();
  L60():
    r44 = dyn base3(<sym ind>);
    goto L10(r44);
  D17():
    deopt 70 [r24];
  D28():
    deopt 108 [ind2];
  L11():
    sym5 = ldf cumsum;
    base5 = ldf cumsum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L45():
    st ire = r24;
    grepl2 = ldf grepl;
    check L46() else D18();
  L61():
    ind3 = force? ind2;
    checkMissing(ind3);
    any = ldf any in base;
    r46 = dyn any(ind3);
    check L62() else D29();
  L63():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  D18():
    deopt 73 [];
  D29():
    deopt 111 [r46];
  L12(r49):
    popenv;
    return r49;
  L13(r53):
    r55 = `>`(r53, 0.0);
    st pos = r55;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L46():
    p10 = prom<V +>{
      ire = ld ire;
      ire1 = force? ire;
      checkMissing(ire1);
      return ire1;
    };
    p11 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r27 = dyn grepl2(p10, p11);
    check L47() else D19();
  L62():
    goto L10(r46);
  L64():
    character = ldf character;
    check L66() else D30();
  L65():
    r48 = dyn base4[entries, header, chunk, date](<lang character()>, <sym header>, <sym chunk>, <sym date>);
    goto L12(r48);
  L73():
    ind4 = ld ind;
    check L75() else D36();
  L74():
    r52 = dyn base5(<sym ind>);
    goto L13(r52);
  D19():
    deopt 76 [r27];
  D30():
    deopt 116 [];
  D36():
    deopt 132 [ind4];
  L14(r57):
    popenv;
    return r57;
  L47():
    st ind = r27;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L66():
    r50 = dyn character();
    check L67() else D31();
  L75():
    ind5 = force? ind4;
    checkMissing(ind5);
    cumsum1 = ldf cumsum in base;
    r54 = dyn cumsum1(ind5);
    check L76() else D37();
  L77():
    Map = ldf Map;
    check L79() else D38();
  L78():
    r56 = dyn base6[entries, header, chunk, date](<lang Map(do_chunk, split(`[`(lines, pos), `[`(cumsum(ind), pos)), sub("[[:punct:]]*$", "", sub(re_c, "\\1", `[`(lines, ind))))>, <sym header>, <sym chunk>, <sym date>);
    goto L14(r56);
  D31():
    deopt 117 [r50];
  D37():
    deopt 135 [r54];
  D38():
    deopt 142 [];
  L9(r29):
    popenv;
    return r29;
  L48():
    sapply = ldf sapply;
    check L50() else D20();
  L49():
    r28 = dyn base1[entries, header, chunk, date](<lang sapply(split(lines, cumsum(ind)), function((s=), sub(ire, "", .collapse(sub("^\t?", "", s))), NULL))>, <sym header>, <sym chunk>, <sym date>);
    goto L9(r28);
  L67():
    header5 = ld header;
    check L68() else D32();
  L76():
    goto L13(r54);
  L79():
    p18 = prom<V +>{
      do_chunk = ld do_chunk;
      do_chunk1 = force? do_chunk;
      checkMissing(do_chunk1);
      return do_chunk1;
    };
    p21 = prom<V +>{
      split1 = ldf split;
      p19 = prom<V +>{
        lines8 = ld lines;
        lines9 = force? lines8;
        checkMissing(lines9);
        c6 = `is.object`(lines9);
        if c6 then L1() else L2(lines9);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", lines9);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(lines11):
        pos = ld pos;
        pos1 = force? pos;
        __2 = ldf `[` in base;
        r59 = dyn __2(lines11, pos1);
        goto L0(r59);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p20 = prom<V +>{
        sym7 = ldf cumsum;
        base7 = ldf cumsum in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L2() else L3();
      L0(r62):
        c7 = `is.object`(r62);
        if c7 then L4() else L5(r62);
      L2():
        ind6 = ld ind;
        ind7 = force? ind6;
        checkMissing(ind7);
        cumsum2 = ldf cumsum in base;
        r63 = dyn cumsum2(ind7);
        goto L0(r63);
      L3():
        r61 = dyn base7(<sym ind>);
        goto L0(r61);
      L1(dx7):
        return dx7;
      L4():
        dr6 = tryDispatchBuiltin.1("[", r62);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L6() else L5(dr6);
      L5(r65):
        pos2 = ld pos;
        pos3 = force? pos2;
        __3 = ldf `[` in base;
        r66 = dyn __3(r65, pos3);
        goto L1(r66);
      L6():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      };
      r68 = dyn split1(p19, p20);
      return r68;
    };
    p25 = prom<V +>{
      sub3 = ldf sub;
      p24 = prom<V +>{
        sub4 = ldf sub;
        p22 = prom<V +>{
          re_c2 = ld re_c;
          re_c3 = force? re_c2;
          checkMissing(re_c3);
          return re_c3;
        };
        p23 = prom<V +>{
          lines12 = ld lines;
          lines13 = force? lines12;
          checkMissing(lines13);
          c8 = `is.object`(lines13);
          if c8 then L1() else L2(lines13);
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("[", lines13);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(lines15):
          ind8 = ld ind;
          ind9 = force? ind8;
          __4 = ldf `[` in base;
          r71 = dyn __4(lines15, ind9);
          goto L0(r71);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r73 = dyn sub4(p22, "\\1", p23);
        return r73;
      };
      r75 = dyn sub3("[[:punct:]]*$", "", p24);
      return r75;
    };
    r77 = dyn Map(p18, p21, p25);
    check L80() else D39();
  D20():
    deopt 81 [];
  D32():
    deopt 119 [header5];
  D39():
    deopt 146 [r77];
  L50():
    p14 = prom<V +>{
      split = ldf split;
      p12 = prom<V +>{
        lines4 = ld lines;
        lines5 = force? lines4;
        checkMissing(lines5);
        return lines5;
      };
      p13 = prom<V +>{
        sym2 = ldf cumsum;
        base2 = ldf cumsum in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r32):
        return r32;
      L1():
        ind = ld ind;
        ind1 = force? ind;
        checkMissing(ind1);
        cumsum = ldf cumsum in base;
        r33 = dyn cumsum(ind1);
        goto L0(r33);
      L2():
        r31 = dyn base2(<sym ind>);
        goto L0(r31);
      };
      r35 = dyn split(p12, p13);
      return r35;
    };
    p15 = prom<V +>{
      r37 = clos inner1236783023;
      return r37;
    };
    r39 = dyn sapply(p14, p15);
    check L51() else D21();
  L68():
    header6 = force? header5;
    checkMissing(header6);
    chunk11 = ld chunk;
    check L69() else D33();
  L80():
    header7 = ld header;
    check L81() else D40();
  D21():
    deopt 84 [r39];
  D33():
    deopt 122 [chunk11];
  D40():
    deopt 148 [header7];
  L51():
    header3 = ld header;
    check L52() else D22();
  L69():
    chunk12 = force? chunk11;
    checkMissing(chunk12);
    date2 = ld date;
    check L70() else D34();
  L81():
    header8 = force? header7;
    checkMissing(header8);
    chunk13 = ld chunk;
    check L82() else D41();
  D22():
    deopt 86 [header3];
  D34():
    deopt 125 [date2];
  D41():
    deopt 151 [chunk13];
  L52():
    header4 = force? header3;
    checkMissing(header4);
    chunk9 = ld chunk;
    check L53() else D23();
  L70():
    date3 = force? date2;
    checkMissing(date3);
    list1 = ldf list in base;
    r51 = dyn list1(r50, header6, chunk12, date3);
    check L71() else D35();
  L82():
    chunk14 = force? chunk13;
    checkMissing(chunk14);
    date4 = ld date;
    check L83() else D42();
  D23():
    deopt 89 [chunk9];
  D35():
    deopt 129 [r51];
  D42():
    deopt 154 [date4];
  L53():
    chunk10 = force? chunk9;
    checkMissing(chunk10);
    date = ld date;
    check L54() else D24();
  L71():
    goto L12(r51);
  L83():
    date5 = force? date4;
    checkMissing(date5);
    list2 = ldf list in base;
    r78 = dyn list2(r77, header8, chunk14, date5);
    check L84() else D43();
  D24():
    deopt 92 [date];
  D43():
    deopt 158 [r78];
  L54():
    date1 = force? date;
    checkMissing(date1);
    list = ldf list in base;
    r40 = dyn list(r39, header4, chunk10, date1);
    check L55() else D25();
  L84():
    goto L14(r78);
  D25():
    deopt 96 [r40];
  L55():
    goto L9(r40);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg warning:cls, reg gettextf:cls, reg _collapse:cls, reg paste0:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st x = x;
    warning = ldf warning;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        _collapse = ldf `.collapse`;
        p1 = prom<V +>{
          paste0 = ldf paste0;
          p = prom<V +>{
            x1 = ld x;
            x2 = force? x1;
            checkMissing(x2);
            return x2;
          };
          r1 = dyn paste0("  ", p);
          return r1;
        };
        r3 = dyn _collapse(p1);
        return r3;
      };
      r5 = dyn gettextf("Cannot process chunk/lines:\n%s", p2);
      return r5;
    };
    r7 = dyn warning[, domain, `call.`](p3, NA_LGL, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r7];
  L1():
    popenv;
    return NULL;
  }
}