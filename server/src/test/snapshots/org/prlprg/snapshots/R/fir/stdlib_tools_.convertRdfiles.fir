fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner797096205;
    st `.convertRdfiles` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner797096205(dir, outDir, types, silent, outenc) {
  (reg dir:*, reg outDir:*, reg types:*, reg silent:*, reg outenc:*) -+> V { var dir:*, var outDir:*, var types:*, reg types_isMissing:L, reg types_orDefault:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var outenc:*, reg outenc_isMissing:L, reg outenc_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg l:*, reg names__:cls, reg r10:V, reg l1:*, reg names__1:cls, reg r11:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r13:V, reg dir_exists:cls, reg mandir:*, reg mandir1:V, reg p1:p(V +), reg r15:V, reg r16:V, reg c3:L, reg readRDS:cls, reg file_path1:cls, reg outDir1:*, reg outDir2:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg r22:V, reg c4:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg desc:*, reg desc1:V, reg c5:L, reg desc3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r26:V, reg desc4:*, reg desc5:V, reg c6:L, reg desc7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r27:V, reg types1:*, reg types2:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg dir_create:cls, reg file_path2:cls, reg outDir3:*, reg outDir4:V, reg p4:p(V +), reg dirname:*, reg dirname1:V, reg c8:L, reg dirname3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg type:*, reg type1:V, reg __2:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg r33:V, reg cat:cls, reg sQuote:cls, reg pkg:*, reg pkg1:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg r37:V, reg _in_:cls, reg types3:*, reg types4:V, reg p9:p(V +), reg r39:V, reg c9:L, reg silent1:*, reg silent2:V, reg r40:V, reg c10:L, reg message:cls, reg r41:V, reg findHTMLlinks:cls, reg outDir5:*, reg outDir6:V, reg p10:p(V +), reg p11:p(V +), reg r45:V, reg silent3:*, reg silent4:V, reg r46:V, reg c11:L, reg message1:cls, reg r47:V, reg r49:cls, reg delayedAssign:cls, reg _Links2:cls, reg r50:V, reg p12:p(V +), reg r52:V, reg tryCatch:cls, reg Rd_db:cls, reg basename:cls, reg outDir7:*, reg outDir8:V, reg p13:p(V +), reg r55:V, reg p14:p(V +), reg dirname4:cls, reg outDir9:*, reg outDir10:V, reg p15:p(V +), reg r58:V, reg p16:p(V +), reg r60:V, reg p17:p(V +), reg r62:cls, reg p18:p(V +), reg r64:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r65:V, reg r66:V, reg db:*, reg db1:V, reg c12:V, reg c13:L, reg Rd_db1:cls, reg dir3:*, reg dir4:V, reg p19:p(V +), reg r68:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r70:V, reg r71:V, reg db2:*, reg db3:V, reg length:cls, reg r72:V, reg r73:V, reg c14:L, reg r76:cls, reg r77:cls, reg r78:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r79:V, reg r80:V, reg db4:*, reg db5:V, reg names:cls, reg r81:V, reg files:*, reg files1:V, reg s1:V, reg l3:I, reg i5:I, reg i6:I, reg i7:I, reg c15:L, reg x1:V, reg character:cls, reg r82:V, reg db6:*, reg db7:V, reg c16:L, reg i11:I, reg db9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i13:I, reg dx9:V, reg nf:*, reg nf1:V, reg __3:cls, reg r83:V, reg l4:*, reg attr__:cls, reg r84:V, reg sub:cls, reg basename1:cls, reg nf2:*, reg nf3:V, reg p20:p(V +), reg r86:V, reg p21:p(V +), reg r88:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r89:V, reg i16:I, reg r90:V, reg Rd:*, reg Rd1:V, reg attr:cls, reg r91:V, reg _in_1:cls, reg types5:*, reg types6:V, reg p22:p(V +), reg r93:V, reg c17:L, reg file_path3:cls, reg outDir11:*, reg outDir12:V, reg p23:p(V +), reg dirname5:*, reg dirname6:V, reg c18:L, reg dirname8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg type2:*, reg type3:V, reg __4:cls, reg r95:V, reg p24:p(V +), reg paste0:cls, reg bf:*, reg bf1:V, reg p25:p(V +), reg ext:*, reg ext1:V, reg c19:L, reg ext3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg type4:*, reg type5:V, reg __5:cls, reg r98:V, reg p26:p(V +), reg r100:V, reg p27:p(V +), reg r102:V, reg file_test:cls, reg ff:*, reg ff1:V, reg p28:p(V +), reg r104:V, reg r105:V, reg c20:L, reg i19:I, reg c21:V, reg file_test1:cls, reg f:*, reg f1:V, reg p29:p(V +), reg ff2:*, reg ff3:V, reg p30:p(V +), reg r108:V, reg c23:L, reg c24:V, reg c26:L, reg showtype:cls, reg type6:*, reg type7:V, reg p31:p(V +), reg r110:V, reg _convert:cls, reg Rd2HTML:cls, reg Rd2:*, reg Rd3:V, reg p32:p(V +), reg ff4:*, reg ff5:V, reg p33:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r113:V, reg r114:V, reg pkg2:*, reg pkg3:V, reg ver:*, reg ver1:V, reg c27:cls, reg r115:V, reg p34:p(V +), reg Links:*, reg Links1:V, reg p35:p(V +), reg Links2:*, reg Links3:V, reg p36:p(V +), reg r119:V, reg p37:p(V +), reg r121:V, reg i24:I, reg r122:V, reg i25:I, reg _in_2:cls, reg types7:*, reg types8:V, reg p38:p(V +), reg r125:V, reg c28:L, reg file_path4:cls, reg outDir13:*, reg outDir14:V, reg p39:p(V +), reg dirname9:*, reg dirname10:V, reg c29:L, reg dirname12:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg type8:*, reg type9:V, reg __6:cls, reg r127:V, reg p40:p(V +), reg paste1:cls, reg bf2:*, reg bf3:V, reg p41:p(V +), reg ext4:*, reg ext5:V, reg c30:L, reg ext7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg type10:*, reg type11:V, reg __7:cls, reg r130:V, reg p42:p(V +), reg r132:V, reg p43:p(V +), reg r134:V, reg file_test2:cls, reg ff6:*, reg ff7:V, reg p44:p(V +), reg r136:V, reg r137:V, reg c31:L, reg i28:I, reg c32:V, reg file_test3:cls, reg f2:*, reg f3:V, reg p45:p(V +), reg ff8:*, reg ff9:V, reg p46:p(V +), reg r140:V, reg c34:L, reg c35:V, reg c37:L, reg showtype1:cls, reg type12:*, reg type13:V, reg p47:p(V +), reg r142:V, reg _convert1:cls, reg Rd2latex:cls, reg Rd4:*, reg Rd5:V, reg p48:p(V +), reg ff10:*, reg ff11:V, reg p49:p(V +), reg outenc1:*, reg outenc2:V, reg p50:p(V +), reg r146:V, reg p51:p(V +), reg r148:V, reg i33:I, reg r149:V, reg i34:I, reg _in_3:cls, reg types9:*, reg types10:V, reg p52:p(V +), reg r152:V, reg c38:L, reg file_path5:cls, reg outDir15:*, reg outDir16:V, reg p53:p(V +), reg dirname13:*, reg dirname14:V, reg c39:L, reg dirname16:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg type14:*, reg type15:V, reg __8:cls, reg r154:V, reg p54:p(V +), reg paste2:cls, reg bf4:*, reg bf5:V, reg p55:p(V +), reg ext8:*, reg ext9:V, reg c40:L, reg ext11:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg type16:*, reg type17:V, reg __9:cls, reg r157:V, reg p56:p(V +), reg r159:V, reg p57:p(V +), reg r161:V, reg file_test4:cls, reg ff12:*, reg ff13:V, reg p58:p(V +), reg r163:V, reg r164:V, reg c41:L, reg i37:I, reg c42:V, reg file_test5:cls, reg f4:*, reg f5:V, reg p59:p(V +), reg ff14:*, reg ff15:V, reg p60:p(V +), reg r167:V, reg c44:L, reg c45:V, reg c47:L, reg _convert2:cls, reg Rd2ex:cls, reg Rd6:*, reg Rd7:V, reg p61:p(V +), reg ff16:*, reg ff17:V, reg p62:p(V +), reg r170:V, reg p63:p(V +), reg r172:V, reg file_test6:cls, reg ff18:*, reg ff19:V, reg p64:p(V +), reg r174:V, reg c48:L, reg showtype2:cls, reg type18:*, reg type19:V, reg p65:p(V +), reg r176:V, reg i44:I, reg r177:V, reg i45:I, reg r178:V, reg i46:I, reg shown:*, reg shown1:V, reg c49:L, reg cat1:cls, reg r180:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r181:V, reg i51:I, reg r182:V, reg _messages:*, reg _messages1:V, reg length1:cls, reg r183:V, reg c50:L, reg writeLines:cls, reg unique:cls, reg _messages2:*, reg _messages3:V, reg p66:p(V +), reg r185:V, reg p67:p(V +), reg r187:V, reg i54:I, reg r188:V, reg i55:I, reg sub1:cls, reg basename2:cls, reg files2:*, reg files3:V, reg p68:p(V +), reg r191:V, reg p69:p(V +), reg r193:V, reg _in_4:cls, reg types11:*, reg types12:V, reg p70:p(V +), reg r195:V, reg c51:L, reg list_files:cls, reg file_path6:cls, reg outDir17:*, reg outDir18:V, reg p71:p(V +), reg dirname17:*, reg dirname18:V, reg c52:L, reg dirname20:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg type20:*, reg type21:V, reg __10:cls, reg r197:V, reg p72:p(V +), reg r199:V, reg p73:p(V +), reg r201:V, reg sub2:cls, reg basename3:cls, reg have:*, reg have1:V, reg p74:p(V +), reg r203:V, reg p75:p(V +), reg r205:V, reg have2:*, reg have3:V, reg c53:L, reg have5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg _notin_:cls, reg have6:*, reg have7:V, reg p76:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r207:V, reg r208:V, reg bfs:*, reg bfs1:V, reg c54:cls, reg r209:V, reg p77:p(V +), reg r211:V, reg __11:cls, reg r212:V, reg unlink:cls, reg file_path7:cls, reg outDir19:*, reg outDir20:V, reg p78:p(V +), reg dirname21:*, reg dirname22:V, reg c55:L, reg dirname24:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg type22:*, reg type23:V, reg __12:cls, reg r214:V, reg p79:p(V +), reg drop:*, reg drop1:V, reg p80:p(V +), reg r217:V, reg p81:p(V +), reg r219:V, reg _in_5:cls, reg types13:*, reg types14:V, reg p82:p(V +), reg r222:V, reg c56:L, reg list_files1:cls, reg file_path8:cls, reg outDir21:*, reg outDir22:V, reg p83:p(V +), reg dirname25:*, reg dirname26:V, reg c57:L, reg dirname28:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg type24:*, reg type25:V, reg __13:cls, reg r224:V, reg p84:p(V +), reg r226:V, reg p85:p(V +), reg r228:V, reg sub3:cls, reg basename4:cls, reg have8:*, reg have9:V, reg p86:p(V +), reg r230:V, reg p87:p(V +), reg r232:V, reg have10:*, reg have11:V, reg c58:L, reg have13:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg _notin_1:cls, reg have14:*, reg have15:V, reg p88:p(V +), reg bfs2:*, reg bfs3:V, reg p89:p(V +), reg r235:V, reg __14:cls, reg r236:V, reg unlink1:cls, reg file_path9:cls, reg outDir23:*, reg outDir24:V, reg p90:p(V +), reg dirname29:*, reg dirname30:V, reg c59:L, reg dirname32:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg type26:*, reg type27:V, reg __15:cls, reg r238:V, reg p91:p(V +), reg drop2:*, reg drop3:V, reg p92:p(V +), reg r241:V, reg p93:p(V +), reg r243:V, reg _in_6:cls, reg types15:*, reg types16:V, reg p94:p(V +), reg r246:V, reg c60:L, reg list_files2:cls, reg file_path10:cls, reg outDir25:*, reg outDir26:V, reg p95:p(V +), reg dirname33:*, reg dirname34:V, reg c61:L, reg dirname36:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg type28:*, reg type29:V, reg __16:cls, reg r248:V, reg p96:p(V +), reg r250:V, reg p97:p(V +), reg r252:V, reg sub4:cls, reg basename5:cls, reg have16:*, reg have17:V, reg p98:p(V +), reg r254:V, reg p99:p(V +), reg r256:V, reg have18:*, reg have19:V, reg c62:L, reg have21:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg _notin_2:cls, reg have22:*, reg have23:V, reg p100:p(V +), reg bfs4:*, reg bfs5:V, reg p101:p(V +), reg r259:V, reg __17:cls, reg r260:V, reg unlink2:cls, reg file_path11:cls, reg outDir27:*, reg outDir28:V, reg p102:p(V +), reg dirname37:*, reg dirname38:V, reg c63:L, reg dirname40:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg type30:*, reg type31:V, reg __18:cls, reg r262:V, reg p103:p(V +), reg drop4:*, reg drop5:V, reg p104:p(V +), reg r265:V, reg p105:p(V +), reg r267:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    types_isMissing = missing.0(types);
    if types_isMissing then L0("html") else L0(types);
  L0(types_orDefault):
    st types = types_orDefault;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L1(FALSE) else L1(silent);
  L1(silent_orDefault):
    st silent = silent_orDefault;
    outenc_isMissing = missing.0(outenc);
    if outenc_isMissing then L2("UTF-8") else L2(outenc);
  L2(outenc_orDefault):
    st outenc = outenc_orDefault;
    r = clos inner657253850;
    st showtype = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L59() else L60();
  L3(r2):
    st dirname = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L59():
    c = ldf c in base;
    r3 = dyn c("html", "latex", "R-ex");
    check L61() else D0();
  L60():
    r1 = dyn base("html", "latex", "R-ex");
    goto L3(r1);
  D0():
    deopt 9 [r3];
  L4(r5):
    st ext = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L61():
    goto L3(r3);
  L62():
    c1 = ldf c in base;
    r6 = dyn c1(".html", ".tex", ".R");
    check L64() else D1();
  L63():
    r4 = dyn base1(".html", ".tex", ".R");
    goto L4(r4);
  D1():
    deopt 17 [r6];
  L5(r8):
    l = ld ext;
    names__ = ldf `names<-`;
    check L68() else D3();
  L64():
    goto L4(r6);
  L65():
    c2 = ldf c in base;
    r9 = dyn c2("html", "latex", "example");
    check L67() else D2();
  L66():
    r7 = dyn base2("html", "latex", "example");
    goto L5(r7);
  D2():
    deopt 25 [r9];
  D3():
    deopt 27 [r8, l, r8];
  L67():
    goto L5(r9);
  L68():
    r10 = dyn names__(l, NULL, r8);
    check L69() else D4();
  D4():
    deopt 29 [r8, r10];
  L69():
    st ext = r10;
    l1 = ld dirname;
    names__1 = ldf `names<-`;
    check L70() else D5();
  D5():
    deopt 32 [r8, l1, r8];
  L70():
    r11 = dyn names__1(l1, NULL, r8);
    check L71() else D6();
  D6():
    deopt 34 [r8, r11];
  L71():
    st dirname = r11;
    file_path = ldf `file.path`;
    check L72() else D7();
  D7():
    deopt 37 [];
  L72():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r13 = dyn file_path(p, "man");
    check L73() else D8();
  D8():
    deopt 40 [r13];
  L73():
    st mandir = r13;
    dir_exists = ldf `dir.exists`;
    check L74() else D9();
  D9():
    deopt 43 [];
  L74():
    p1 = prom<V +>{
      mandir = ld mandir;
      mandir1 = force? mandir;
      checkMissing(mandir1);
      return mandir1;
    };
    r15 = dyn dir_exists(p1);
    check L75() else D10();
  D10():
    deopt 45 [r15];
  L75():
    r16 = `!`(r15);
    c3 = `as.logical`(r16);
    if c3 then L76() else L6();
  L6():
    readRDS = ldf readRDS;
    check L79() else D11();
  L76():
    popenv;
    return NULL;
  D11():
    deopt 53 [];
  L79():
    p3 = prom<V +>{
      file_path1 = ldf `file.path`;
      p2 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r20 = dyn file_path1(p2, "Meta", "package.rds");
      return r20;
    };
    r22 = dyn readRDS(p3);
    check L80() else D12();
  D12():
    deopt 55 [r22];
  L80():
    c4 = `is.object`(r22);
    if c4 then L82() else L83(r22);
  L81(dx1):
    st desc = dx1;
    desc = ld desc;
    check L85() else D13();
  L82():
    dr = tryDispatchBuiltin.1("$", r22);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L84() else L83(dr);
  L83(r24):
    r25 = `$`(r24, <sym DESCRIPTION>);
    goto L81(r25);
  D13():
    deopt 58 [desc];
  L84():
    dx = getTryDispatchBuiltinValue(dr);
    goto L81(dx);
  L85():
    desc1 = force? desc;
    checkMissing(desc1);
    c5 = `is.object`(desc1);
    if c5 then L86() else L87(desc1);
  L8(dx3):
    st pkg = dx3;
    desc4 = ld desc;
    check L89() else D14();
  L86():
    dr2 = tryDispatchBuiltin.1("[", desc1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(desc3):
    __ = ldf `[` in base;
    r26 = dyn __(desc3, "Package");
    goto L8(r26);
  D14():
    deopt 64 [desc4];
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L89():
    desc5 = force? desc4;
    checkMissing(desc5);
    c6 = `is.object`(desc5);
    if c6 then L90() else L91(desc5);
  L9(dx5):
    st ver = dx5;
    types1 = ld types;
    check L93() else D15();
  L90():
    dr4 = tryDispatchBuiltin.1("[", desc5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L92() else L91(dr4);
  L91(desc7):
    __1 = ldf `[` in base;
    r27 = dyn __1(desc7, "Version");
    goto L9(r27);
  D15():
    deopt 70 [types1];
  L92():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L93():
    types2 = force? types1;
    checkMissing(types2);
    s = toForSeq(types2);
    l2 = length(s);
    i = 0;
    goto L10(i);
  L10(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l2, i2);
    if c7 then L94() else L11();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st type = x;
    dir_create = ldf `dir.create`;
    check L95() else D16();
  L94():
    cat = ldf cat;
    check L97() else D18();
  D16():
    deopt 73 [i2];
  D18():
    deopt 82 [];
  L95():
    p6 = prom<V +>{
      file_path2 = ldf `file.path`;
      p4 = prom<V +>{
        outDir3 = ld outDir;
        outDir4 = force? outDir3;
        checkMissing(outDir4);
        return outDir4;
      };
      p5 = prom<V +>{
        dirname = ld dirname;
        dirname1 = force? dirname;
        checkMissing(dirname1);
        c8 = `is.object`(dirname1);
        if c8 then L1() else L2(dirname1);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", dirname1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(dirname3):
        type = ld type;
        type1 = force? type;
        __2 = ldf `[` in base;
        r29 = dyn __2(dirname3, type1);
        goto L0(r29);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r31 = dyn file_path2(p4, p5);
      return r31;
    };
    r33 = dyn dir_create[, showWarnings](p6, FALSE);
    check L96() else D17();
  L97():
    p8 = prom<V +>{
      sQuote = ldf sQuote;
      p7 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      r35 = dyn sQuote(p7);
      return r35;
    };
    r37 = dyn cat[, , , sep]("  converting help for package ", p8, "\n", "");
    check L98() else D19();
  D17():
    deopt 77 [i2, r33];
  D19():
    deopt 88 [r37];
  L96():
    goto L10(i2);
  L98():
    _in_ = ldf `%in%`;
    check L99() else D20();
  D20():
    deopt 90 [];
  L99():
    p9 = prom<V +>{
      types3 = ld types;
      types4 = force? types3;
      checkMissing(types4);
      return types4;
    };
    r39 = dyn _in_("html", p9);
    check L100() else D21();
  D21():
    deopt 93 [r39];
  L100():
    c9 = `as.logical`(r39);
    if c9 then L101() else L12();
  L12():
    goto L17();
  L17():
    tryCatch = ldf tryCatch;
    check L117() else D32();
  L101():
    silent1 = ld silent;
    check L102() else D22();
  D22():
    deopt 94 [silent1];
  D32():
    deopt 134 [];
  L102():
    silent2 = force? silent1;
    checkMissing(silent2);
    r40 = `!`(silent2);
    c10 = `as.logical`(r40);
    if c10 then L103() else L13();
  L117():
    p17 = prom<V +>{
      Rd_db = ldf Rd_db;
      p14 = prom<V +>{
        basename = ldf basename;
        p13 = prom<V +>{
          outDir7 = ld outDir;
          outDir8 = force? outDir7;
          checkMissing(outDir8);
          return outDir8;
        };
        r55 = dyn basename(p13);
        return r55;
      };
      p16 = prom<V +>{
        dirname4 = ldf dirname;
        p15 = prom<V +>{
          outDir9 = ld outDir;
          outDir10 = force? outDir9;
          checkMissing(outDir10);
          return outDir10;
        };
        r58 = dyn dirname4(p15);
        return r58;
      };
      r60 = dyn Rd_db[, `lib.loc`](p14, p16);
      return r60;
    };
    p18 = prom<V +>{
      r62 = clos inner3708401697;
      return r62;
    };
    r64 = dyn tryCatch[, error](p17, p18);
    check L118() else D33();
  D33():
    deopt 138 [r64];
  L13():
    goto L14();
  L14():
    findHTMLlinks = ldf findHTMLlinks;
    check L107() else D25();
  L103():
    message = ldf message;
    check L104() else D23();
  L118():
    st db = r64;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L119() else L120();
  D23():
    deopt 98 [];
  D25():
    deopt 108 [];
  L18(r66):
    c13 = `as.logical`(r66);
    if c13 then L122() else L19();
  L104():
    r41 = dyn message[, appendLF, domain]("    finding HTML links ...", FALSE, NA_LGL);
    check L105() else D24();
  L107():
    p10 = prom<V +>{
      outDir5 = ld outDir;
      outDir6 = force? outDir5;
      checkMissing(outDir6);
      return outDir6;
    };
    p11 = prom<V +>{
      return <int 0, 1>;
    };
    r45 = dyn findHTMLlinks[, level](p10, p11);
    check L108() else D26();
  L119():
    db = ld db;
    check L121() else D34();
  L120():
    r65 = dyn base3(<sym db>);
    goto L18(r65);
  D24():
    deopt 104 [r41];
  D26():
    deopt 112 [r45];
  D34():
    deopt 141 [db];
  L19():
    goto L20();
  L20():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L126() else L127();
  L105():
    goto L14();
  L108():
    st Links = r45;
    silent3 = ld silent;
    check L109() else D27();
  L121():
    db1 = force? db;
    checkMissing(db1);
    c12 = `==`(db1, NULL);
    goto L18(c12);
  L122():
    Rd_db1 = ldf Rd_db;
    check L123() else D35();
  D27():
    deopt 114 [silent3];
  D35():
    deopt 145 [];
  L21(r71):
    r73 = `!`(r71);
    c14 = `as.logical`(r73);
    if c14 then L130() else L22();
  L109():
    silent4 = force? silent3;
    checkMissing(silent4);
    r46 = `!`(silent4);
    c11 = `as.logical`(r46);
    if c11 then L110() else L15();
  L123():
    p19 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r68 = dyn Rd_db1[dir](p19);
    check L124() else D36();
  L126():
    db2 = ld db;
    check L128() else D37();
  L127():
    r70 = dyn base4(<sym db>);
    goto L21(r70);
  D36():
    deopt 148 [r68];
  D37():
    deopt 154 [db2];
  L15():
    goto L16();
  L16():
    r49 = clos inner2708337952;
    st `.Links2` = r49;
    delayedAssign = ldf delayedAssign;
    check L114() else D30();
  L22():
    r76 = clos inner3708401697;
    st `.whandler` = r76;
    r77 = clos inner3708401697;
    st `.ehandler` = r77;
    r78 = clos inner4125524309;
    st `.convert` = r78;
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L133() else L134();
  L110():
    message1 = ldf message;
    check L111() else D28();
  L124():
    st db = r68;
    goto L20();
  L128():
    db3 = force? db2;
    checkMissing(db3);
    length = ldf length in base;
    r72 = dyn length(db3);
    check L129() else D38();
  L130():
    popenv;
    return NULL;
  D28():
    deopt 118 [];
  D30():
    deopt 127 [];
  D38():
    deopt 157 [r72];
  L24(r80):
    st files = r80;
    files = ld files;
    check L137() else D41();
  L111():
    r47 = dyn message1(" done");
    check L112() else D29();
  L114():
    p12 = prom<V +>{
      _Links2 = ldf `.Links2`;
      r50 = dyn _Links2();
      return r50;
    };
    r52 = dyn delayedAssign("Links2", p12);
    check L115() else D31();
  L129():
    goto L21(r72);
  L133():
    db4 = ld db;
    check L135() else D39();
  L134():
    r79 = dyn base5(<sym db>);
    goto L24(r79);
  D29():
    deopt 120 [r47];
  D31():
    deopt 130 [r52];
  D39():
    deopt 175 [db4];
  D41():
    deopt 180 [files];
  L112():
    goto L16();
  L115():
    goto L17();
  L135():
    db5 = force? db4;
    checkMissing(db5);
    names = ldf names in base;
    r81 = dyn names(db5);
    check L136() else D40();
  L137():
    files1 = force? files;
    checkMissing(files1);
    s1 = toForSeq(files1);
    l3 = length(s1);
    i5 = 0;
    goto L25(i5);
  D40():
    deopt 178 [r81];
  L25(i6):
    i7 = `+`.1(i6, 1);
    c15 = `<`.1(l3, i7);
    if c15 then L138() else L50();
  L136():
    goto L24(r81);
  L50():
    x1 = `[[`(s1, i7, NULL, TRUE);
    st nf = x1;
    character = ldf character;
    check L139() else D42();
  L138():
    sub1 = ldf sub;
    check L225() else D97();
  D42():
    deopt 183 [i7];
  D97():
    deopt 369 [];
  L139():
    r82 = dyn character();
    check L140() else D43();
  L225():
    p69 = prom<V +>{
      basename2 = ldf basename;
      p68 = prom<V +>{
        files2 = ld files;
        files3 = force? files2;
        checkMissing(files3);
        return files3;
      };
      r191 = dyn basename2(p68);
      return r191;
    };
    r193 = dyn sub1("\\.[Rr]d$", "", p69);
    check L226() else D98();
  D43():
    deopt 184 [i7, r82];
  D98():
    deopt 373 [r193];
  L140():
    st `.messages` = r82;
    db6 = ld db;
    check L141() else D44();
  L226():
    st bfs = r193;
    _in_4 = ldf `%in%`;
    check L227() else D99();
  D44():
    deopt 186 [i7, db6];
  D99():
    deopt 376 [];
  L141():
    db7 = force? db6;
    checkMissing(db7);
    c16 = `is.object`(db7);
    if c16 then L142() else L143(i7, db7);
  L227():
    p70 = prom<V +>{
      types11 = ld types;
      types12 = force? types11;
      checkMissing(types12);
      return types12;
    };
    r195 = dyn _in_4("html", p70);
    check L228() else D100();
  D100():
    deopt 379 [r195];
  L26(i13, dx9):
    st Rd = dx9;
    l4 = ld Rd;
    attr__ = ldf `attr<-`;
    check L146() else D46();
  L142():
    dr8 = tryDispatchBuiltin.1("[[", db7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L144() else L143(i7, dr8);
  L143(i11, db9):
    nf = ld nf;
    check L145() else D45();
  L228():
    c51 = `as.logical`(r195);
    if c51 then L229() else L51();
  D45():
    deopt 188 [i11, db9, nf];
  D46():
    deopt 195 [i13, NULL, l4, NULL];
  L51():
    goto L53();
  L53():
    _in_5 = ldf `%in%`;
    check L243() else D110();
  L144():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L26(i7, dx8);
  L145():
    nf1 = force? nf;
    __3 = ldf `[[` in base;
    r83 = dyn __3(db9, nf1);
    goto L26(i11, r83);
  L146():
    r84 = dyn attr__(l4, NULL, "source", NULL);
    check L147() else D47();
  L229():
    st type = "html";
    list_files = ldf `list.files`;
    check L230() else D101();
  D47():
    deopt 198 [i13, NULL, r84];
  D101():
    deopt 384 [];
  D110():
    deopt 413 [];
  L147():
    st Rd = r84;
    sub = ldf sub;
    check L148() else D48();
  L230():
    p73 = prom<V +>{
      file_path6 = ldf `file.path`;
      p71 = prom<V +>{
        outDir17 = ld outDir;
        outDir18 = force? outDir17;
        checkMissing(outDir18);
        return outDir18;
      };
      p72 = prom<V +>{
        dirname17 = ld dirname;
        dirname18 = force? dirname17;
        checkMissing(dirname18);
        c52 = `is.object`(dirname18);
        if c52 then L1() else L2(dirname18);
      L0(dx23):
        return dx23;
      L1():
        dr22 = tryDispatchBuiltin.1("[", dirname18);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(dirname20):
        type20 = ld type;
        type21 = force? type20;
        __10 = ldf `[` in base;
        r197 = dyn __10(dirname20, type21);
        goto L0(r197);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx22);
      };
      r199 = dyn file_path6(p71, p72);
      return r199;
    };
    r201 = dyn list_files(p73);
    check L231() else D102();
  L243():
    p82 = prom<V +>{
      types13 = ld types;
      types14 = force? types13;
      checkMissing(types14);
      return types14;
    };
    r222 = dyn _in_5("latex", p82);
    check L244() else D111();
  D48():
    deopt 201 [i13];
  D102():
    deopt 386 [r201];
  D111():
    deopt 416 [r222];
  L148():
    p21 = prom<V +>{
      basename1 = ldf basename;
      p20 = prom<V +>{
        nf2 = ld nf;
        nf3 = force? nf2;
        checkMissing(nf3);
        return nf3;
      };
      r86 = dyn basename1(p20);
      return r86;
    };
    r88 = dyn sub("\\.[Rr]d$", "", p21);
    check L149() else D49();
  L231():
    st have = r201;
    sub2 = ldf sub;
    check L232() else D103();
  L244():
    c56 = `as.logical`(r222);
    if c56 then L245() else L54();
  D49():
    deopt 205 [i13, r88];
  D103():
    deopt 389 [];
  L54():
    goto L56();
  L56():
    _in_6 = ldf `%in%`;
    check L259() else D121();
  L149():
    st bf = r88;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L150() else L151();
  L232():
    p75 = prom<V +>{
      basename3 = ldf basename;
      p74 = prom<V +>{
        have = ld have;
        have1 = force? have;
        checkMissing(have1);
        return have1;
      };
      r203 = dyn basename3(p74);
      return r203;
    };
    r205 = dyn sub2[, , , fixed](".html", "", p75, TRUE);
    check L233() else D104();
  L245():
    st type = "latex";
    list_files1 = ldf `list.files`;
    check L246() else D112();
  D104():
    deopt 395 [r205];
  D112():
    deopt 421 [];
  D121():
    deopt 450 [];
  L27(i16, r90):
    st f = r90;
    st shown = FALSE;
    _in_1 = ldf `%in%`;
    check L154() else D52();
  L150():
    Rd = ld Rd;
    check L152() else D50();
  L151():
    r89 = dyn base6(<sym Rd>, "Rdfile");
    goto L27(i13, r89);
  L233():
    st have2 = r205;
    have2 = ld have;
    check L234() else D105();
  L246():
    p85 = prom<V +>{
      file_path8 = ldf `file.path`;
      p83 = prom<V +>{
        outDir21 = ld outDir;
        outDir22 = force? outDir21;
        checkMissing(outDir22);
        return outDir22;
      };
      p84 = prom<V +>{
        dirname25 = ld dirname;
        dirname26 = force? dirname25;
        checkMissing(dirname26);
        c57 = `is.object`(dirname26);
        if c57 then L1() else L2(dirname26);
      L0(dx29):
        return dx29;
      L1():
        dr28 = tryDispatchBuiltin.1("[", dirname26);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(dirname28):
        type24 = ld type;
        type25 = force? type24;
        __13 = ldf `[` in base;
        r224 = dyn __13(dirname28, type25);
        goto L0(r224);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx28);
      };
      r226 = dyn file_path8(p83, p84);
      return r226;
    };
    r228 = dyn list_files1(p85);
    check L247() else D113();
  L259():
    p94 = prom<V +>{
      types15 = ld types;
      types16 = force? types15;
      checkMissing(types16);
      return types16;
    };
    r246 = dyn _in_6("example", p94);
    check L260() else D122();
  D50():
    deopt 209 [i13, Rd];
  D52():
    deopt 219 [i16];
  D105():
    deopt 397 [have2];
  D113():
    deopt 423 [r228];
  D122():
    deopt 453 [r246];
  L152():
    Rd1 = force? Rd;
    checkMissing(Rd1);
    attr = ldf attr in base;
    r91 = dyn attr(Rd1, "Rdfile");
    check L153() else D51();
  L154():
    p22 = prom<V +>{
      types5 = ld types;
      types6 = force? types5;
      checkMissing(types6);
      return types6;
    };
    r93 = dyn _in_1("html", p22);
    check L155() else D53();
  L234():
    have3 = force? have2;
    checkMissing(have3);
    c53 = `is.object`(have3);
    if c53 then L235() else L236(have3);
  L247():
    st have = r228;
    sub3 = ldf sub;
    check L248() else D114();
  L260():
    c60 = `as.logical`(r246);
    if c60 then L261() else L57();
  D51():
    deopt 213 [i13, r91];
  D53():
    deopt 222 [i16, r93];
  D114():
    deopt 426 [];
  L52(dx25):
    st drop = dx25;
    unlink = ldf unlink;
    check L240() else D108();
  L57():
    invisible.0();
    popenv;
    return NULL;
  L153():
    goto L27(i13, r91);
  L155():
    c17 = `as.logical`(r93);
    if c17 then L156() else L28();
  L235():
    dr24 = tryDispatchBuiltin.1("[", have3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L237() else L236(dr24);
  L236(have5):
    _notin_ = ldf `%notin%`;
    check L238() else D106();
  L248():
    p87 = prom<V +>{
      basename4 = ldf basename;
      p86 = prom<V +>{
        have8 = ld have;
        have9 = force? have8;
        checkMissing(have9);
        return have9;
      };
      r230 = dyn basename4(p86);
      return r230;
    };
    r232 = dyn sub3[, , , fixed](".tex", "", p87, TRUE);
    check L249() else D115();
  L261():
    st type = "example";
    list_files2 = ldf `list.files`;
    check L262() else D123();
  D106():
    deopt 400 [have5];
  D108():
    deopt 407 [];
  D115():
    deopt 432 [r232];
  D123():
    deopt 458 [];
  L28():
    goto L32(i16);
  L32(i25):
    _in_2 = ldf `%in%`;
    check L172() else D64();
  L156():
    st type = "html";
    file_path3 = ldf `file.path`;
    check L157() else D54();
  L237():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L52(dx24);
  L238():
    p76 = prom<V +>{
      have6 = ld have2;
      have7 = force? have6;
      checkMissing(have7);
      return have7;
    };
    p77 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r208):
      return r208;
    L1():
      bfs = ld bfs;
      bfs1 = force? bfs;
      checkMissing(bfs1);
      c54 = ldf c in base;
      r209 = dyn c54(bfs1, "00Index", "R.css");
      goto L0(r209);
    L2():
      r207 = dyn base9(<sym bfs>, "00Index", "R.css");
      goto L0(r207);
    };
    r211 = dyn _notin_(p76, p77);
    check L239() else D107();
  L240():
    p81 = prom<V +>{
      file_path7 = ldf `file.path`;
      p78 = prom<V +>{
        outDir19 = ld outDir;
        outDir20 = force? outDir19;
        checkMissing(outDir20);
        return outDir20;
      };
      p79 = prom<V +>{
        dirname21 = ld dirname;
        dirname22 = force? dirname21;
        checkMissing(dirname22);
        c55 = `is.object`(dirname22);
        if c55 then L1() else L2(dirname22);
      L0(dx27):
        return dx27;
      L1():
        dr26 = tryDispatchBuiltin.1("[", dirname22);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(dirname24):
        type22 = ld type;
        type23 = force? type22;
        __12 = ldf `[` in base;
        r214 = dyn __12(dirname24, type23);
        goto L0(r214);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx26);
      };
      p80 = prom<V +>{
        drop = ld drop;
        drop1 = force? drop;
        checkMissing(drop1);
        return drop1;
      };
      r217 = dyn file_path7(p78, p79, p80);
      return r217;
    };
    r219 = dyn unlink(p81);
    check L241() else D109();
  L249():
    st have2 = r232;
    have10 = ld have;
    check L250() else D116();
  L262():
    p97 = prom<V +>{
      file_path10 = ldf `file.path`;
      p95 = prom<V +>{
        outDir25 = ld outDir;
        outDir26 = force? outDir25;
        checkMissing(outDir26);
        return outDir26;
      };
      p96 = prom<V +>{
        dirname33 = ld dirname;
        dirname34 = force? dirname33;
        checkMissing(dirname34);
        c61 = `is.object`(dirname34);
        if c61 then L1() else L2(dirname34);
      L0(dx35):
        return dx35;
      L1():
        dr34 = tryDispatchBuiltin.1("[", dirname34);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L3() else L2(dr34);
      L2(dirname36):
        type28 = ld type;
        type29 = force? type28;
        __16 = ldf `[` in base;
        r248 = dyn __16(dirname36, type29);
        goto L0(r248);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr34);
        goto L0(dx34);
      };
      r250 = dyn file_path10(p95, p96);
      return r250;
    };
    r252 = dyn list_files2(p97);
    check L263() else D124();
  D54():
    deopt 227 [i16];
  D64():
    deopt 259 [i25];
  D107():
    deopt 403 [have5, r211];
  D109():
    deopt 409 [r219];
  D116():
    deopt 434 [have10];
  D124():
    deopt 460 [r252];
  L157():
    p23 = prom<V +>{
      outDir11 = ld outDir;
      outDir12 = force? outDir11;
      checkMissing(outDir12);
      return outDir12;
    };
    p24 = prom<V +>{
      dirname5 = ld dirname;
      dirname6 = force? dirname5;
      checkMissing(dirname6);
      c18 = `is.object`(dirname6);
      if c18 then L1() else L2(dirname6);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", dirname6);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(dirname8):
      type2 = ld type;
      type3 = force? type2;
      __4 = ldf `[` in base;
      r95 = dyn __4(dirname8, type3);
      goto L0(r95);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p27 = prom<V +>{
      paste0 = ldf paste0;
      p25 = prom<V +>{
        bf = ld bf;
        bf1 = force? bf;
        checkMissing(bf1);
        return bf1;
      };
      p26 = prom<V +>{
        ext = ld ext;
        ext1 = force? ext;
        checkMissing(ext1);
        c19 = `is.object`(ext1);
        if c19 then L1() else L2(ext1);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("[", ext1);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(ext3):
        type4 = ld type;
        type5 = force? type4;
        __5 = ldf `[` in base;
        r98 = dyn __5(ext3, type5);
        goto L0(r98);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r100 = dyn paste0(p25, p26);
      return r100;
    };
    r102 = dyn file_path3(p23, p24, p27);
    check L158() else D55();
  L172():
    p38 = prom<V +>{
      types7 = ld types;
      types8 = force? types7;
      checkMissing(types8);
      return types8;
    };
    r125 = dyn _in_2("latex", p38);
    check L173() else D65();
  L239():
    __11 = ldf `[` in base;
    r212 = dyn __11(have5, r211);
    goto L52(r212);
  L241():
    goto L53();
  L250():
    have11 = force? have10;
    checkMissing(have11);
    c58 = `is.object`(have11);
    if c58 then L251() else L252(have11);
  L263():
    st have = r252;
    sub4 = ldf sub;
    check L264() else D125();
  D55():
    deopt 231 [i16, r102];
  D65():
    deopt 262 [i25, r125];
  D125():
    deopt 463 [];
  L55(dx31):
    st drop = dx31;
    unlink1 = ldf unlink;
    check L256() else D119();
  L158():
    st ff = r102;
    file_test = ldf file_test;
    check L159() else D56();
  L173():
    c28 = `as.logical`(r125);
    if c28 then L174() else L33();
  L251():
    dr30 = tryDispatchBuiltin.1("[", have11);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L253() else L252(dr30);
  L252(have13):
    _notin_1 = ldf `%notin%`;
    check L254() else D117();
  L264():
    p99 = prom<V +>{
      basename5 = ldf basename;
      p98 = prom<V +>{
        have16 = ld have;
        have17 = force? have16;
        checkMissing(have17);
        return have17;
      };
      r254 = dyn basename5(p98);
      return r254;
    };
    r256 = dyn sub4[, , , fixed](".R", "", p99, TRUE);
    check L265() else D126();
  D56():
    deopt 234 [i16];
  D117():
    deopt 437 [have13];
  D119():
    deopt 444 [];
  D126():
    deopt 469 [r256];
  L33():
    goto L37(i25);
  L37(i34):
    _in_3 = ldf `%in%`;
    check L190() else D76();
  L159():
    p28 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r104 = dyn file_test("-f", p28);
    check L160() else D57();
  L174():
    st type = "latex";
    file_path4 = ldf `file.path`;
    check L175() else D66();
  L253():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L55(dx30);
  L254():
    p88 = prom<V +>{
      have14 = ld have2;
      have15 = force? have14;
      checkMissing(have15);
      return have15;
    };
    p89 = prom<V +>{
      bfs2 = ld bfs;
      bfs3 = force? bfs2;
      checkMissing(bfs3);
      return bfs3;
    };
    r235 = dyn _notin_1(p88, p89);
    check L255() else D118();
  L256():
    p93 = prom<V +>{
      file_path9 = ldf `file.path`;
      p90 = prom<V +>{
        outDir23 = ld outDir;
        outDir24 = force? outDir23;
        checkMissing(outDir24);
        return outDir24;
      };
      p91 = prom<V +>{
        dirname29 = ld dirname;
        dirname30 = force? dirname29;
        checkMissing(dirname30);
        c59 = `is.object`(dirname30);
        if c59 then L1() else L2(dirname30);
      L0(dx33):
        return dx33;
      L1():
        dr32 = tryDispatchBuiltin.1("[", dirname30);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(dirname32):
        type26 = ld type;
        type27 = force? type26;
        __15 = ldf `[` in base;
        r238 = dyn __15(dirname32, type27);
        goto L0(r238);
      L3():
        dx32 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx32);
      };
      p92 = prom<V +>{
        drop2 = ld drop;
        drop3 = force? drop2;
        checkMissing(drop3);
        return drop3;
      };
      r241 = dyn file_path9(p90, p91, p92);
      return r241;
    };
    r243 = dyn unlink1(p93);
    check L257() else D120();
  L265():
    st have2 = r256;
    have18 = ld have;
    check L266() else D127();
  D57():
    deopt 237 [i16, r104];
  D66():
    deopt 267 [i25];
  D76():
    deopt 299 [i34];
  D118():
    deopt 440 [have13, r235];
  D120():
    deopt 446 [r243];
  D127():
    deopt 471 [have18];
  L160():
    r105 = `!`(r104);
    c20 = `as.logical`(r105);
    if c20 then L29(i16, c20) else L161();
  L175():
    p39 = prom<V +>{
      outDir13 = ld outDir;
      outDir14 = force? outDir13;
      checkMissing(outDir14);
      return outDir14;
    };
    p40 = prom<V +>{
      dirname9 = ld dirname;
      dirname10 = force? dirname9;
      checkMissing(dirname10);
      c29 = `is.object`(dirname10);
      if c29 then L1() else L2(dirname10);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", dirname10);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(dirname12):
      type8 = ld type;
      type9 = force? type8;
      __6 = ldf `[` in base;
      r127 = dyn __6(dirname12, type9);
      goto L0(r127);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p43 = prom<V +>{
      paste1 = ldf paste0;
      p41 = prom<V +>{
        bf2 = ld bf;
        bf3 = force? bf2;
        checkMissing(bf3);
        return bf3;
      };
      p42 = prom<V +>{
        ext4 = ld ext;
        ext5 = force? ext4;
        checkMissing(ext5);
        c30 = `is.object`(ext5);
        if c30 then L1() else L2(ext5);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[", ext5);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(ext7):
        type10 = ld type;
        type11 = force? type10;
        __7 = ldf `[` in base;
        r130 = dyn __7(ext7, type11);
        goto L0(r130);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r132 = dyn paste1(p41, p42);
      return r132;
    };
    r134 = dyn file_path4(p39, p40, p43);
    check L176() else D67();
  L190():
    p52 = prom<V +>{
      types9 = ld types;
      types10 = force? types9;
      checkMissing(types10);
      return types10;
    };
    r152 = dyn _in_3("example", p52);
    check L191() else D77();
  L255():
    __14 = ldf `[` in base;
    r236 = dyn __14(have13, r235);
    goto L55(r236);
  L257():
    goto L56();
  L266():
    have19 = force? have18;
    checkMissing(have19);
    c62 = `is.object`(have19);
    if c62 then L267() else L268(have19);
  D67():
    deopt 271 [i25, r134];
  D77():
    deopt 302 [i34, r152];
  L29(i19, c21):
    c26 = `as.logical`(c21);
    if c26 then L165() else L30();
  L58(dx37):
    st drop = dx37;
    unlink2 = ldf unlink;
    check L272() else D130();
  L161():
    file_test1 = ldf file_test;
    check L162() else D58();
  L176():
    st ff = r134;
    file_test2 = ldf file_test;
    check L177() else D68();
  L191():
    c38 = `as.logical`(r152);
    if c38 then L192() else L38();
  L267():
    dr36 = tryDispatchBuiltin.1("[", have19);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L269() else L268(dr36);
  L268(have21):
    _notin_2 = ldf `%notin%`;
    check L270() else D128();
  D58():
    deopt 240 [i16, c20];
  D68():
    deopt 274 [i25];
  D128():
    deopt 474 [have21];
  D130():
    deopt 481 [];
  L30():
    goto L31(i19, NULL);
  L31(i24, r122):
    goto L32(i24);
  L38():
    goto L44(i34);
  L44(i46):
    shown = ld shown;
    check L212() else D90();
  L162():
    p29 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p30 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r108 = dyn file_test1("-nt", p29, p30);
    check L163() else D59();
  L165():
    showtype = ldf showtype;
    check L166() else D60();
  L177():
    p44 = prom<V +>{
      ff6 = ld ff;
      ff7 = force? ff6;
      checkMissing(ff7);
      return ff7;
    };
    r136 = dyn file_test2("-f", p44);
    check L178() else D69();
  L192():
    st type = "example";
    file_path5 = ldf `file.path`;
    check L193() else D78();
  L269():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L58(dx36);
  L270():
    p100 = prom<V +>{
      have22 = ld have2;
      have23 = force? have22;
      checkMissing(have23);
      return have23;
    };
    p101 = prom<V +>{
      bfs4 = ld bfs;
      bfs5 = force? bfs4;
      checkMissing(bfs5);
      return bfs5;
    };
    r259 = dyn _notin_2(p100, p101);
    check L271() else D129();
  L272():
    p105 = prom<V +>{
      file_path11 = ldf `file.path`;
      p102 = prom<V +>{
        outDir27 = ld outDir;
        outDir28 = force? outDir27;
        checkMissing(outDir28);
        return outDir28;
      };
      p103 = prom<V +>{
        dirname37 = ld dirname;
        dirname38 = force? dirname37;
        checkMissing(dirname38);
        c63 = `is.object`(dirname38);
        if c63 then L1() else L2(dirname38);
      L0(dx39):
        return dx39;
      L1():
        dr38 = tryDispatchBuiltin.1("[", dirname38);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L3() else L2(dr38);
      L2(dirname40):
        type30 = ld type;
        type31 = force? type30;
        __18 = ldf `[` in base;
        r262 = dyn __18(dirname40, type31);
        goto L0(r262);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr38);
        goto L0(dx38);
      };
      p104 = prom<V +>{
        drop4 = ld drop;
        drop5 = force? drop4;
        checkMissing(drop5);
        return drop5;
      };
      r265 = dyn file_path11(p102, p103, p104);
      return r265;
    };
    r267 = dyn unlink2(p105);
    check L273() else D131();
  D59():
    deopt 244 [i16, c20, r108];
  D60():
    deopt 247 [i19];
  D69():
    deopt 277 [i25, r136];
  D78():
    deopt 307 [i34];
  D90():
    deopt 345 [i46, shown];
  D129():
    deopt 477 [have21, r259];
  D131():
    deopt 483 [r267];
  L163():
    c23 = `as.logical`(r108);
    c24 = `||`(c20, c23);
    goto L29(i16, c24);
  L166():
    p31 = prom<V +>{
      type6 = ld type;
      type7 = force? type6;
      checkMissing(type7);
      return type7;
    };
    r110 = dyn showtype(p31);
    check L167() else D61();
  L178():
    r137 = `!`(r136);
    c31 = `as.logical`(r137);
    if c31 then L34(i25, c31) else L179();
  L193():
    p53 = prom<V +>{
      outDir15 = ld outDir;
      outDir16 = force? outDir15;
      checkMissing(outDir16);
      return outDir16;
    };
    p54 = prom<V +>{
      dirname13 = ld dirname;
      dirname14 = force? dirname13;
      checkMissing(dirname14);
      c39 = `is.object`(dirname14);
      if c39 then L1() else L2(dirname14);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", dirname14);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(dirname16):
      type14 = ld type;
      type15 = force? type14;
      __8 = ldf `[` in base;
      r154 = dyn __8(dirname16, type15);
      goto L0(r154);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p57 = prom<V +>{
      paste2 = ldf paste0;
      p55 = prom<V +>{
        bf4 = ld bf;
        bf5 = force? bf4;
        checkMissing(bf5);
        return bf5;
      };
      p56 = prom<V +>{
        ext8 = ld ext;
        ext9 = force? ext8;
        checkMissing(ext9);
        c40 = `is.object`(ext9);
        if c40 then L1() else L2(ext9);
      L0(dx21):
        return dx21;
      L1():
        dr20 = tryDispatchBuiltin.1("[", ext9);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(ext11):
        type16 = ld type;
        type17 = force? type16;
        __9 = ldf `[` in base;
        r157 = dyn __9(ext11, type17);
        goto L0(r157);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx20);
      };
      r159 = dyn paste2(p55, p56);
      return r159;
    };
    r161 = dyn file_path5(p53, p54, p57);
    check L194() else D79();
  L212():
    shown1 = force? shown;
    checkMissing(shown1);
    c49 = `as.logical`(shown1);
    if c49 then L213() else L45();
  L271():
    __17 = ldf `[` in base;
    r260 = dyn __17(have21, r259);
    goto L58(r260);
  L273():
    popenv;
    return r267;
  D61():
    deopt 249 [i19, r110];
  D79():
    deopt 311 [i34, r161];
  L34(i28, c32):
    c37 = `as.logical`(c32);
    if c37 then L183() else L35();
  L45():
    goto L49(i46);
  L49(i55):
    goto L25(i55);
  L167():
    _convert = ldf `.convert`;
    check L168() else D62();
  L179():
    file_test3 = ldf file_test;
    check L180() else D70();
  L194():
    st ff = r161;
    file_test4 = ldf file_test;
    check L195() else D80();
  L213():
    cat1 = ldf cat;
    check L214() else D91();
  D62():
    deopt 251 [i19];
  D70():
    deopt 280 [i25, c31];
  D80():
    deopt 314 [i34];
  D91():
    deopt 348 [i46];
  L35():
    goto L36(i28, NULL);
  L36(i33, r149):
    goto L37(i33);
  L168():
    p37 = prom<V +>{
      Rd2HTML = ldf Rd2HTML;
      p32 = prom<V +>{
        Rd2 = ld Rd;
        Rd3 = force? Rd2;
        checkMissing(Rd3);
        return Rd3;
      };
      p33 = prom<V +>{
        ff4 = ld ff;
        ff5 = force? ff4;
        checkMissing(ff5);
        return ff5;
      };
      p34 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r114):
        return r114;
      L1():
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        ver = ld ver;
        ver1 = force? ver;
        checkMissing(ver1);
        c27 = ldf c in base;
        r115 = dyn c27(pkg3, ver1);
        goto L0(r115);
      L2():
        r113 = dyn base7(<sym pkg>, <sym ver>);
        goto L0(r113);
      };
      p35 = prom<V +>{
        Links = ld Links;
        Links1 = force? Links;
        checkMissing(Links1);
        return Links1;
      };
      p36 = prom<V +>{
        Links2 = ld Links2;
        Links3 = force? Links2;
        checkMissing(Links3);
        return Links3;
      };
      r119 = dyn Rd2HTML[, , package, defines, Links, Links2](p32, p33, p34, NULL, p35, p36);
      return r119;
    };
    r121 = dyn _convert(p37);
    check L169() else D63();
  L180():
    p45 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p46 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      return ff9;
    };
    r140 = dyn file_test3("-nt", p45, p46);
    check L181() else D71();
  L183():
    showtype1 = ldf showtype;
    check L184() else D72();
  L195():
    p58 = prom<V +>{
      ff12 = ld ff;
      ff13 = force? ff12;
      checkMissing(ff13);
      return ff13;
    };
    r163 = dyn file_test4("-f", p58);
    check L196() else D81();
  L214():
    r180 = dyn cat1("\n");
    check L215() else D92();
  D63():
    deopt 253 [i19, r121];
  D71():
    deopt 284 [i25, c31, r140];
  D72():
    deopt 287 [i28];
  D81():
    deopt 317 [i34, r163];
  D92():
    deopt 350 [i46, r180];
  L169():
    goto L31(i19, r121);
  L181():
    c34 = `as.logical`(r140);
    c35 = `||`(c31, c34);
    goto L34(i25, c35);
  L184():
    p47 = prom<V +>{
      type12 = ld type;
      type13 = force? type12;
      checkMissing(type13);
      return type13;
    };
    r142 = dyn showtype1(p47);
    check L185() else D73();
  L196():
    r164 = `!`(r163);
    c41 = `as.logical`(r164);
    if c41 then L39(i34, c41) else L197();
  L215():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L216() else L217();
  D73():
    deopt 289 [i28, r142];
  L39(i37, c42):
    c47 = `as.logical`(c42);
    if c47 then L201() else L40();
  L46(i51, r182):
    c50 = `as.logical`(r182);
    if c50 then L220() else L47();
  L185():
    _convert1 = ldf `.convert`;
    check L186() else D74();
  L197():
    file_test5 = ldf file_test;
    check L198() else D82();
  L216():
    _messages = ld `.messages`;
    check L218() else D93();
  L217():
    r181 = dyn base8(<sym .messages>);
    goto L46(i46, r181);
  D74():
    deopt 291 [i28];
  D82():
    deopt 320 [i34, c41];
  D93():
    deopt 353 [i46, _messages];
  L40():
    goto L43(i37, NULL);
  L43(i45, r178):
    goto L44(i45);
  L47():
    goto L48(i51, NULL);
  L48(i54, r188):
    goto L49(i54);
  L186():
    p51 = prom<V +>{
      Rd2latex = ldf Rd2latex;
      p48 = prom<V +>{
        Rd4 = ld Rd;
        Rd5 = force? Rd4;
        checkMissing(Rd5);
        return Rd5;
      };
      p49 = prom<V +>{
        ff10 = ld ff;
        ff11 = force? ff10;
        checkMissing(ff11);
        return ff11;
      };
      p50 = prom<V +>{
        outenc1 = ld outenc;
        outenc2 = force? outenc1;
        checkMissing(outenc2);
        return outenc2;
      };
      r146 = dyn Rd2latex[, , defines, outputEncoding](p48, p49, NULL, p50);
      return r146;
    };
    r148 = dyn _convert1(p51);
    check L187() else D75();
  L198():
    p59 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p60 = prom<V +>{
      ff14 = ld ff;
      ff15 = force? ff14;
      checkMissing(ff15);
      return ff15;
    };
    r167 = dyn file_test5("-nt", p59, p60);
    check L199() else D83();
  L201():
    _convert2 = ldf `.convert`;
    check L202() else D84();
  L218():
    _messages1 = force? _messages;
    checkMissing(_messages1);
    length1 = ldf length in base;
    r183 = dyn length1(_messages1);
    check L219() else D94();
  L220():
    writeLines = ldf writeLines;
    check L221() else D95();
  D75():
    deopt 293 [i28, r148];
  D83():
    deopt 324 [i34, c41, r167];
  D84():
    deopt 327 [i37];
  D94():
    deopt 356 [i46, r183];
  D95():
    deopt 358 [i51];
  L187():
    goto L36(i28, r148);
  L199():
    c44 = `as.logical`(r167);
    c45 = `||`(c41, c44);
    goto L39(i34, c45);
  L202():
    p63 = prom<V +>{
      Rd2ex = ldf Rd2ex;
      p61 = prom<V +>{
        Rd6 = ld Rd;
        Rd7 = force? Rd6;
        checkMissing(Rd7);
        return Rd7;
      };
      p62 = prom<V +>{
        ff16 = ld ff;
        ff17 = force? ff16;
        checkMissing(ff17);
        return ff17;
      };
      r170 = dyn Rd2ex[, , defines](p61, p62, NULL);
      return r170;
    };
    r172 = dyn _convert2(p63);
    check L203() else D85();
  L219():
    goto L46(i46, r183);
  L221():
    p67 = prom<V +>{
      unique = ldf unique;
      p66 = prom<V +>{
        _messages2 = ld `.messages`;
        _messages3 = force? _messages2;
        checkMissing(_messages3);
        return _messages3;
      };
      r185 = dyn unique(p66);
      return r185;
    };
    r187 = dyn writeLines(p67);
    check L222() else D96();
  D85():
    deopt 329 [i37, r172];
  D96():
    deopt 360 [i51, r187];
  L203():
    file_test6 = ldf file_test;
    check L204() else D86();
  L222():
    goto L48(i51, r187);
  D86():
    deopt 331 [i37];
  L204():
    p64 = prom<V +>{
      ff18 = ld ff;
      ff19 = force? ff18;
      checkMissing(ff19);
      return ff19;
    };
    r174 = dyn file_test6("-f", p64);
    check L205() else D87();
  D87():
    deopt 334 [i37, r174];
  L205():
    c48 = `as.logical`(r174);
    if c48 then L206() else L41();
  L41():
    goto L42(i37, NULL);
  L42(i44, r177):
    goto L43(i44, r177);
  L206():
    showtype2 = ldf showtype;
    check L207() else D88();
  D88():
    deopt 336 [i37];
  L207():
    p65 = prom<V +>{
      type18 = ld type;
      type19 = force? type18;
      checkMissing(type19);
      return type19;
    };
    r176 = dyn showtype2(p65);
    check L208() else D89();
  D89():
    deopt 338 [i37, r176];
  L208():
    goto L42(i37, r176);
  }
}
fun inner657253850(type) {
  (reg type:*) -+> V { var type:*, reg shown:*, reg shown1:V, reg r:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg bf:*, reg bf1:V, reg nchar:cls, reg r3:V, reg nc:*, reg nc1:V, reg r4:V, reg c1:L, reg cat:cls, reg bf2:*, reg bf3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg nc2:*, reg nc3:V, reg r8:V, reg rep_int:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg cat1:cls, reg bf4:*, reg bf5:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg rep_int1:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg cat2:cls, reg type1:*, reg type2:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:I, reg r29:V, reg type3:*, reg type4:V, reg nchar1:cls, reg r30:V, reg r31:V, reg max:cls, reg r32:V, reg rep_int2:cls, reg r33:V, reg p5:p(V +), reg r35:V |
    mkenv;
    st type = type;
    shown = ld shown;
    check L5() else D0();
  D0():
    deopt 0 [shown];
  L5():
    shown1 = force? shown;
    checkMissing(shown1);
    r = `!`(shown1);
    c = `as.logical`(r);
    if c then L6() else L0();
  L0():
    goto L4();
  L4():
    cat2 = ldf cat;
    check L19() else D8();
  L6():
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  D8():
    deopt 40 [];
  L1(r2):
    st nc = r2;
    nc = ld nc;
    check L11() else D3();
  L7():
    bf = ld bf;
    check L9() else D1();
  L8():
    r1 = dyn base(<sym bf>);
    goto L1(r1);
  L19():
    p4 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p5 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r22):
      return r22;
    L3():
      sym4 = ldf max;
      base4 = ldf max in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L4():
      r21 = dyn base3(" ", <lang max(0, `-`(6, nchar(type)))>);
      goto L0(r21);
    L1(r24):
      rep_int2 = ldf `rep.int` in base;
      r33 = dyn rep_int2(" ", r24);
      goto L0(r33);
    L5():
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L6():
      r23 = dyn base4(0, <lang `-`(6, nchar(type))>);
      goto L1(r23);
    L2(r28, r29):
      r31 = `-`(r28, r29);
      max = ldf max in base;
      r32 = dyn max(0, r31);
      goto L1(r32);
    L7():
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      nchar1 = ldf nchar in base;
      r30 = dyn nchar1(type4, "chars", FALSE, NA_LGL);
      goto L2(6, r30);
    L8():
      r27 = dyn base5(<sym type>);
      goto L2(6, r27);
    };
    r35 = dyn cat2[, , sep](p4, p5, "");
    check L20() else D9();
  D1():
    deopt 5 [bf];
  D3():
    deopt 13 [nc];
  D9():
    deopt 45 [r35];
  L9():
    bf1 = force? bf;
    checkMissing(bf1);
    nchar = ldf nchar in base;
    r3 = dyn nchar(bf1, "chars", FALSE, NA_LGL);
    check L10() else D2();
  L11():
    nc1 = force? nc;
    checkMissing(nc1);
    r4 = `<`(nc1, 38);
    c1 = `as.logical`(r4);
    if c1 then L12() else L2();
  L20():
    popenv;
    return r35;
  D2():
    deopt 11 [r3];
  L2():
    cat1 = ldf cat;
    check L16() else D6();
  L3():
    sst shown = TRUE;
    goto L4();
  L10():
    goto L1(r3);
  L12():
    cat = ldf cat;
    check L13() else D4();
  D4():
    deopt 18 [];
  D6():
    deopt 26 [];
  L13():
    p = prom<V +>{
      bf2 = ld bf;
      bf3 = force? bf2;
      checkMissing(bf3);
      return bf3;
    };
    p1 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      r8 = `-`(40, nc3);
      rep_int = ldf `rep.int` in base;
      r9 = dyn rep_int(" ", r8);
      goto L0(r9);
    L2():
      r6 = dyn base1(" ", <lang `-`(40, nc)>);
      goto L0(r6);
    };
    r11 = dyn cat[, , , sep]("    ", p, p1, "");
    check L14() else D5();
  L16():
    p2 = prom<V +>{
      bf4 = ld bf;
      bf5 = force? bf4;
      checkMissing(bf5);
      return bf5;
    };
    p3 = prom<V +>{
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      rep_int1 = ldf `rep.int` in base;
      r16 = dyn rep_int1(" ", 44);
      goto L0(r16);
    L2():
      r14 = dyn base2(" ", 44);
      goto L0(r14);
    };
    r18 = dyn cat1[, , , , sep]("    ", p2, "\n", p3, "");
    check L17() else D7();
  D5():
    deopt 24 [r11];
  D7():
    deopt 33 [r18];
  L14():
    goto L3();
  L17():
    goto L3();
  }
}
fun inner2708337952() {
  () -+> V { reg message:cls, reg r:V, reg findHTMLlinks:cls, reg r1:V, reg message1:cls, reg r2:V, reg Links2:*, reg Links3:V |
    mkenv;
    message = ldf message;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn message[, appendLF, domain]("\n    finding level-2 HTML links ...", FALSE, NA_LGL);
    check L1() else D1();
  D1():
    deopt 7 [r];
  L1():
    findHTMLlinks = ldf findHTMLlinks;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    r1 = dyn findHTMLlinks[level](2.0);
    check L3() else D3();
  D3():
    deopt 12 [r1];
  L3():
    st Links2 = r1;
    message1 = ldf message;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    r2 = dyn message1[, domain](" done", NA_LGL);
    check L5() else D5();
  D5():
    deopt 19 [r2];
  L5():
    Links2 = ld Links2;
    check L6() else D6();
  D6():
    deopt 20 [Links2];
  L6():
    Links3 = force? Links2;
    checkMissing(Links3);
    popenv;
    return Links3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg withCallingHandlers:cls, reg tryCatch:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg _ehandler:*, reg _ehandler1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg _whandler:*, reg _whandler1:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st expr = expr;
    withCallingHandlers = ldf withCallingHandlers;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      tryCatch = ldf tryCatch;
      p = prom<V +>{
        expr1 = ld expr;
        expr2 = force? expr1;
        checkMissing(expr2);
        return expr2;
      };
      p1 = prom<V +>{
        _ehandler = ld `.ehandler`;
        _ehandler1 = force? _ehandler;
        checkMissing(_ehandler1);
        return _ehandler1;
      };
      r2 = dyn tryCatch[, error](p, p1);
      return r2;
    };
    p3 = prom<V +>{
      _whandler = ld `.whandler`;
      _whandler1 = force? _whandler;
      checkMissing(_whandler1);
      return _whandler1;
    };
    r5 = dyn withCallingHandlers[, warning](p2, p3);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}