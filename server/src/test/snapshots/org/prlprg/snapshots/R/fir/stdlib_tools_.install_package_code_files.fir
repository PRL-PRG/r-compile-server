fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner405800796;
    st `.install_package_code_files` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner405800796(dir, outDir) {
  (reg dir:*, reg outDir:*) -+> V { var dir:*, var outDir:*, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r9:V, reg Sys_getlocale:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg on_exit:cls, reg r13:V, reg Sys_setlocale:cls, reg lccollate:*, reg lccollate1:V, reg p4:p(V +), reg r15:V, reg lccollate2:*, reg lccollate3:V, reg r16:V, reg c1:L, reg warning:cls, reg r17:V, reg _read_description:cls, reg file_path:cls, reg dir7:*, reg dir8:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p7:p(V +), reg r24:V, reg dir_exists1:cls, reg codeDir:*, reg codeDir1:V, reg p8:p(V +), reg r26:V, reg r27:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg invisible:cls, reg r30:V, reg list_files_with_type:cls, reg codeDir2:*, reg codeDir3:V, reg p9:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg paste0:cls, reg _OStype:cls, reg r37:V, reg p10:p(V +), reg r39:V, reg c3:cls, reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg _in_:cls, reg collationField:*, reg collationField1:V, reg p11:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg db:*, reg db1:V, reg names:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg any:cls, reg r49:V, reg c4:L, reg collationField2:*, reg collationField3:V, reg c5:L, reg collationField5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r50:V, reg c6:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r51:V, reg _read_collate_field:cls, reg db2:*, reg db3:V, reg c7:L, reg db5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg collationField6:*, reg collationField7:V, reg __2:cls, reg r52:V, reg p13:p(V +), reg r54:V, reg unique:cls, reg codeFilesInCspec:*, reg codeFilesInCspec1:V, reg c8:L, reg codeFilesInCspec3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg duplicated:cls, reg codeFilesInCspec4:*, reg codeFilesInCspec5:V, reg p14:p(V +), reg r56:V, reg __3:cls, reg r57:V, reg p15:p(V +), reg r59:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg badFiles:*, reg badFiles1:V, reg length:cls, reg r62:V, reg c9:L, reg gettextf1:cls, reg collationField8:*, reg collationField9:V, reg p16:p(V +), reg r64:V, reg paste1:cls, reg out:*, reg out1:V, reg p17:p(V +), reg paste2:cls, reg badFiles2:*, reg badFiles3:V, reg p18:p(V +), reg r67:V, reg p19:p(V +), reg r69:V, reg stop1:cls, reg out2:*, reg out3:V, reg p20:p(V +), reg r71:V, reg setdiff:cls, reg codeFilesInCspec6:*, reg codeFilesInCspec7:V, reg p21:p(V +), reg codeFiles:*, reg codeFiles1:V, reg p22:p(V +), reg r75:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r76:V, reg r77:V, reg badFiles4:*, reg badFiles5:V, reg length1:cls, reg r78:V, reg c10:L, reg gettextf2:cls, reg collationField10:*, reg collationField11:V, reg p23:p(V +), reg codeDir4:*, reg codeDir5:V, reg p24:p(V +), reg r81:V, reg paste3:cls, reg out4:*, reg out5:V, reg p25:p(V +), reg paste4:cls, reg badFiles6:*, reg badFiles7:V, reg p26:p(V +), reg r84:V, reg p27:p(V +), reg r86:V, reg stop2:cls, reg out6:*, reg out7:V, reg p28:p(V +), reg r88:V, reg setdiff1:cls, reg codeFiles2:*, reg codeFiles3:V, reg p29:p(V +), reg codeFilesInCspec8:*, reg codeFilesInCspec9:V, reg p30:p(V +), reg r92:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r93:V, reg r94:V, reg badFiles8:*, reg badFiles9:V, reg length2:cls, reg r95:V, reg c11:L, reg gettextf3:cls, reg codeDir6:*, reg codeDir7:V, reg p31:p(V +), reg collationField12:*, reg collationField13:V, reg p32:p(V +), reg r98:V, reg paste5:cls, reg out8:*, reg out9:V, reg p33:p(V +), reg paste6:cls, reg badFiles10:*, reg badFiles11:V, reg p34:p(V +), reg r101:V, reg p35:p(V +), reg r103:V, reg stop3:cls, reg out10:*, reg out11:V, reg p36:p(V +), reg r105:V, reg codeFilesInCspec10:*, reg codeFilesInCspec11:V, reg file_path2:cls, reg codeDir8:*, reg codeDir9:V, reg p37:p(V +), reg codeFiles4:*, reg codeFiles5:V, reg p38:p(V +), reg r109:V, reg dir_exists2:cls, reg outDir1:*, reg outDir2:V, reg p39:p(V +), reg r111:V, reg r112:V, reg c12:L, reg c14:V, reg dir_create:cls, reg outDir3:*, reg outDir4:V, reg p40:p(V +), reg r114:V, reg r115:V, reg c15:L, reg c16:V, reg c18:L, reg stop4:cls, reg gettextf4:cls, reg outDir5:*, reg outDir6:V, reg p41:p(V +), reg r117:V, reg p42:p(V +), reg r119:V, reg file_path3:cls, reg outDir7:*, reg outDir8:V, reg p43:p(V +), reg r122:V, reg dir_exists3:cls, reg outCodeDir:*, reg outCodeDir1:V, reg p44:p(V +), reg r124:V, reg r125:V, reg c19:L, reg c21:V, reg dir_create1:cls, reg outCodeDir2:*, reg outCodeDir3:V, reg p45:p(V +), reg r127:V, reg r128:V, reg c22:L, reg c23:V, reg c25:L, reg stop5:cls, reg gettextf5:cls, reg outCodeDir4:*, reg outCodeDir5:V, reg p46:p(V +), reg r130:V, reg p47:p(V +), reg r132:V, reg file_path4:cls, reg outCodeDir6:*, reg outCodeDir7:V, reg p48:p(V +), reg db6:*, reg db7:V, reg c26:L, reg db9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r135:V, reg p49:p(V +), reg r137:V, reg file_create:cls, reg outFile:*, reg outFile1:V, reg p50:p(V +), reg r139:V, reg r140:V, reg c27:L, reg stop6:cls, reg gettextf6:cls, reg outFile2:*, reg outFile3:V, reg p51:p(V +), reg r142:V, reg p52:p(V +), reg r144:V, reg writeLines:cls, reg paste7:cls, reg db10:*, reg db11:V, reg c28:L, reg db13:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r146:V, reg p53:p(V +), reg r148:V, reg p54:p(V +), reg outFile4:*, reg outFile5:V, reg p55:p(V +), reg r151:V, reg as_vector:cls, reg db14:*, reg db15:V, reg c29:L, reg db17:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r152:V, reg p56:p(V +), reg r154:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r155:V, reg r156:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r157:V, reg r158:V, reg r159:cls, reg need_enc:*, reg need_enc1:V, reg c30:L, reg c32:V, reg _notin_:cls, reg Sys_getlocale1:cls, reg r160:V, reg p57:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r162:V, reg r163:V, reg c33:cls, reg r164:V, reg p58:p(V +), reg r166:V, reg c34:L, reg c35:V, reg c37:L, reg file:cls, reg outFile6:*, reg outFile7:V, reg p59:p(V +), reg r168:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r169:V, reg on_exit1:cls, reg r171:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r172:V, reg r173:V, reg c38:cls, reg r174:V, reg codeFiles6:*, reg codeFiles7:V, reg s:V, reg l:I, reg i2:I, reg i3:I, reg i4:I, reg c39:L, reg x:V, reg readLines:cls, reg f:*, reg f1:V, reg p60:p(V +), reg r176:V, reg enc2:*, reg enc3:V, reg r177:V, reg c40:L, reg validUTF8:cls, reg lines:*, reg lines1:V, reg p61:p(V +), reg r179:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r180:V, reg i11:I, reg r181:V, reg valid:*, reg valid1:V, reg r182:V, reg any1:cls, reg r183:V, reg c41:L, reg warning1:cls, reg sprintf:cls, reg sQuote:cls, reg basename:cls, reg f2:*, reg f3:V, reg p62:p(V +), reg r185:V, reg p63:p(V +), reg r187:V, reg p64:p(V +), reg r189:V, reg p65:p(V +), reg r191:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r192:V, reg i16:I, reg r193:V, reg badfiles:*, reg badfiles1:V, reg basename1:cls, reg f4:*, reg f5:V, reg p66:p(V +), reg r195:V, reg c42:cls, reg r196:V, reg i17:I, reg r197:V, reg i18:I, reg iconv:cls, reg lines2:*, reg lines3:V, reg p67:p(V +), reg enc4:*, reg enc5:V, reg p68:p(V +), reg r201:V, reg which:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r202:V, reg r203:V, reg tmp:*, reg tmp1:V, reg is_na1:cls, reg r204:V, reg p69:p(V +), reg r206:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r207:V, reg i21:I, reg r208:V, reg bad:*, reg bad1:V, reg length3:cls, reg r209:V, reg c43:L, reg iconv1:cls, reg lines4:*, reg lines5:V, reg p70:p(V +), reg enc6:*, reg enc7:V, reg p71:p(V +), reg r212:V, reg i24:I, reg grep:cls, reg lines6:*, reg lines7:V, reg c44:L, reg lines9:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg bad2:*, reg bad3:V, reg __7:cls, reg r214:V, reg p72:p(V +), reg r216:V, reg bad4:*, reg bad5:V, reg c45:L, reg i26:I, reg bad7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg i28:I, reg dx19:V, reg comm:*, reg comm1:V, reg __8:cls, reg r217:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r218:V, reg i31:I, reg r219:V, reg bad8:*, reg bad9:V, reg length4:cls, reg r220:V, reg c46:L, reg warning2:cls, reg sprintf1:cls, reg ngettext:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r221:V, reg r222:V, reg bad10:*, reg bad11:V, reg length5:cls, reg r223:V, reg p73:p(V +), reg r225:V, reg p74:p(V +), reg sQuote1:cls, reg basename2:cls, reg f6:*, reg f7:V, reg p75:p(V +), reg r228:V, reg p76:p(V +), reg r230:V, reg p77:p(V +), reg paste8:cls, reg bad12:*, reg bad13:V, reg p78:p(V +), reg r233:V, reg p79:p(V +), reg r235:V, reg p80:p(V +), reg r237:V, reg i34:I, reg paste9:cls, reg f8:*, reg f9:V, reg p81:p(V +), reg r240:V, reg testParse:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r241:V, reg r242:V, reg line1:*, reg line2:V, reg tmp2:*, reg tmp3:V, reg c47:cls, reg r243:V, reg p82:p(V +), reg r245:V, reg writeLines1:cls, reg line3:*, reg line4:V, reg p83:p(V +), reg con:*, reg con1:V, reg p84:p(V +), reg r248:V, reg writeLines2:cls, reg tmp4:*, reg tmp5:V, reg p85:p(V +), reg con2:*, reg con3:V, reg p86:p(V +), reg r251:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r252:V, reg r253:V, reg badfiles2:*, reg badfiles3:V, reg length6:cls, reg r254:V, reg c48:L, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r255:V, reg p87:p(V +), reg r257:V, reg validate:*, reg validate1:V, reg c49:L, reg stop7:cls, reg r258:V, reg r259:V, reg warning3:cls, reg r260:V, reg close:cls, reg con4:*, reg con5:V, reg p88:p(V +), reg r263:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r264:V, reg r265:V, reg on_exit2:cls, reg r266:V, reg lapply:cls, reg codeFiles8:*, reg codeFiles9:V, reg p89:p(V +), reg testParse1:*, reg testParse2:V, reg p90:p(V +), reg r270:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r271:V, reg r272:V, reg _file_append_ensuring_LFs:cls, reg outFile8:*, reg outFile9:V, reg p91:p(V +), reg codeFiles10:*, reg codeFiles11:V, reg p92:p(V +), reg r275:V, reg all:cls, reg r276:V, reg r277:V, reg c50:L, reg stop8:cls, reg r278:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r279:V, reg r280:V, reg invisible1:cls, reg r281:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    dir_exists = ldf `dir.exists`;
    check L61() else D0();
  D0():
    deopt 1 [];
  L61():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn dir_exists(p);
    check L62() else D1();
  D1():
    deopt 3 [r1];
  L62():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L63() else L0();
  L0():
    goto L1();
  L1():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L67() else D4();
  L63():
    stop = ldf stop;
    check L64() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L64():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r4 = dyn gettextf("directory '%s' does not exist", p1);
      return r4;
    };
    r6 = dyn stop[, domain](p2, NA_LGL);
    check L65() else D3();
  L67():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r9 = dyn file_path_as_absolute(p3);
    check L68() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 16 [r9];
  L65():
    goto L1();
  L68():
    st dir = r9;
    Sys_getlocale = ldf `Sys.getlocale`;
    check L69() else D6();
  D6():
    deopt 19 [];
  L69():
    r10 = dyn Sys_getlocale("LC_COLLATE");
    check L70() else D7();
  D7():
    deopt 21 [r10];
  L70():
    st curLocale = r10;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L71() else L72();
  L2():
    st lccollate = "C";
    Sys_setlocale = ldf `Sys.setlocale`;
    check L73() else D8();
  L71():
    on_exit = ldf `on.exit` in base;
    r13 = dyn on_exit(<lang Sys.setlocale("LC_COLLATE", curLocale)>, TRUE);
    goto L2();
  L72():
    r11 = dyn base[, add](<lang Sys.setlocale("LC_COLLATE", curLocale)>, TRUE);
    goto L2();
  D8():
    deopt 30 [];
  L73():
    p4 = prom<V +>{
      lccollate = ld lccollate;
      lccollate1 = force? lccollate;
      checkMissing(lccollate1);
      return lccollate1;
    };
    r15 = dyn Sys_setlocale("LC_COLLATE", p4);
    check L74() else D9();
  D9():
    deopt 33 [r15];
  L74():
    lccollate2 = ld lccollate;
    check L75() else D10();
  D10():
    deopt 33 [r15, lccollate2];
  L75():
    lccollate3 = force? lccollate2;
    checkMissing(lccollate3);
    r16 = `!=`(r15, lccollate3);
    c1 = `as.logical`(r16);
    if c1 then L76() else L3();
  L3():
    goto L4();
  L4():
    _read_description = ldf `.read_description`;
    check L80() else D13();
  L76():
    warning = ldf warning;
    check L77() else D11();
  D11():
    deopt 37 [];
  D13():
    deopt 43 [];
  L77():
    r17 = dyn warning("cannot turn off locale-specific sorting via LC_COLLATE");
    check L78() else D12();
  L80():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p5 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r20 = dyn file_path(p5, "DESCRIPTION");
      return r20;
    };
    r22 = dyn _read_description(p6);
    check L81() else D14();
  D12():
    deopt 39 [r17];
  D14():
    deopt 45 [r22];
  L78():
    goto L4();
  L81():
    st db = r22;
    file_path1 = ldf `file.path`;
    check L82() else D15();
  D15():
    deopt 48 [];
  L82():
    p7 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r24 = dyn file_path1(p7, "R");
    check L83() else D16();
  D16():
    deopt 51 [r24];
  L83():
    st codeDir = r24;
    dir_exists1 = ldf `dir.exists`;
    check L84() else D17();
  D17():
    deopt 54 [];
  L84():
    p8 = prom<V +>{
      codeDir = ld codeDir;
      codeDir1 = force? codeDir;
      checkMissing(codeDir1);
      return codeDir1;
    };
    r26 = dyn dir_exists1(p8);
    check L85() else D18();
  D18():
    deopt 56 [r26];
  L85():
    r27 = `!`(r26);
    c2 = `as.logical`(r27);
    if c2 then L86() else L5();
  L5():
    list_files_with_type = ldf list_files_with_type;
    check L92() else D20();
  L86():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L87() else L88();
  D20():
    deopt 66 [];
  L6(r29):
    popenv;
    return r29;
  L87():
    invisible = ldf invisible in base;
    r30 = dyn invisible();
    check L89() else D19();
  L88():
    r28 = dyn base1();
    goto L6(r28);
  L92():
    p9 = prom<V +>{
      codeDir2 = ld codeDir;
      codeDir3 = force? codeDir2;
      checkMissing(codeDir3);
      return codeDir3;
    };
    r34 = dyn list_files_with_type[, , `full.names`](p9, "code", FALSE);
    check L93() else D21();
  D19():
    deopt 61 [r30];
  D21():
    deopt 71 [r34];
  L89():
    goto L6(r30);
  L93():
    st codeFiles = r34;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L94() else L95();
  L8(r36):
    st collationField = r36;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L94():
    paste0 = ldf paste0;
    check L96() else D22();
  L95():
    r35 = dyn base2(<lang paste0("Collate.", .OStype())>, "Collate");
    goto L8(r35);
  D22():
    deopt 76 [];
  L9(r42):
    c4 = `as.logical`(r42);
    if c4 then L104() else L10();
  L96():
    p10 = prom<V +>{
      _OStype = ldf `.OStype`;
      r37 = dyn _OStype();
      return r37;
    };
    r39 = dyn paste0("Collate.", p10);
    check L97() else D23();
  L99():
    _in_ = ldf `%in%`;
    check L101() else D25();
  L100():
    r41 = dyn base3(<lang `<-`(i, `%in%`(collationField, names(db)))>);
    goto L9(r41);
  D23():
    deopt 79 [r39];
  D25():
    deopt 87 [];
  L10():
    goto L22();
  L22():
    file_path2 = ldf `file.path`;
    check L159() else D63();
  L97():
    c3 = ldf c in base;
    r40 = dyn c3(r39, "Collate");
    check L98() else D24();
  L101():
    p11 = prom<V +>{
      collationField = ld collationField;
      collationField1 = force? collationField;
      checkMissing(collationField1);
      return collationField1;
    };
    p12 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      names = ldf names in base;
      r46 = dyn names(db1);
      goto L0(r46);
    L2():
      r44 = dyn base4(<sym db>);
      goto L0(r44);
    };
    r48 = dyn _in_(p11, p12);
    check L102() else D26();
  L104():
    collationField2 = ld collationField;
    check L105() else D28();
  D24():
    deopt 82 [r40];
  D26():
    deopt 90 [r48];
  D28():
    deopt 94 [collationField2];
  D63():
    deopt 217 [];
  L98():
    goto L8(r40);
  L102():
    st i = r48;
    any = ldf any in base;
    r49 = dyn any(r48);
    check L103() else D27();
  L105():
    collationField3 = force? collationField2;
    checkMissing(collationField3);
    c5 = `is.object`(collationField3);
    if c5 then L106() else L107(collationField3);
  L159():
    p37 = prom<V +>{
      codeDir8 = ld codeDir;
      codeDir9 = force? codeDir8;
      checkMissing(codeDir9);
      return codeDir9;
    };
    p38 = prom<V +>{
      codeFiles4 = ld codeFiles;
      codeFiles5 = force? codeFiles4;
      checkMissing(codeFiles5);
      return codeFiles5;
    };
    r109 = dyn file_path2(p37, p38);
    check L160() else D64();
  D27():
    deopt 93 [r49];
  D64():
    deopt 220 [r109];
  L11(dx1):
    c6 = `is.object`(dx1);
    if c6 then L110() else L111(dx1);
  L103():
    goto L9(r49);
  L106():
    dr = tryDispatchBuiltin.1("[", collationField3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L108() else L107(dr);
  L107(collationField5):
    i = ld i;
    check L109() else D29();
  L160():
    st codeFiles = r109;
    dir_exists2 = ldf `dir.exists`;
    check L161() else D65();
  D29():
    deopt 96 [collationField5, i];
  D65():
    deopt 223 [];
  L12(dx5):
    st collationField = dx5;
    _read_collate_field = ldf `.read_collate_field`;
    check L113() else D30();
  L108():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L109():
    i1 = force? i;
    __ = ldf `[` in base;
    r50 = dyn __(collationField5, i1);
    goto L11(r50);
  L110():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L112() else L111(dr2);
  L111(dx3):
    __1 = ldf `[` in base;
    r51 = dyn __1(dx3, 1);
    goto L12(r51);
  L161():
    p39 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r111 = dyn dir_exists2(p39);
    check L162() else D66();
  D30():
    deopt 104 [];
  D66():
    deopt 225 [r111];
  L112():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx4);
  L113():
    p13 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      c7 = `is.object`(db3);
      if c7 then L1() else L2(db3);
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("[", db3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db5):
      collationField6 = ld collationField;
      collationField7 = force? collationField6;
      __2 = ldf `[` in base;
      r52 = dyn __2(db5, collationField7);
      goto L0(r52);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r54 = dyn _read_collate_field(p13);
    check L114() else D31();
  L162():
    r112 = `!`(r111);
    c12 = `as.logical`(r112);
    if c12 then L163() else L23(c12);
  D31():
    deopt 106 [r54];
  L23(c14):
    c18 = `as.logical`(c14);
    if c18 then L167() else L24();
  L114():
    st codeFilesInCspec = r54;
    unique = ldf unique;
    check L115() else D32();
  L163():
    dir_create = ldf `dir.create`;
    check L164() else D67();
  D32():
    deopt 109 [];
  D67():
    deopt 228 [c12];
  L24():
    goto L25();
  L25():
    file_path3 = ldf `file.path`;
    check L171() else D71();
  L115():
    p15 = prom<V +>{
      codeFilesInCspec = ld codeFilesInCspec;
      codeFilesInCspec1 = force? codeFilesInCspec;
      checkMissing(codeFilesInCspec1);
      c8 = `is.object`(codeFilesInCspec1);
      if c8 then L1() else L2(codeFilesInCspec1);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("[", codeFilesInCspec1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(codeFilesInCspec3):
      duplicated = ldf duplicated;
      p14 = prom<V +>{
        codeFilesInCspec4 = ld codeFilesInCspec;
        codeFilesInCspec5 = force? codeFilesInCspec4;
        checkMissing(codeFilesInCspec5);
        return codeFilesInCspec5;
      };
      r56 = dyn duplicated(p14);
      __3 = ldf `[` in base;
      r57 = dyn __3(codeFilesInCspec3, r56);
      goto L0(r57);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r59 = dyn unique(p15);
    check L116() else D33();
  L164():
    p40 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r114 = dyn dir_create(p40);
    check L165() else D68();
  L167():
    stop4 = ldf stop;
    check L168() else D69();
  D33():
    deopt 111 [r59];
  D68():
    deopt 230 [c12, r114];
  D69():
    deopt 234 [];
  D71():
    deopt 242 [];
  L116():
    st badFiles = r59;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L117() else L118();
  L165():
    r115 = `!`(r114);
    c15 = `as.logical`(r115);
    c16 = `&&`(c12, c15);
    goto L23(c16);
  L168():
    p42 = prom<V +>{
      gettextf4 = ldf gettextf;
      p41 = prom<V +>{
        outDir5 = ld outDir;
        outDir6 = force? outDir5;
        checkMissing(outDir6);
        return outDir6;
      };
      r117 = dyn gettextf4("cannot open directory '%s'", p41);
      return r117;
    };
    r119 = dyn stop4[, domain](p42, NA_LGL);
    check L169() else D70();
  L171():
    p43 = prom<V +>{
      outDir7 = ld outDir;
      outDir8 = force? outDir7;
      checkMissing(outDir8);
      return outDir8;
    };
    r122 = dyn file_path3(p43, "R");
    check L172() else D72();
  D70():
    deopt 238 [r119];
  D72():
    deopt 245 [r122];
  L13(r61):
    c9 = `as.logical`(r61);
    if c9 then L121() else L14();
  L117():
    badFiles = ld badFiles;
    check L119() else D34();
  L118():
    r60 = dyn base5(<sym badFiles>);
    goto L13(r60);
  L169():
    goto L25();
  L172():
    st outCodeDir = r122;
    dir_exists3 = ldf `dir.exists`;
    check L173() else D73();
  D34():
    deopt 115 [badFiles];
  D73():
    deopt 248 [];
  L14():
    goto L15();
  L15():
    setdiff = ldf setdiff;
    check L129() else D42();
  L119():
    badFiles1 = force? badFiles;
    checkMissing(badFiles1);
    length = ldf length in base;
    r62 = dyn length(badFiles1);
    check L120() else D35();
  L121():
    gettextf1 = ldf gettextf;
    check L122() else D36();
  L173():
    p44 = prom<V +>{
      outCodeDir = ld outCodeDir;
      outCodeDir1 = force? outCodeDir;
      checkMissing(outCodeDir1);
      return outCodeDir1;
    };
    r124 = dyn dir_exists3(p44);
    check L174() else D74();
  D35():
    deopt 118 [r62];
  D36():
    deopt 120 [];
  D42():
    deopt 142 [];
  D74():
    deopt 250 [r124];
  L120():
    goto L13(r62);
  L122():
    p16 = prom<V +>{
      collationField8 = ld collationField;
      collationField9 = force? collationField8;
      checkMissing(collationField9);
      return collationField9;
    };
    r64 = dyn gettextf1("\nduplicated files in '%s' field:", p16);
    check L123() else D37();
  L129():
    p21 = prom<V +>{
      codeFilesInCspec6 = ld codeFilesInCspec;
      codeFilesInCspec7 = force? codeFilesInCspec6;
      checkMissing(codeFilesInCspec7);
      return codeFilesInCspec7;
    };
    p22 = prom<V +>{
      codeFiles = ld codeFiles;
      codeFiles1 = force? codeFiles;
      checkMissing(codeFiles1);
      return codeFiles1;
    };
    r75 = dyn setdiff(p21, p22);
    check L130() else D43();
  L174():
    r125 = `!`(r124);
    c19 = `as.logical`(r125);
    if c19 then L175() else L26(c19);
  D37():
    deopt 123 [r64];
  D43():
    deopt 145 [r75];
  L26(c21):
    c25 = `as.logical`(c21);
    if c25 then L179() else L27();
  L123():
    st out = r64;
    paste1 = ldf paste;
    check L124() else D38();
  L130():
    st badFiles = r75;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  L175():
    dir_create1 = ldf `dir.create`;
    check L176() else D75();
  D38():
    deopt 126 [];
  D75():
    deopt 253 [c19];
  L16(r77):
    c10 = `as.logical`(r77);
    if c10 then L135() else L17();
  L27():
    goto L28();
  L28():
    file_path4 = ldf `file.path`;
    check L183() else D79();
  L124():
    p17 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    p19 = prom<V +>{
      paste2 = ldf paste0;
      p18 = prom<V +>{
        badFiles2 = ld badFiles;
        badFiles3 = force? badFiles2;
        checkMissing(badFiles3);
        return badFiles3;
      };
      r67 = dyn paste2[, , collapse]("  ", p18, "\n");
      return r67;
    };
    r69 = dyn paste1[, , sep](p17, p19, "\n");
    check L125() else D39();
  L131():
    badFiles4 = ld badFiles;
    check L133() else D44();
  L132():
    r76 = dyn base6(<sym badFiles>);
    goto L16(r76);
  L176():
    p45 = prom<V +>{
      outCodeDir2 = ld outCodeDir;
      outCodeDir3 = force? outCodeDir2;
      checkMissing(outCodeDir3);
      return outCodeDir3;
    };
    r127 = dyn dir_create1(p45);
    check L177() else D76();
  L179():
    stop5 = ldf stop;
    check L180() else D77();
  D39():
    deopt 131 [r69];
  D44():
    deopt 149 [badFiles4];
  D76():
    deopt 255 [c19, r127];
  D77():
    deopt 259 [];
  D79():
    deopt 267 [];
  L17():
    goto L18();
  L18():
    setdiff1 = ldf setdiff;
    check L143() else D52();
  L125():
    st out = r69;
    stop1 = ldf stop;
    check L126() else D40();
  L133():
    badFiles5 = force? badFiles4;
    checkMissing(badFiles5);
    length1 = ldf length in base;
    r78 = dyn length1(badFiles5);
    check L134() else D45();
  L135():
    gettextf2 = ldf gettextf;
    check L136() else D46();
  L177():
    r128 = `!`(r127);
    c22 = `as.logical`(r128);
    c23 = `&&`(c19, c22);
    goto L26(c23);
  L180():
    p47 = prom<V +>{
      gettextf5 = ldf gettextf;
      p46 = prom<V +>{
        outCodeDir4 = ld outCodeDir;
        outCodeDir5 = force? outCodeDir4;
        checkMissing(outCodeDir5);
        return outCodeDir5;
      };
      r130 = dyn gettextf5("cannot open directory '%s'", p46);
      return r130;
    };
    r132 = dyn stop5[, domain](p47, NA_LGL);
    check L181() else D78();
  L183():
    p48 = prom<V +>{
      outCodeDir6 = ld outCodeDir;
      outCodeDir7 = force? outCodeDir6;
      checkMissing(outCodeDir7);
      return outCodeDir7;
    };
    p49 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      c26 = `is.object`(db7);
      if c26 then L1() else L2(db7);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("[", db7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(db9):
      __4 = ldf `[` in base;
      r135 = dyn __4(db9, "Package");
      goto L0(r135);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    r137 = dyn file_path4(p48, p49);
    check L184() else D80();
  D40():
    deopt 134 [];
  D45():
    deopt 152 [r78];
  D46():
    deopt 154 [];
  D52():
    deopt 177 [];
  D78():
    deopt 263 [r132];
  D80():
    deopt 270 [r137];
  L126():
    p20 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r71 = dyn stop1[, domain](p20, NA_LGL);
    check L127() else D41();
  L134():
    goto L16(r78);
  L136():
    p23 = prom<V +>{
      collationField10 = ld collationField;
      collationField11 = force? collationField10;
      checkMissing(collationField11);
      return collationField11;
    };
    p24 = prom<V +>{
      codeDir4 = ld codeDir;
      codeDir5 = force? codeDir4;
      checkMissing(codeDir5);
      return codeDir5;
    };
    r81 = dyn gettextf2("\nfiles in '%s' field missing from '%s':", p23, p24);
    check L137() else D47();
  L143():
    p29 = prom<V +>{
      codeFiles2 = ld codeFiles;
      codeFiles3 = force? codeFiles2;
      checkMissing(codeFiles3);
      return codeFiles3;
    };
    p30 = prom<V +>{
      codeFilesInCspec8 = ld codeFilesInCspec;
      codeFilesInCspec9 = force? codeFilesInCspec8;
      checkMissing(codeFilesInCspec9);
      return codeFilesInCspec9;
    };
    r92 = dyn setdiff1(p29, p30);
    check L144() else D53();
  L181():
    goto L28();
  L184():
    st outFile = r137;
    file_create = ldf `file.create`;
    check L185() else D81();
  D41():
    deopt 138 [r71];
  D47():
    deopt 158 [r81];
  D53():
    deopt 180 [r92];
  D81():
    deopt 273 [];
  L127():
    goto L15();
  L137():
    st out = r81;
    paste3 = ldf paste;
    check L138() else D48();
  L144():
    st badFiles = r92;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  L185():
    p50 = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r139 = dyn file_create(p50);
    check L186() else D82();
  D48():
    deopt 161 [];
  D82():
    deopt 275 [r139];
  L19(r94):
    c11 = `as.logical`(r94);
    if c11 then L149() else L20();
  L138():
    p25 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    p27 = prom<V +>{
      paste4 = ldf paste0;
      p26 = prom<V +>{
        badFiles6 = ld badFiles;
        badFiles7 = force? badFiles6;
        checkMissing(badFiles7);
        return badFiles7;
      };
      r84 = dyn paste4[, , collapse]("  ", p26, "\n");
      return r84;
    };
    r86 = dyn paste3[, , sep](p25, p27, "\n");
    check L139() else D49();
  L145():
    badFiles8 = ld badFiles;
    check L147() else D54();
  L146():
    r93 = dyn base7(<sym badFiles>);
    goto L19(r93);
  L186():
    r140 = `!`(r139);
    c27 = `as.logical`(r140);
    if c27 then L187() else L29();
  D49():
    deopt 166 [r86];
  D54():
    deopt 184 [badFiles8];
  L20():
    goto L21();
  L21():
    codeFilesInCspec10 = ld codeFilesInCspec;
    check L157() else D62();
  L29():
    goto L30();
  L30():
    writeLines = ldf writeLines;
    check L191() else D85();
  L139():
    st out = r86;
    stop2 = ldf stop;
    check L140() else D50();
  L147():
    badFiles9 = force? badFiles8;
    checkMissing(badFiles9);
    length2 = ldf length in base;
    r95 = dyn length2(badFiles9);
    check L148() else D55();
  L149():
    gettextf3 = ldf gettextf;
    check L150() else D56();
  L187():
    stop6 = ldf stop;
    check L188() else D83();
  D50():
    deopt 169 [];
  D55():
    deopt 187 [r95];
  D56():
    deopt 189 [];
  D62():
    deopt 211 [codeFilesInCspec10];
  D83():
    deopt 278 [];
  D85():
    deopt 286 [];
  L140():
    p28 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r88 = dyn stop2[, domain](p28, NA_LGL);
    check L141() else D51();
  L148():
    goto L19(r95);
  L150():
    p31 = prom<V +>{
      codeDir6 = ld codeDir;
      codeDir7 = force? codeDir6;
      checkMissing(codeDir7);
      return codeDir7;
    };
    p32 = prom<V +>{
      collationField12 = ld collationField;
      collationField13 = force? collationField12;
      checkMissing(collationField13);
      return collationField13;
    };
    r98 = dyn gettextf3("\nfiles in '%s' missing from '%s' field:", p31, p32);
    check L151() else D57();
  L157():
    codeFilesInCspec11 = force? codeFilesInCspec10;
    checkMissing(codeFilesInCspec11);
    st codeFiles = codeFilesInCspec11;
    goto L22();
  L188():
    p52 = prom<V +>{
      gettextf6 = ldf gettextf;
      p51 = prom<V +>{
        outFile2 = ld outFile;
        outFile3 = force? outFile2;
        checkMissing(outFile3);
        return outFile3;
      };
      r142 = dyn gettextf6("unable to create '%s'", p51);
      return r142;
    };
    r144 = dyn stop6[, domain](p52, NA_LGL);
    check L189() else D84();
  L191():
    p54 = prom<V +>{
      paste7 = ldf paste0;
      p53 = prom<V +>{
        db10 = ld db;
        db11 = force? db10;
        checkMissing(db11);
        c28 = `is.object`(db11);
        if c28 then L1() else L2(db11);
      L0(dx13):
        return dx13;
      L1():
        dr10 = tryDispatchBuiltin.1("[", db11);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(db13):
        __5 = ldf `[` in base;
        r146 = dyn __5(db13, "Package");
        goto L0(r146);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx12);
      };
      r148 = dyn paste7(".packageName <- \"", p53, "\"");
      return r148;
    };
    p55 = prom<V +>{
      outFile4 = ld outFile;
      outFile5 = force? outFile4;
      checkMissing(outFile5);
      return outFile5;
    };
    r151 = dyn writeLines(p54, p55);
    check L192() else D86();
  D51():
    deopt 173 [r88];
  D57():
    deopt 193 [r98];
  D84():
    deopt 282 [r144];
  D86():
    deopt 289 [r151];
  L141():
    goto L18();
  L151():
    st out = r98;
    paste5 = ldf paste;
    check L152() else D58();
  L189():
    goto L30();
  L192():
    as_vector = ldf `as.vector`;
    check L193() else D87();
  D58():
    deopt 196 [];
  D87():
    deopt 291 [];
  L152():
    p33 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    p35 = prom<V +>{
      paste6 = ldf paste0;
      p34 = prom<V +>{
        badFiles10 = ld badFiles;
        badFiles11 = force? badFiles10;
        checkMissing(badFiles11);
        return badFiles11;
      };
      r101 = dyn paste6[, , collapse]("  ", p34, "\n");
      return r101;
    };
    r103 = dyn paste5[, , sep](p33, p35, "\n");
    check L153() else D59();
  L193():
    p56 = prom<V +>{
      db14 = ld db;
      db15 = force? db14;
      checkMissing(db15);
      c29 = `is.object`(db15);
      if c29 then L1() else L2(db15);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[", db15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(db17):
      __6 = ldf `[` in base;
      r152 = dyn __6(db17, "Encoding");
      goto L0(r152);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r154 = dyn as_vector(p56);
    check L194() else D88();
  D59():
    deopt 201 [r103];
  D88():
    deopt 293 [r154];
  L153():
    st out = r103;
    stop3 = ldf stop;
    check L154() else D60();
  L194():
    st enc = r154;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L195() else L196();
  D60():
    deopt 204 [];
  L31(r156):
    r158 = `!`(r156);
    st need_enc = r158;
    r159 = clos inner1246119658;
    st testParse = r159;
    need_enc = ld need_enc;
    check L199() else D91();
  L154():
    p36 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r105 = dyn stop3[, domain](p36, NA_LGL);
    check L155() else D61();
  L195():
    enc = ld enc;
    check L197() else D89();
  L196():
    r155 = dyn base8(<sym enc>);
    goto L31(r155);
  D61():
    deopt 208 [r105];
  D89():
    deopt 297 [enc];
  D91():
    deopt 306 [need_enc];
  L155():
    goto L21();
  L197():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r157 = dyn is_na(enc1);
    check L198() else D90();
  L199():
    need_enc1 = force? need_enc;
    checkMissing(need_enc1);
    c30 = `as.logical`(need_enc1);
    if c30 then L200() else L32(c30);
  D90():
    deopt 300 [r157];
  L32(c32):
    c37 = `as.logical`(c32);
    if c37 then L204() else L33();
  L198():
    goto L31(r157);
  L200():
    _notin_ = ldf `%notin%`;
    check L201() else D92();
  D92():
    deopt 309 [c30];
  L33():
    lapply = ldf lapply;
    check L290() else D146();
  L57():
    sym22 = ldf invisible;
    base22 = ldf invisible in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L301() else L302();
  L201():
    p57 = prom<V +>{
      Sys_getlocale1 = ldf `Sys.getlocale`;
      r160 = dyn Sys_getlocale1("LC_CTYPE");
      return r160;
    };
    p58 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r163):
      return r163;
    L1():
      c33 = ldf c in base;
      r164 = dyn c33("C", "POSIX");
      goto L0(r164);
    L2():
      r162 = dyn base9("C", "POSIX");
      goto L0(r162);
    };
    r166 = dyn _notin_(p57, p58);
    check L202() else D93();
  L204():
    file = ldf file;
    check L205() else D94();
  D93():
    deopt 312 [c30, r166];
  D94():
    deopt 315 [];
  D146():
    deopt 505 [];
  L60(r280):
    popenv;
    return r280;
  L202():
    c34 = `as.logical`(r166);
    c35 = `&&`(c30, c34);
    goto L32(c35);
  L205():
    p59 = prom<V +>{
      outFile6 = ld outFile;
      outFile7 = force? outFile6;
      checkMissing(outFile7);
      return outFile7;
    };
    r168 = dyn file(p59, "a");
    check L206() else D95();
  L290():
    p89 = prom<V +>{
      codeFiles8 = ld codeFiles;
      codeFiles9 = force? codeFiles8;
      checkMissing(codeFiles9);
      return codeFiles9;
    };
    p90 = prom<V +>{
      testParse1 = ld testParse;
      testParse2 = force? testParse1;
      checkMissing(testParse2);
      return testParse2;
    };
    r270 = dyn lapply(p89, p90);
    check L291() else D147();
  L301():
    invisible1 = ldf invisible in base;
    r281 = dyn invisible1();
    check L303() else D153();
  L302():
    r279 = dyn base22();
    goto L60(r279);
  D95():
    deopt 318 [r168];
  D147():
    deopt 508 [r270];
  D153():
    deopt 528 [r281];
  L206():
    st con = r168;
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L207() else L208();
  L291():
    sym21 = ldf all;
    base21 = ldf all in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L292() else L293();
  L303():
    goto L60(r281);
  L34():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L209() else L210();
  L58(r272):
    r277 = `!`(r272);
    c50 = `as.logical`(r277);
    if c50 then L297() else L59();
  L207():
    on_exit1 = ldf `on.exit` in base;
    r171 = dyn on_exit1(<lang close(con)>);
    goto L34();
  L208():
    r169 = dyn base10(<lang close(con)>);
    goto L34();
  L292():
    _file_append_ensuring_LFs = ldf `.file_append_ensuring_LFs`;
    check L294() else D148();
  L293():
    r271 = dyn base21(<lang .file_append_ensuring_LFs(outFile, codeFiles)>);
    goto L58(r271);
  D148():
    deopt 512 [];
  L35(r173):
    st badfiles = r173;
    codeFiles6 = ld codeFiles;
    check L212() else D97();
  L59():
    goto L57();
  L209():
    c38 = ldf c in base;
    r174 = dyn c38();
    check L211() else D96();
  L210():
    r172 = dyn base11();
    goto L35(r172);
  L294():
    p91 = prom<V +>{
      outFile8 = ld outFile;
      outFile9 = force? outFile8;
      checkMissing(outFile9);
      return outFile9;
    };
    p92 = prom<V +>{
      codeFiles10 = ld codeFiles;
      codeFiles11 = force? codeFiles10;
      checkMissing(codeFiles11);
      return codeFiles11;
    };
    r275 = dyn _file_append_ensuring_LFs(p91, p92);
    check L295() else D149();
  L297():
    stop8 = ldf stop;
    check L298() else D151();
  D96():
    deopt 326 [r174];
  D97():
    deopt 328 [codeFiles6];
  D149():
    deopt 515 [r275];
  D151():
    deopt 520 [];
  L211():
    goto L35(r174);
  L212():
    codeFiles7 = force? codeFiles6;
    checkMissing(codeFiles7);
    s = toForSeq(codeFiles7);
    l = length(s);
    i2 = 0;
    goto L36(i2);
  L295():
    all = ldf all in base;
    r276 = dyn all(r275);
    check L296() else D150();
  L298():
    r278 = dyn stop8("unable to write code files");
    check L299() else D152();
  D150():
    deopt 517 [r276];
  D152():
    deopt 522 [r278];
  L36(i3):
    i4 = `+`.1(i3, 1);
    c39 = `<`.1(l, i4);
    if c39 then L213() else L50();
  L296():
    goto L58(r276);
  L299():
    goto L57();
  L50():
    x = `[[`(s, i4, NULL, TRUE);
    st f = x;
    readLines = ldf readLines;
    check L214() else D98();
  L213():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L270() else L271();
  D98():
    deopt 331 [i4];
  L51(r253):
    c48 = `as.logical`(r253);
    if c48 then L274() else L52();
  L214():
    p60 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r176 = dyn readLines[, warn](p60, FALSE);
    check L215() else D99();
  L270():
    badfiles2 = ld badfiles;
    check L272() else D135();
  L271():
    r252 = dyn base19(<sym badfiles>);
    goto L51(r252);
  D99():
    deopt 335 [i4, r176];
  D135():
    deopt 468 [badfiles2];
  L52():
    goto L55();
  L55():
    close = ldf close;
    check L285() else D144();
  L215():
    st lines = r176;
    enc2 = ld enc;
    check L216() else D100();
  L272():
    badfiles3 = force? badfiles2;
    checkMissing(badfiles3);
    length6 = ldf length in base;
    r254 = dyn length6(badfiles3);
    check L273() else D136();
  L274():
    config_val_to_logical = ldf config_val_to_logical;
    check L275() else D137();
  D100():
    deopt 337 [i4, enc2];
  D136():
    deopt 471 [r254];
  D137():
    deopt 473 [];
  D144():
    deopt 498 [];
  L216():
    enc3 = force? enc2;
    checkMissing(enc3);
    r177 = `==`(enc3, "UTF-8");
    c40 = `as.logical`(r177);
    if c40 then L217() else L37();
  L273():
    goto L51(r254);
  L275():
    p87 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r255 = dyn Sys_getenv("_R_CHECK_VALIDATE_UTF8_", "FALSE");
      return r255;
    };
    r257 = dyn config_val_to_logical(p87);
    check L276() else D138();
  L285():
    p88 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r263 = dyn close(p88);
    check L286() else D145();
  D138():
    deopt 475 [r257];
  D145():
    deopt 500 [r263];
  L37():
    goto L42(i4);
  L42(i18):
    iconv = ldf iconv;
    check L235() else D111();
  L217():
    validUTF8 = ldf validUTF8;
    check L218() else D101();
  L276():
    st validate = r257;
    validate = ld validate;
    check L277() else D139();
  L286():
    sym20 = ldf `on.exit`;
    base20 = ldf `on.exit` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L287() else L288();
  D101():
    deopt 342 [i4];
  D111():
    deopt 377 [i18];
  D139():
    deopt 477 [validate];
  L56(r265):
    goto L57();
  L218():
    p61 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r179 = dyn validUTF8(p61);
    check L219() else D102();
  L235():
    p67 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    p68 = prom<V +>{
      enc4 = ld enc;
      enc5 = force? enc4;
      checkMissing(enc5);
      return enc5;
    };
    r201 = dyn iconv[, from, to](p67, p68, "");
    check L236() else D112();
  L277():
    validate1 = force? validate;
    checkMissing(validate1);
    c49 = `as.logical`(validate1);
    if c49 then L278() else L53();
  L287():
    on_exit2 = ldf `on.exit` in base;
    r266 = dyn on_exit2();
    goto L56(r266);
  L288():
    r264 = dyn base20();
    goto L56(r264);
  D102():
    deopt 344 [i4, r179];
  D112():
    deopt 383 [i18, r201];
  L53():
    warning3 = ldf warning;
    check L282() else D142();
  L54(r259):
    goto L55();
  L219():
    st valid = r179;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L220() else L221();
  L236():
    st tmp = r201;
    which = ldf which;
    check L237() else D113();
  L278():
    stop7 = ldf stop;
    check L279() else D140();
  D113():
    deopt 386 [i18];
  D140():
    deopt 480 [];
  D142():
    deopt 488 [];
  L38(i11, r181):
    c41 = `as.logical`(r181);
    if c41 then L224() else L39();
  L220():
    valid = ld valid;
    check L222() else D103();
  L221():
    r180 = dyn base12(<lang `!`(valid)>);
    goto L38(i4, r180);
  L237():
    p69 = prom<V +>{
      sym14 = ldf `is.na`;
      base14 = ldf `is.na` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r203):
      return r203;
    L1():
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      is_na1 = ldf `is.na` in base;
      r204 = dyn is_na1(tmp1);
      goto L0(r204);
    L2():
      r202 = dyn base14(<sym tmp>);
      goto L0(r202);
    };
    r206 = dyn which(p69);
    check L238() else D114();
  L279():
    r258 = dyn stop7[, domain, `call.`]("invalidly encoded .R file(s)", NA_LGL, FALSE);
    check L280() else D141();
  L282():
    r260 = dyn warning3[, domain, `call.`]("invalidly encoded .R file(s)", NA_LGL, FALSE);
    check L283() else D143();
  D103():
    deopt 348 [i4, valid];
  D114():
    deopt 388 [i18, r206];
  D141():
    deopt 486 [r258];
  D143():
    deopt 494 [r260];
  L39():
    goto L41(i11, NULL);
  L41(i17, r197):
    goto L42(i17);
  L222():
    valid1 = force? valid;
    checkMissing(valid1);
    r182 = `!`(valid1);
    any1 = ldf any in base;
    r183 = dyn any1(r182);
    check L223() else D104();
  L224():
    warning1 = ldf warning;
    check L225() else D105();
  L238():
    st bad = r206;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L239() else L240();
  L280():
    goto L54(r258);
  L283():
    goto L54(r260);
  D104():
    deopt 352 [i4, r183];
  D105():
    deopt 354 [i11];
  L43(i21, r208):
    c43 = `as.logical`(r208);
    if c43 then L243() else L44();
  L223():
    goto L38(i4, r183);
  L225():
    p65 = prom<V +>{
      sprintf = ldf sprintf;
      p64 = prom<V +>{
        sQuote = ldf sQuote;
        p63 = prom<V +>{
          basename = ldf basename;
          p62 = prom<V +>{
            f2 = ld f;
            f3 = force? f2;
            checkMissing(f3);
            return f3;
          };
          r185 = dyn basename(p62);
          return r185;
        };
        r187 = dyn sQuote(p63);
        return r187;
      };
      r189 = dyn sprintf("file %s is invalid UTF-8", p64);
      return r189;
    };
    r191 = dyn warning1[, domain, `call.`](p65, NA_LGL, FALSE);
    check L226() else D106();
  L239():
    bad = ld bad;
    check L241() else D115();
  L240():
    r207 = dyn base15(<sym bad>);
    goto L43(i18, r207);
  D106():
    deopt 360 [i11, r191];
  D115():
    deopt 392 [i18, bad];
  L44():
    goto L45(i21);
  L45(i24):
    grep = ldf grep;
    check L247() else D119();
  L226():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L227() else L228();
  L241():
    bad1 = force? bad;
    checkMissing(bad1);
    length3 = ldf length in base;
    r209 = dyn length3(bad1);
    check L242() else D116();
  L243():
    iconv1 = ldf iconv;
    check L244() else D117();
  D116():
    deopt 395 [i18, r209];
  D117():
    deopt 397 [i21];
  D119():
    deopt 410 [i24];
  L40(i16, r193):
    st badfiles = r193;
    goto L41(i16, r193);
  L227():
    badfiles = ld badfiles;
    check L229() else D107();
  L228():
    r192 = dyn base13(<sym badfiles>, <lang basename(f)>);
    goto L40(i11, r192);
  L242():
    goto L43(i18, r209);
  L244():
    p70 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    p71 = prom<V +>{
      enc6 = ld enc;
      enc7 = force? enc6;
      checkMissing(enc7);
      return enc7;
    };
    r212 = dyn iconv1[, from, to, sub](p70, p71, "", "byte");
    check L245() else D118();
  L247():
    p72 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      c44 = `is.object`(lines7);
      if c44 then L1() else L2(lines7);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[", lines7);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(lines9):
      bad2 = ld bad;
      bad3 = force? bad2;
      __7 = ldf `[` in base;
      r214 = dyn __7(lines9, bad3);
      goto L0(r214);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r216 = dyn grep[, , invert, useBytes]("^[^#'\"]*#", p72, TRUE, TRUE);
    check L248() else D120();
  D107():
    deopt 363 [i11, badfiles];
  D118():
    deopt 405 [i21, r212];
  D120():
    deopt 417 [i24, r216];
  L229():
    badfiles1 = force? badfiles;
    checkMissing(badfiles1);
    basename1 = ldf basename;
    check L230() else D108();
  L245():
    st tmp = r212;
    goto L45(i21);
  L248():
    st comm = r216;
    bad4 = ld bad;
    check L249() else D121();
  D108():
    deopt 366 [i11];
  D121():
    deopt 419 [i24, bad4];
  L230():
    p66 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r195 = dyn basename1(p66);
    check L231() else D109();
  L249():
    bad5 = force? bad4;
    checkMissing(bad5);
    c45 = `is.object`(bad5);
    if c45 then L250() else L251(i24, bad5);
  D109():
    deopt 368 [i11, r195];
  L46(i28, dx19):
    st bad2 = dx19;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L254() else L255();
  L231():
    c42 = ldf c in base;
    r196 = dyn c42(badfiles1, r195);
    check L232() else D110();
  L250():
    dr16 = tryDispatchBuiltin.1("[", bad5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L252() else L251(i24, dr16);
  L251(i26, bad7):
    comm = ld comm;
    check L253() else D122();
  D110():
    deopt 370 [i11, r196];
  D122():
    deopt 421 [i26, bad7, comm];
  L47(i31, r219):
    c46 = `as.logical`(r219);
    if c46 then L258() else L48();
  L232():
    goto L40(i11, r196);
  L252():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L46(i24, dx18);
  L253():
    comm1 = force? comm;
    __8 = ldf `[` in base;
    r217 = dyn __8(bad7, comm1);
    goto L46(i26, r217);
  L254():
    bad8 = ld bad2;
    check L256() else D123();
  L255():
    r218 = dyn base16(<sym bad2>);
    goto L47(i28, r218);
  D123():
    deopt 427 [i28, bad8];
  L48():
    goto L49(i31);
  L49(i34):
    paste9 = ldf paste0;
    check L262() else D127();
  L256():
    bad9 = force? bad8;
    checkMissing(bad9);
    length4 = ldf length in base;
    r220 = dyn length4(bad9);
    check L257() else D124();
  L258():
    warning2 = ldf warning;
    check L259() else D125();
  D124():
    deopt 430 [i28, r220];
  D125():
    deopt 432 [i31];
  D127():
    deopt 442 [i34];
  L257():
    goto L47(i28, r220);
  L259():
    p80 = prom<V +>{
      sprintf1 = ldf sprintf;
      p74 = prom<V +>{
        ngettext = ldf ngettext;
        p73 = prom<V +>{
          sym17 = ldf length;
          base17 = ldf length in base;
          guard17 = `==`.4(sym17, base17);
          if guard17 then L1() else L2();
        L0(r222):
          return r222;
        L1():
          bad10 = ld bad2;
          bad11 = force? bad10;
          checkMissing(bad11);
          length5 = ldf length in base;
          r223 = dyn length5(bad11);
          goto L0(r223);
        L2():
          r221 = dyn base17(<sym bad2>);
          goto L0(r221);
        };
        r225 = dyn ngettext(p73, "unable to re-encode %s line %s", "unable to re-encode %s lines %s");
        return r225;
      };
      p77 = prom<V +>{
        sQuote1 = ldf sQuote;
        p76 = prom<V +>{
          basename2 = ldf basename;
          p75 = prom<V +>{
            f6 = ld f;
            f7 = force? f6;
            checkMissing(f7);
            return f7;
          };
          r228 = dyn basename2(p75);
          return r228;
        };
        r230 = dyn sQuote1(p76);
        return r230;
      };
      p79 = prom<V +>{
        paste8 = ldf paste;
        p78 = prom<V +>{
          bad12 = ld bad2;
          bad13 = force? bad12;
          checkMissing(bad13);
          return bad13;
        };
        r233 = dyn paste8[, collapse](p78, ", ");
        return r233;
      };
      r235 = dyn sprintf1(p74, p77, p79);
      return r235;
    };
    r237 = dyn warning2[, domain, `call.`](p80, NA_LGL, FALSE);
    check L260() else D126();
  L262():
    p81 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    r240 = dyn paste9("#line 1 \"", p81, "\"");
    check L263() else D128();
  D126():
    deopt 438 [i31, r237];
  D128():
    deopt 446 [i34, r240];
  L260():
    goto L49(i31);
  L263():
    st line1 = r240;
    testParse = ldf testParse;
    check L264() else D129();
  D129():
    deopt 449 [i34];
  L264():
    p82 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r242):
      return r242;
    L1():
      line1 = ld line1;
      line2 = force? line1;
      checkMissing(line2);
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      c47 = ldf c in base;
      r243 = dyn c47(line2, tmp3);
      goto L0(r243);
    L2():
      r241 = dyn base18(<sym line1>, <sym tmp>);
      goto L0(r241);
    };
    r245 = dyn testParse[text](p82);
    check L265() else D130();
  D130():
    deopt 452 [i34, r245];
  L265():
    writeLines1 = ldf writeLines;
    check L266() else D131();
  D131():
    deopt 454 [i34];
  L266():
    p83 = prom<V +>{
      line3 = ld line1;
      line4 = force? line3;
      checkMissing(line4);
      return line4;
    };
    p84 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r248 = dyn writeLines1(p83, p84);
    check L267() else D132();
  D132():
    deopt 457 [i34, r248];
  L267():
    writeLines2 = ldf writeLines;
    check L268() else D133();
  D133():
    deopt 459 [i34];
  L268():
    p85 = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      return tmp5;
    };
    p86 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r251 = dyn writeLines2(p85, p86);
    check L269() else D134();
  D134():
    deopt 462 [i34, r251];
  L269():
    goto L36(i34);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg options:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg parse:cls, reg ddd1:dots?, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg invisible:cls, reg r7:V |
    mkenv;
    st `...` = ddd;
    options = ldf options;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn options[showErrorCalls](FALSE);
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    st op = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    parse = ldf parse;
    check L6() else D2();
  L4():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang options(op)>);
    goto L0();
  L5():
    r1 = dyn base(<lang options(op)>);
    goto L0();
  D2():
    deopt 10 [];
  L6():
    ddd1 = ld `...`;
    r4 = dyn parse[`...`](ddd1);
    check L7() else D3();
  D3():
    deopt 12 [r4];
  L7():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r6):
    popenv;
    return r6;
  L8():
    invisible = ldf invisible in base;
    r7 = dyn invisible();
    check L10() else D4();
  L9():
    r5 = dyn base1();
    goto L1(r5);
  D4():
    deopt 16 [r7];
  L10():
    goto L1(r7);
  }
}