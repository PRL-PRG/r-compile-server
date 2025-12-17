fun main() {
  () -+> V { reg r:cls, reg Sys_glob:cls, reg file_path:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner3137260223;
    st aspell = r;
    Sys_glob = ldf `Sys.glob`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r1 = dyn R_home("share");
        return r1;
      };
      r3 = dyn file_path(p, "dictionaries", "*.rds");
      return r3;
    };
    r5 = dyn Sys_glob(p1);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner3137260223(files, filter, control, encoding, program, dictionaries) {
  (reg files:*, reg filter:*, reg control:*, reg encoding:*, reg program:*, reg dictionaries:*) -+> V { var files:*, var filter:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg program3:*, reg program4:V, reg is_na:cls, reg r10:V, reg c:L, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg files1:*, reg files2:V, reg inherits:cls, reg r15:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg files3:*, reg files4:V, reg list1:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg files5:*, reg files6:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg list2:cls, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c3:L, reg c4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg c8:L, reg r29:V, reg filter1:*, reg filter2:V, reg c9:V, reg c10:L, reg c11:V, reg c13:L, reg files_are_names:*, reg files_are_names1:V, reg r30:V, reg c14:L, reg r31:cls, reg r32:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg filter3:*, reg filter4:V, reg c15:L, reg c16:L, reg filter5:*, reg filter6:V, reg c17:L, reg filter8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r36:V, reg aspell_filter_db:*, reg aspell_filter_db1:V, reg c18:L, reg aspell_filter_db3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg filter_name:*, reg filter_name1:V, reg __1:cls, reg r37:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r38:V, reg r39:V, reg filter9:*, reg filter10:V, reg c19:V, reg c20:L, reg warning:cls, reg gettextf:cls, reg filter_name2:*, reg filter_name3:V, reg p3:p(V +), reg r41:V, reg p4:p(V +), reg r43:V, reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg filter11:*, reg filter12:V, reg is_list:cls, reg r47:V, reg c21:L, reg filter13:*, reg filter14:V, reg c22:L, reg filter16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r48:V, reg c23:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r49:V, reg filter17:*, reg filter18:V, reg c24:L, reg filter20:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r50:V, reg aspell_filter_db4:*, reg aspell_filter_db5:V, reg c25:L, reg aspell_filter_db7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg filter_name4:*, reg filter_name5:V, reg __5:cls, reg r51:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg filter21:*, reg filter22:V, reg c26:V, reg c27:L, reg warning1:cls, reg gettextf1:cls, reg filter_name6:*, reg filter_name7:V, reg p5:p(V +), reg r55:V, reg p6:p(V +), reg r57:V, reg r58:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg r60:V, reg filter23:*, reg filter24:V, reg is_function:cls, reg r61:V, reg r62:V, reg c28:L, reg stop1:cls, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg encoding1:*, reg encoding2:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg files7:*, reg files8:V, reg length:cls, reg r68:V, reg rep_len:cls, reg r69:V, reg getOption:cls, reg r70:V, reg data_frame:cls, reg character1:cls, reg r71:V, reg p7:p(V +), reg character2:cls, reg r73:V, reg p8:p(V +), reg integer:cls, reg r75:V, reg p9:p(V +), reg integer1:cls, reg r77:V, reg p10:p(V +), reg r79:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg list3:cls, reg r82:V, reg l:*, reg c29:L, reg r84:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r87:V, reg tempfile:cls, reg r88:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg on_exit:cls, reg r91:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r92:V, reg r93:V, reg dictionaries1:*, reg dictionaries2:V, reg length1:cls, reg r94:V, reg c30:L, reg aspell_find_dictionaries:cls, reg dictionaries3:*, reg dictionaries4:V, reg p11:p(V +), reg r96:V, reg paths:*, reg paths1:V, reg r97:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r98:V, reg r99:V, reg ind:*, reg ind1:V, reg any:cls, reg r100:V, reg c31:L, reg warning2:cls, reg gettextf2:cls, reg paste:cls, reg sprintf:cls, reg dictionaries5:*, reg dictionaries6:V, reg c32:L, reg dictionaries8:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg ind2:*, reg ind3:V, reg __6:cls, reg r101:V, reg p12:p(V +), reg r103:V, reg p13:p(V +), reg r105:V, reg p14:p(V +), reg r107:V, reg p15:p(V +), reg r109:V, reg paths2:*, reg paths3:V, reg c33:L, reg paths5:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg ind4:*, reg ind5:V, reg r110:V, reg __7:cls, reg r111:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r112:V, reg r113:V, reg paths6:*, reg paths7:V, reg length2:cls, reg r114:V, reg c34:L, reg unlist:cls, reg lapply:cls, reg paths8:*, reg paths9:V, reg p16:p(V +), reg readRDS:*, reg readRDS1:V, reg p17:p(V +), reg r117:V, reg p18:p(V +), reg r119:V, reg tempfile1:cls, reg r120:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r121:V, reg on_exit1:cls, reg r123:V, reg aspell_write_personal_dictionary_file:cls, reg words:*, reg words1:V, reg p19:p(V +), reg personal:*, reg personal1:V, reg p20:p(V +), reg program5:*, reg program6:V, reg p21:p(V +), reg r127:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r128:V, reg r129:V, reg control1:*, reg control2:V, reg shQuote:cls, reg personal2:*, reg personal3:V, reg p22:p(V +), reg r131:V, reg c35:cls, reg r132:V, reg r133:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r135:V, reg r136:V, reg control3:*, reg control4:V, reg as_character:cls, reg r137:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r138:V, reg r139:V, reg files9:*, reg files10:V, reg names:cls, reg r140:V, reg as_list:cls, reg files11:*, reg files12:V, reg p23:p(V +), reg r142:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r143:V, reg r144:V, reg files13:*, reg files14:V, reg r145:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x:V, reg files15:*, reg files16:V, reg c37:L, reg i6:I, reg files18:V, reg dr18:V, reg dc9:L, reg dx21:V, reg i8:I, reg dx22:V, reg i9:*, reg i10:V, reg __8:cls, reg r146:V, reg files_are_names2:*, reg files_are_names3:V, reg c38:L, reg file:*, reg file1:V, reg i13:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg i16:I, reg r148:V, reg file3:*, reg file4:V, reg inherits1:cls, reg r149:V, reg c39:L, reg file5:*, reg file6:V, reg c40:L, reg i20:I, reg file8:V, reg dr20:V, reg dc10:L, reg dx23:V, reg i22:I, reg dx24:V, reg r150:V, reg i23:I, reg dx25:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r151:V, reg i26:I, reg r152:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r153:V, reg i29:I, reg r154:V, reg file9:*, reg file10:V, reg attr:cls, reg r155:V, reg attr1:cls, reg r156:V, reg c41:L, reg i31:I, reg r158:V, reg dr22:V, reg dc11:L, reg dx26:V, reg i33:I, reg dx27:V, reg r159:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r160:V, reg i36:I, reg r161:V, reg fname:*, reg fname1:V, reg c42:V, reg c43:L, reg fnames:*, reg fnames1:V, reg c44:L, reg i40:I, reg fnames3:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i42:I, reg dx29:V, reg i43:*, reg i44:V, reg __9:cls, reg r162:V, reg i45:I, reg sym29:cls, reg base29:cls, reg guard29:L, reg r163:V, reg i48:I, reg r164:V, reg fname2:*, reg fname3:V, reg c45:V, reg c46:L, reg encoding3:*, reg encoding4:V, reg c47:L, reg i52:I, reg encoding6:V, reg dr26:V, reg dc13:L, reg dx31:V, reg i54:I, reg dx32:V, reg i55:*, reg i56:V, reg __10:cls, reg r165:V, reg verbose:*, reg verbose1:V, reg c48:L, reg message:cls, reg gettextf3:cls, reg fname4:*, reg fname5:V, reg p24:p(V +), reg r167:V, reg p25:p(V +), reg r169:V, reg i59:I, reg sym30:cls, reg base30:cls, reg guard30:L, reg r171:V, reg i62:I, reg r172:V, reg filter25:*, reg filter26:V, reg c49:V, reg c50:L, reg readLines:cls, reg file11:*, reg file12:V, reg p26:p(V +), reg enc:*, reg enc1:V, reg p27:p(V +), reg r175:V, reg i65:I, reg r176:V, reg do_call:cls, reg filter27:*, reg filter28:V, reg p28:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r178:V, reg r179:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r180:V, reg r181:V, reg file13:*, reg file14:V, reg enc2:*, reg enc3:V, reg list4:cls, reg r182:V, reg filter_args:*, reg filter_args1:V, reg c51:cls, reg r183:V, reg p29:p(V +), reg r185:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r186:V, reg i68:I, reg r187:V, reg control5:*, reg control6:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r188:V, reg i71:I, reg r189:V, reg lines:*, reg lines1:V, reg attr2:cls, reg r190:V, reg c52:cls, reg r191:V, reg writeLines:cls, reg paste1:cls, reg lines2:*, reg lines3:V, reg p30:p(V +), reg r193:V, reg p31:p(V +), reg tfile:*, reg tfile1:V, reg p32:p(V +), reg r196:V, reg ___:cls, reg r197:V, reg r198:cls, reg program7:*, reg program8:V, reg p33:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r200:V, reg r201:V, reg control7:*, reg control8:V, reg c53:cls, reg r202:V, reg p34:p(V +), reg tfile2:*, reg tfile3:V, reg p35:p(V +), reg r205:V, reg out:*, reg out1:V, reg c54:L, reg i73:I, reg out3:V, reg dr28:V, reg dc14:L, reg dx33:V, reg i75:I, reg dx34:V, reg r206:V, reg r207:V, reg c55:L, reg stop2:cls, reg gettextf4:cls, reg paste2:cls, reg out4:*, reg out5:V, reg c56:L, reg out7:V, reg dr30:V, reg dc15:L, reg dx35:V, reg dx36:V, reg r208:V, reg p36:p(V +), reg r210:V, reg p37:p(V +), reg r212:V, reg p38:p(V +), reg r214:V, reg i78:I, reg out8:*, reg out9:V, reg c57:L, reg i80:I, reg out11:V, reg dr32:V, reg dc16:L, reg dx37:V, reg i82:I, reg dx38:V, reg r216:V, reg c58:L, reg i84:I, reg dx40:V, reg dr34:V, reg dc17:L, reg dx41:V, reg i86:I, reg dx42:V, reg __11:cls, reg r217:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r218:V, reg i89:I, reg r219:V, reg lines4:*, reg lines5:V, reg r220:V, reg cumsum:cls, reg r221:V, reg r222:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r223:V, reg i92:I, reg r224:V, reg startsWith:cls, reg lines6:*, reg lines7:V, reg p39:p(V +), reg r226:V, reg any1:cls, reg r227:V, reg c59:L, reg strsplit:cls, reg lines8:*, reg lines9:V, reg c60:L, reg lines11:V, reg dr36:V, reg dc18:L, reg dx43:V, reg dx44:V, reg ind6:*, reg ind7:V, reg __12:cls, reg r228:V, reg p40:p(V +), reg r230:V, reg strsplit1:cls, reg sapply:cls, reg info:*, reg info1:V, reg p41:p(V +), reg __13:*, reg __14:V, reg p42:p(V +), reg r233:V, reg p43:p(V +), reg r235:V, reg strsplit2:cls, reg sapply1:cls, reg info2:*, reg info3:V, reg p44:p(V +), reg __15:*, reg __16:V, reg p45:p(V +), reg r238:V, reg p46:p(V +), reg r240:V, reg list2DF:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r241:V, reg r242:V, reg vapply:cls, reg one:*, reg one1:V, reg p47:p(V +), reg __17:*, reg __18:V, reg p48:p(V +), reg r245:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r246:V, reg r247:V, reg fname6:*, reg fname7:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r248:V, reg r249:V, reg one2:*, reg one3:V, reg length3:cls, reg r250:V, reg rep_len1:cls, reg r251:V, reg pos:*, reg pos1:V, reg c61:L, reg pos3:V, reg dr38:V, reg dc19:L, reg dx45:V, reg dx46:V, reg ind8:*, reg ind9:V, reg __19:cls, reg r252:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r253:V, reg r254:V, reg vapply1:cls, reg one4:*, reg one5:V, reg p49:p(V +), reg __20:*, reg __21:V, reg p50:p(V +), reg r257:V, reg as_integer:cls, reg r258:V, reg two:*, reg two1:V, reg list5:cls, reg r259:V, reg p51:p(V +), reg r261:V, reg rbind:cls, reg db:*, reg db1:V, reg p52:p(V +), reg db2:*, reg db3:V, reg p53:p(V +), reg r264:V, reg i95:I, reg sym42:cls, reg base42:cls, reg guard42:L, reg r266:V, reg i98:I, reg r267:V, reg startsWith1:cls, reg lines12:*, reg lines13:V, reg p54:p(V +), reg r269:V, reg any2:cls, reg r270:V, reg c62:L, reg strsplit3:cls, reg lines14:*, reg lines15:V, reg c63:L, reg lines17:V, reg dr40:V, reg dc20:L, reg dx47:V, reg dx48:V, reg ind10:*, reg ind11:V, reg __22:cls, reg r271:V, reg p55:p(V +), reg r273:V, reg list2DF1:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r274:V, reg r275:V, reg vapply2:cls, reg one6:*, reg one7:V, reg p56:p(V +), reg __23:*, reg __24:V, reg p57:p(V +), reg r278:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r279:V, reg r280:V, reg fname8:*, reg fname9:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r281:V, reg r282:V, reg one8:*, reg one9:V, reg length4:cls, reg r283:V, reg rep_len2:cls, reg r284:V, reg pos4:*, reg pos5:V, reg c64:L, reg pos7:V, reg dr42:V, reg dc21:L, reg dx49:V, reg dx50:V, reg ind12:*, reg ind13:V, reg __25:cls, reg r285:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r286:V, reg r287:V, reg vapply3:cls, reg one10:*, reg one11:V, reg p58:p(V +), reg __26:*, reg __27:V, reg p59:p(V +), reg r290:V, reg as_integer1:cls, reg r291:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r292:V, reg r293:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r294:V, reg r295:V, reg one12:*, reg one13:V, reg length5:cls, reg r296:V, reg vector:cls, reg r297:V, reg list6:cls, reg r298:V, reg p60:p(V +), reg r300:V, reg rbind1:cls, reg db4:*, reg db5:V, reg p61:p(V +), reg db6:*, reg db7:V, reg p62:p(V +), reg r303:V, reg i101:I, reg sym49:cls, reg base49:cls, reg guard49:L, reg r305:V, reg r306:V, reg c65:cls, reg r307:V, reg l4:*, reg class__:cls, reg r308:V, reg db8:*, reg db9:V |
    mkenv;
    st files = files;
    st filter = filter;
    control_isMissing = missing.0(control);
    if control_isMissing then L0() else L1(control);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(control_orDefault):
    st control = control_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2("unknown") else L2(encoding);
  L2(encoding_orDefault):
    st encoding = encoding_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L3(NULL) else L3(program);
  L3(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L4() else L5(dictionaries);
  L4():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L5(p1);
  L5(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    aspell_find_program = ldf aspell_find_program;
    check L94() else D0();
  D0():
    deopt 1 [];
  L94():
    p2 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r7 = dyn aspell_find_program(p2);
    check L95() else D1();
  D1():
    deopt 3 [r7];
  L95():
    st program = r7;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L6(r9):
    c = `as.logical`(r9);
    if c then L100() else L7();
  L96():
    program3 = ld program;
    check L98() else D2();
  L97():
    r8 = dyn base1(<sym program>);
    goto L6(r8);
  D2():
    deopt 7 [program3];
  L7():
    goto L8();
  L8():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L104() else L105();
  L98():
    program4 = force? program3;
    checkMissing(program4);
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(program4);
    check L99() else D3();
  L100():
    stop = ldf stop;
    check L101() else D4();
  D3():
    deopt 10 [r10];
  D4():
    deopt 12 [];
  L9(r14):
    c1 = `as.logical`(r14);
    if c1 then L108() else L10();
  L99():
    goto L6(r10);
  L101():
    r11 = dyn stop("No suitable spell-checker program found");
    check L102() else D5();
  L104():
    files1 = ld files;
    check L106() else D6();
  L105():
    r13 = dyn base2(<sym files>, "Rd");
    goto L9(r13);
  D5():
    deopt 14 [r11];
  D6():
    deopt 19 [files1];
  L10():
    goto L12();
  L12():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L114() else L115();
  L102():
    goto L8();
  L106():
    files2 = force? files1;
    checkMissing(files2);
    inherits = ldf inherits in base;
    r15 = dyn inherits(files2, "Rd", FALSE);
    check L107() else D7();
  L108():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L109() else L110();
  D7():
    deopt 24 [r15];
  L11(r17):
    st files = r17;
    goto L12();
  L13(r21):
    st files_are_names = r21;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L117() else L118();
  L107():
    goto L9(r15);
  L109():
    files3 = ld files;
    check L111() else D8();
  L110():
    r16 = dyn base3(<sym files>);
    goto L11(r16);
  L114():
    files5 = ld files;
    check L116() else D10();
  L115():
    r20 = dyn base4(<sym files>);
    goto L13(r20);
  D8():
    deopt 27 [files3];
  D10():
    deopt 35 [files5];
  L14(r23):
    st filter_args = r23;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  L111():
    files4 = force? files3;
    checkMissing(files4);
    list1 = ldf list in base;
    r18 = dyn list1(files4);
    check L112() else D9();
  L116():
    files6 = force? files5;
    checkMissing(files6);
    c2 = `is.character`(files6);
    goto L13(c2);
  L117():
    list2 = ldf list in base;
    r24 = dyn list2();
    check L119() else D11();
  L118():
    r22 = dyn base5();
    goto L14(r22);
  D9():
    deopt 30 [r18];
  D11():
    deopt 42 [r24];
  L15(r26):
    c3 = `as.logical`(r26);
    if c3 then L16(c3) else L122();
  L112():
    goto L11(r18);
  L119():
    goto L14(r24);
  L120():
    missing = ldf missing in base;
    r27 = dyn missing(<sym filter>);
    goto L15(r27);
  L121():
    r25 = dyn base6(<sym filter>);
    goto L15(r25);
  L16(c4):
    c13 = `as.logical`(c4);
    if c13 then L127() else L18();
  L122():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L123() else L124();
  L17(c8, r29):
    c10 = `as.logical`(r29);
    c11 = `||`(c8, c10);
    goto L16(c11);
  L18():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L132() else L133();
  L21():
    sym13 = ldf rep_len;
    base13 = ldf rep_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L190() else L191();
  L123():
    filter1 = ld filter;
    check L125() else D12();
  L124():
    r28 = dyn base7(<sym filter>);
    goto L17(c3, r28);
  L127():
    files_are_names = ld files_are_names;
    check L128() else D13();
  D12():
    deopt 48 [c3, filter1];
  D13():
    deopt 52 [files_are_names];
  L22(r35):
    c16 = `as.logical`(r35);
    if c16 then L135() else L23();
  L40(r65):
    st encoding = r65;
    getOption = ldf getOption;
    check L198() else D38();
  L125():
    filter2 = force? filter1;
    checkMissing(filter2);
    c9 = `==`(filter2, NULL);
    goto L17(c3, c9);
  L128():
    files_are_names1 = force? files_are_names;
    checkMissing(files_are_names1);
    r30 = `!`(files_are_names1);
    c14 = `as.logical`(r30);
    if c14 then L129() else L19();
  L132():
    filter3 = ld filter;
    check L134() else D14();
  L133():
    r34 = dyn base8(<sym filter>);
    goto L22(r34);
  L190():
    encoding1 = ld encoding;
    check L192() else D34();
  L191():
    r64 = dyn base13(<sym encoding>, <lang length(files)>);
    goto L40(r64);
  D14():
    deopt 61 [filter3];
  D34():
    deopt 142 [encoding1];
  D38():
    deopt 154 [];
  L19():
    goto L20(NULL);
  L20(r32):
    st filter = r32;
    goto L21();
  L23():
    sym10 = ldf `is.list`;
    base10 = ldf `is.list` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L153() else L154();
  L129():
    r31 = clos inner3861840104;
    goto L20(r31);
  L134():
    filter4 = force? filter3;
    checkMissing(filter4);
    c15 = `is.character`(filter4);
    goto L22(c15);
  L135():
    filter5 = ld filter;
    check L136() else D15();
  L192():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L193() else L194();
  L198():
    r70 = dyn getOption("verbose");
    check L199() else D39();
  D15():
    deopt 64 [filter5];
  D39():
    deopt 156 [r70];
  L29(r46):
    c21 = `as.logical`(r46);
    if c21 then L157() else L30();
  L41(r67):
    rep_len = ldf rep_len in base;
    r69 = dyn rep_len(encoding2, r67);
    check L197() else D37();
  L136():
    filter6 = force? filter5;
    checkMissing(filter6);
    c17 = `is.object`(filter6);
    if c17 then L137() else L138(filter6);
  L153():
    filter11 = ld filter;
    check L155() else D21();
  L154():
    r45 = dyn base10(<sym filter>);
    goto L29(r45);
  L193():
    files7 = ld files;
    check L195() else D35();
  L194():
    r66 = dyn base14(<sym files>);
    goto L41(r66);
  L199():
    st verbose = r70;
    data_frame = ldf `data.frame`;
    check L200() else D40();
  D21():
    deopt 90 [filter11];
  D35():
    deopt 146 [files7];
  D37():
    deopt 151 [r69];
  D40():
    deopt 159 [];
  L24(dx1):
    st filter_name = dx1;
    aspell_filter_db = ld aspell_filter_db;
    check L140() else D16();
  L30():
    sym12 = ldf `is.function`;
    base12 = ldf `is.function` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L182() else L183();
  L137():
    dr = tryDispatchBuiltin.1("[", filter6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L139() else L138(dr);
  L138(filter8):
    __ = ldf `[` in base;
    r36 = dyn __(filter8, 1);
    goto L24(r36);
  L155():
    filter12 = force? filter11;
    checkMissing(filter12);
    is_list = ldf `is.list` in base;
    r47 = dyn is_list(filter12);
    check L156() else D22();
  L157():
    filter13 = ld filter;
    check L158() else D23();
  L195():
    files8 = force? files7;
    checkMissing(files8);
    length = ldf length in base;
    r68 = dyn length(files8);
    check L196() else D36();
  L197():
    goto L40(r69);
  L200():
    p7 = prom<V +>{
      character1 = ldf character;
      r71 = dyn character1();
      return r71;
    };
    p8 = prom<V +>{
      character2 = ldf character;
      r73 = dyn character2();
      return r73;
    };
    p9 = prom<V +>{
      integer = ldf integer;
      r75 = dyn integer();
      return r75;
    };
    p10 = prom<V +>{
      integer1 = ldf integer;
      r77 = dyn integer1();
      return r77;
    };
    r79 = dyn data_frame[Original, File, Line, Column, stringsAsFactors](p7, p8, p9, p10, FALSE);
    check L201() else D41();
  D16():
    deopt 70 [aspell_filter_db];
  D22():
    deopt 93 [r47];
  D23():
    deopt 94 [filter13];
  D36():
    deopt 149 [r68];
  D41():
    deopt 170 [r79];
  L38(r60):
    r62 = `!`(r60);
    c28 = `as.logical`(r62);
    if c28 then L186() else L39();
  L139():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L140():
    aspell_filter_db1 = force? aspell_filter_db;
    checkMissing(aspell_filter_db1);
    c18 = `is.object`(aspell_filter_db1);
    if c18 then L141() else L142(aspell_filter_db1);
  L156():
    goto L29(r47);
  L158():
    filter14 = force? filter13;
    checkMissing(filter14);
    c22 = `is.object`(filter14);
    if c22 then L159() else L160(filter14);
  L182():
    filter23 = ld filter;
    check L184() else D30();
  L183():
    r59 = dyn base12(<sym filter>);
    goto L38(r59);
  L196():
    goto L41(r68);
  L201():
    st db = r79;
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L202() else L203();
  D30():
    deopt 129 [filter23];
  L25(dx3):
    st filter = dx3;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L145() else L146();
  L31(dx5):
    c23 = `is.object`(dx5);
    if c23 then L162() else L163(dx5);
  L39():
    goto L21();
  L42(r81):
    l = ld db;
    c29 = `is.object`(l);
    if c29 then L206() else L207(r81, l);
  L141():
    dr2 = tryDispatchBuiltin.1("[[", aspell_filter_db1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L143() else L142(dr2);
  L142(aspell_filter_db3):
    filter_name = ld filter_name;
    check L144() else D17();
  L159():
    dr4 = tryDispatchBuiltin.1("[[", filter14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L161() else L160(dr4);
  L160(filter16):
    __2 = ldf `[[` in base;
    r48 = dyn __2(filter16, 1);
    goto L31(r48);
  L184():
    filter24 = force? filter23;
    checkMissing(filter24);
    is_function = ldf `is.function` in base;
    r61 = dyn is_function(filter24);
    check L185() else D31();
  L186():
    stop1 = ldf stop;
    check L187() else D32();
  L202():
    list3 = ldf list in base;
    r82 = dyn list3();
    check L204() else D42();
  L203():
    r80 = dyn base15();
    goto L42(r80);
  D17():
    deopt 72 [aspell_filter_db3, filter_name];
  D31():
    deopt 132 [r61];
  D32():
    deopt 135 [];
  D42():
    deopt 175 [r82];
  L26(r39):
    c20 = `as.logical`(r39);
    if c20 then L148() else L27();
  L32(dx9):
    st filter_name = dx9;
    filter17 = ld filter;
    check L165() else D24();
  L143():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L144():
    filter_name1 = force? filter_name;
    __1 = ldf `[[` in base;
    r37 = dyn __1(aspell_filter_db3, filter_name1);
    goto L25(r37);
  L145():
    filter9 = ld filter;
    check L147() else D18();
  L146():
    r38 = dyn base9(<sym filter>);
    goto L26(r38);
  L161():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L162():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L164() else L163(dr6);
  L163(dx7):
    __3 = ldf `[` in base;
    r49 = dyn __3(dx7, 1);
    goto L32(r49);
  L185():
    goto L38(r61);
  L187():
    r63 = dyn stop1("Invalid 'filter' argument.");
    check L188() else D33();
  L204():
    goto L42(r82);
  L205(dx15):
    st db = dx15;
    tempfile = ldf tempfile;
    check L209() else D43();
  L206():
    dr12 = tryDispatchBuiltin.0("$<-", l, r81);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L208() else L207(r81, dr12);
  L207(r84, l2):
    r87 = `$<-`(l2, <sym Suggestions>, r81);
    goto L205(r87);
  D18():
    deopt 77 [filter9];
  D24():
    deopt 103 [filter17];
  D33():
    deopt 137 [r63];
  D43():
    deopt 180 [];
  L27():
    goto L28(NULL);
  L28(r44):
    goto L21();
  L147():
    filter10 = force? filter9;
    checkMissing(filter10);
    c19 = `==`(filter10, NULL);
    goto L26(c19);
  L148():
    warning = ldf warning;
    check L149() else D19();
  L164():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx8);
  L165():
    filter18 = force? filter17;
    checkMissing(filter18);
    c24 = `is.object`(filter18);
    if c24 then L166() else L167(filter18);
  L188():
    goto L21();
  L208():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L205(dx14);
  L209():
    r88 = dyn tempfile("aspell");
    check L210() else D44();
  D19():
    deopt 81 [];
  D44():
    deopt 182 [r88];
  L33(dx11):
    st filter_args = dx11;
    aspell_filter_db4 = ld aspell_filter_db;
    check L169() else D25();
  L149():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        filter_name2 = ld filter_name;
        filter_name3 = force? filter_name2;
        checkMissing(filter_name3);
        return filter_name3;
      };
      r41 = dyn gettextf("Filter '%s' is not available.", p3);
      return r41;
    };
    r43 = dyn warning[, domain](p4, NA_LGL);
    check L150() else D20();
  L166():
    dr8 = tryDispatchBuiltin.1("[", filter18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L168() else L167(dr8);
  L167(filter20):
    __4 = ldf `[` in base;
    r50 = dyn __4(filter20, -1);
    goto L33(r50);
  L210():
    st tfile = r88;
    sym16 = ldf `on.exit`;
    base16 = ldf `on.exit` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L211() else L212();
  D20():
    deopt 85 [r43];
  D25():
    deopt 109 [aspell_filter_db4];
  L43():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L213() else L214();
  L150():
    goto L28(r43);
  L168():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L33(dx10);
  L169():
    aspell_filter_db5 = force? aspell_filter_db4;
    checkMissing(aspell_filter_db5);
    c25 = `is.object`(aspell_filter_db5);
    if c25 then L170() else L171(aspell_filter_db5);
  L211():
    on_exit = ldf `on.exit` in base;
    r91 = dyn on_exit(<lang unlink(tfile)>);
    goto L43();
  L212():
    r89 = dyn base16(<lang unlink(tfile)>);
    goto L43();
  L34(dx13):
    st filter = dx13;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L174() else L175();
  L44(r93):
    c30 = `as.logical`(r93);
    if c30 then L217() else L45();
  L170():
    dr10 = tryDispatchBuiltin.1("[[", aspell_filter_db5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L172() else L171(dr10);
  L171(aspell_filter_db7):
    filter_name4 = ld filter_name;
    check L173() else D26();
  L213():
    dictionaries1 = ld dictionaries;
    check L215() else D45();
  L214():
    r92 = dyn base17(<sym dictionaries>);
    goto L44(r92);
  D26():
    deopt 111 [aspell_filter_db7, filter_name4];
  D45():
    deopt 189 [dictionaries1];
  L35(r53):
    c27 = `as.logical`(r53);
    if c27 then L177() else L36();
  L45():
    goto L55();
  L55():
    sym22 = ldf `as.character`;
    base22 = ldf `as.character` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L255() else L256();
  L172():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L34(dx12);
  L173():
    filter_name5 = force? filter_name4;
    __5 = ldf `[[` in base;
    r51 = dyn __5(aspell_filter_db7, filter_name5);
    goto L34(r51);
  L174():
    filter21 = ld filter;
    check L176() else D27();
  L175():
    r52 = dyn base11(<sym filter>);
    goto L35(r52);
  L215():
    dictionaries2 = force? dictionaries1;
    checkMissing(dictionaries2);
    length1 = ldf length in base;
    r94 = dyn length1(dictionaries2);
    check L216() else D46();
  L217():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L218() else D47();
  D27():
    deopt 116 [filter21];
  D46():
    deopt 192 [r94];
  D47():
    deopt 194 [];
  L36():
    goto L37(NULL);
  L37(r58):
    goto L21();
  L56(r136):
    st control = r136;
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L259() else L260();
  L176():
    filter22 = force? filter21;
    checkMissing(filter22);
    c26 = `==`(filter22, NULL);
    goto L35(c26);
  L177():
    warning1 = ldf warning;
    check L178() else D28();
  L216():
    goto L44(r94);
  L218():
    p11 = prom<V +>{
      dictionaries3 = ld dictionaries;
      dictionaries4 = force? dictionaries3;
      checkMissing(dictionaries4);
      return dictionaries4;
    };
    r96 = dyn aspell_find_dictionaries(p11);
    check L219() else D48();
  L255():
    control3 = ld control;
    check L257() else D68();
  L256():
    r135 = dyn base22(<sym control>);
    goto L56(r135);
  D28():
    deopt 120 [];
  D48():
    deopt 196 [r96];
  D68():
    deopt 270 [control3];
  L57(r139):
    st fnames = r139;
    as_list = ldf `as.list`;
    check L263() else D72();
  L178():
    p6 = prom<V +>{
      gettextf1 = ldf gettextf;
      p5 = prom<V +>{
        filter_name6 = ld filter_name;
        filter_name7 = force? filter_name6;
        checkMissing(filter_name7);
        return filter_name7;
      };
      r55 = dyn gettextf1("Filter '%s' is not available.", p5);
      return r55;
    };
    r57 = dyn warning1[, domain](p6, NA_LGL);
    check L179() else D29();
  L219():
    st paths = r96;
    paths = ld paths;
    check L220() else D49();
  L257():
    control4 = force? control3;
    checkMissing(control4);
    as_character = ldf `as.character` in base;
    r137 = dyn as_character(control4);
    check L258() else D69();
  L259():
    files9 = ld files;
    check L261() else D70();
  L260():
    r138 = dyn base23(<sym files>);
    goto L57(r138);
  D29():
    deopt 124 [r57];
  D49():
    deopt 198 [paths];
  D69():
    deopt 273 [r137];
  D70():
    deopt 277 [files9];
  D72():
    deopt 283 [];
  L179():
    goto L37(r57);
  L220():
    paths1 = force? paths;
    checkMissing(paths1);
    r97 = `==`(paths1, "");
    st ind = r97;
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L221() else L222();
  L258():
    goto L56(r137);
  L261():
    files10 = force? files9;
    checkMissing(files10);
    names = ldf names in base;
    r140 = dyn names(files10);
    check L262() else D71();
  L263():
    p23 = prom<V +>{
      files11 = ld files;
      files12 = force? files11;
      checkMissing(files12);
      return files12;
    };
    r142 = dyn as_list(p23);
    check L264() else D73();
  D71():
    deopt 280 [r140];
  D73():
    deopt 285 [r142];
  L46(r99):
    c31 = `as.logical`(r99);
    if c31 then L225() else L47();
  L221():
    ind = ld ind;
    check L223() else D50();
  L222():
    r98 = dyn base18(<sym ind>);
    goto L46(r98);
  L262():
    goto L57(r140);
  L264():
    st files = r142;
    sym24 = ldf seq_along;
    base24 = ldf seq_along in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L265() else L266();
  D50():
    deopt 205 [ind];
  L47():
    goto L49();
  L49():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L234() else L235();
  L58(r144):
    s = toForSeq(r144);
    l3 = length(s);
    i = 0;
    goto L59(i);
  L223():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r100 = dyn any(ind1);
    check L224() else D51();
  L225():
    warning2 = ldf warning;
    check L226() else D52();
  L265():
    files13 = ld files;
    check L267() else D74();
  L266():
    r143 = dyn base24(<sym files>);
    goto L58(r143);
  D51():
    deopt 208 [r100];
  D52():
    deopt 210 [];
  D74():
    deopt 288 [files13];
  L50(r113):
    c34 = `as.logical`(r113);
    if c34 then L238() else L51();
  L59(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l3, i2);
    if c36 then L268() else L92();
  L224():
    goto L46(r100);
  L226():
    p15 = prom<V +>{
      gettextf2 = ldf gettextf;
      p14 = prom<V +>{
        paste = ldf paste;
        p13 = prom<V +>{
          sprintf = ldf sprintf;
          p12 = prom<V +>{
            dictionaries5 = ld dictionaries;
            dictionaries6 = force? dictionaries5;
            checkMissing(dictionaries6);
            c32 = `is.object`(dictionaries6);
            if c32 then L1() else L2(dictionaries6);
          L0(dx17):
            return dx17;
          L1():
            dr14 = tryDispatchBuiltin.1("[", dictionaries6);
            dc7 = getTryDispatchBuiltinDispatched(dr14);
            if dc7 then L3() else L2(dr14);
          L2(dictionaries8):
            ind2 = ld ind;
            ind3 = force? ind2;
            __6 = ldf `[` in base;
            r101 = dyn __6(dictionaries8, ind3);
            goto L0(r101);
          L3():
            dx16 = getTryDispatchBuiltinValue(dr14);
            goto L0(dx16);
          };
          r103 = dyn sprintf("  %s", p12);
          return r103;
        };
        r105 = dyn paste[, collapse](p13, "\n");
        return r105;
      };
      r107 = dyn gettextf2("The following dictionaries were not found:\n%s", p14);
      return r107;
    };
    r109 = dyn warning2[, domain](p15, NA_LGL);
    check L227() else D53();
  L234():
    paths6 = ld paths;
    check L236() else D56();
  L235():
    r112 = dyn base19(<sym paths>);
    goto L50(r112);
  L267():
    files14 = force? files13;
    checkMissing(files14);
    r145 = seq_along(files14);
    goto L58(r145);
  D53():
    deopt 214 [r109];
  D56():
    deopt 226 [paths6];
  L51():
    goto L54(NULL);
  L54(r133):
    goto L55();
  L92():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    files15 = ld files;
    check L269() else D75();
  L227():
    paths2 = ld paths;
    check L228() else D54();
  L236():
    paths7 = force? paths6;
    checkMissing(paths7);
    length2 = ldf length in base;
    r114 = dyn length2(paths7);
    check L237() else D57();
  L238():
    unlist = ldf unlist;
    check L239() else D58();
  L268():
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L398() else L399();
  D54():
    deopt 215 [paths2];
  D57():
    deopt 229 [r114];
  D58():
    deopt 231 [];
  D75():
    deopt 291 [i2, files15];
  L93(r306):
    l4 = ld db;
    class__ = ldf `class<-`;
    check L401() else D137();
  L228():
    paths3 = force? paths2;
    checkMissing(paths3);
    c33 = `is.object`(paths3);
    if c33 then L229() else L230(paths3);
  L237():
    goto L50(r114);
  L239():
    p18 = prom<V +>{
      lapply = ldf lapply;
      p16 = prom<V +>{
        paths8 = ld paths;
        paths9 = force? paths8;
        checkMissing(paths9);
        return paths9;
      };
      p17 = prom<V +>{
        readRDS = ld readRDS;
        readRDS1 = force? readRDS;
        checkMissing(readRDS1);
        return readRDS1;
      };
      r117 = dyn lapply(p16, p17);
      return r117;
    };
    r119 = dyn unlist[, `use.names`](p18, FALSE);
    check L240() else D59();
  L269():
    files16 = force? files15;
    checkMissing(files16);
    c37 = `is.object`(files16);
    if c37 then L270() else L271(i2, files16);
  L398():
    c65 = ldf c in base;
    r307 = dyn c65("aspell", "data.frame");
    check L400() else D136();
  L399():
    r305 = dyn base49("aspell", "data.frame");
    goto L93(r305);
  D59():
    deopt 235 [r119];
  D136():
    deopt 530 [r307];
  D137():
    deopt 532 [r306, l4, r306];
  L48(dx19):
    st paths = dx19;
    goto L49();
  L60(i8, dx22):
    st file = dx22;
    files_are_names2 = ld files_are_names;
    check L274() else D77();
  L229():
    dr16 = tryDispatchBuiltin.1("[", paths3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L231() else L230(dr16);
  L230(paths5):
    ind4 = ld ind;
    check L232() else D55();
  L240():
    st words = r119;
    tempfile1 = ldf tempfile;
    check L241() else D60();
  L270():
    dr18 = tryDispatchBuiltin.1("[[", files16);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L272() else L271(i2, dr18);
  L271(i6, files18):
    i9 = ld i;
    check L273() else D76();
  L400():
    goto L93(r307);
  L401():
    r308 = dyn class__(l4, NULL, r306);
    check L402() else D138();
  D55():
    deopt 217 [paths5, ind4];
  D60():
    deopt 238 [];
  D76():
    deopt 293 [i6, files18, i9];
  D77():
    deopt 297 [i8, files_are_names2];
  D138():
    deopt 534 [r306, r308];
  L231():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L48(dx18);
  L232():
    ind5 = force? ind4;
    checkMissing(ind5);
    r110 = `!`(ind5);
    __7 = ldf `[` in base;
    r111 = dyn __7(paths5, r110);
    goto L48(r111);
  L241():
    r120 = dyn tempfile1("aspell_personal");
    check L242() else D61();
  L272():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L60(i2, dx21);
  L273():
    i10 = force? i9;
    __8 = ldf `[[` in base;
    r146 = dyn __8(files18, i10);
    goto L60(i6, r146);
  L274():
    files_are_names3 = force? files_are_names2;
    checkMissing(files_are_names3);
    c38 = `as.logical`(files_are_names3);
    if c38 then L275() else L61();
  L402():
    st db = r308;
    db8 = ld db;
    check L403() else D139();
  D61():
    deopt 240 [r120];
  D139():
    deopt 536 [db8];
  L61():
    sym25 = ldf inherits;
    base25 = ldf inherits in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L278() else L279();
  L62(i13):
    encoding3 = ld encoding;
    check L315() else D89();
  L242():
    st personal = r120;
    sym20 = ldf `on.exit`;
    base20 = ldf `on.exit` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L243() else L244();
  L275():
    file = ld file;
    check L276() else D78();
  L403():
    db9 = force? db8;
    checkMissing(db9);
    popenv;
    return db9;
  D78():
    deopt 299 [i8, file];
  D89():
    deopt 348 [i13, encoding3];
  L52():
    aspell_write_personal_dictionary_file = ldf aspell_write_personal_dictionary_file;
    check L245() else D62();
  L63(i16, r148):
    c39 = `as.logical`(r148);
    if c39 then L282() else L64();
  L243():
    on_exit1 = ldf `on.exit` in base;
    r123 = dyn on_exit1(<lang unlink(personal)>, TRUE);
    goto L52();
  L244():
    r121 = dyn base20[, add](<lang unlink(personal)>, TRUE);
    goto L52();
  L276():
    file1 = force? file;
    checkMissing(file1);
    st fname = file1;
    goto L62(i8);
  L278():
    file3 = ld file;
    check L280() else D79();
  L279():
    r147 = dyn base25(<sym file>, "srcfile");
    goto L63(i8, r147);
  L315():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    c47 = `is.object`(encoding4);
    if c47 then L316() else L317(i13, encoding4);
  D62():
    deopt 246 [];
  D79():
    deopt 304 [i8, file3];
  L64():
    sym26 = ldf attr;
    base26 = ldf attr in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L289() else L290();
  L65(i23, dx25):
    st fname = dx25;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L300() else L301();
  L74(i54, dx32):
    st enc = dx32;
    verbose = ld verbose;
    check L320() else D91();
  L245():
    p19 = prom<V +>{
      words = ld words;
      words1 = force? words;
      checkMissing(words1);
      return words1;
    };
    p20 = prom<V +>{
      personal = ld personal;
      personal1 = force? personal;
      checkMissing(personal1);
      return personal1;
    };
    p21 = prom<V +>{
      program5 = ld program;
      program6 = force? program5;
      checkMissing(program6);
      return program6;
    };
    r127 = dyn aspell_write_personal_dictionary_file[, , program](p19, p20, p21);
    check L246() else D63();
  L280():
    file4 = force? file3;
    checkMissing(file4);
    inherits1 = ldf inherits in base;
    r149 = dyn inherits1(file4, "srcfile", FALSE);
    check L281() else D80();
  L282():
    file5 = ld file;
    check L283() else D81();
  L316():
    dr26 = tryDispatchBuiltin.1("[", encoding4);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L318() else L317(i13, dr26);
  L317(i52, encoding6):
    i55 = ld i;
    check L319() else D90();
  D63():
    deopt 251 [r127];
  D80():
    deopt 309 [i8, r149];
  D81():
    deopt 310 [i16, file5];
  D90():
    deopt 350 [i52, encoding6, i55];
  D91():
    deopt 354 [i54, verbose];
  L66(i26, r152):
    c41 = `is.object`(r152);
    if c41 then L297() else L298(i26, r152);
  L68(i36, r161):
    c43 = `as.logical`(r161);
    if c43 then L303() else L69();
  L246():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L247() else L248();
  L281():
    goto L63(i8, r149);
  L283():
    file6 = force? file5;
    checkMissing(file6);
    c40 = `is.object`(file6);
    if c40 then L285() else L286(i16, file6);
  L289():
    sym27 = ldf attr;
    base27 = ldf attr in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L291() else L292();
  L290():
    r151 = dyn base26(<lang attr(file, "srcref")>, "srcfile");
    goto L66(i16, r151);
  L300():
    fname = ld fname;
    check L302() else D85();
  L301():
    r160 = dyn base28(<sym fname>);
    goto L68(i23, r160);
  L318():
    dx31 = getTryDispatchBuiltinValue(dr26);
    goto L74(i13, dx31);
  L319():
    i56 = force? i55;
    __10 = ldf `[` in base;
    r165 = dyn __10(encoding6, i56);
    goto L74(i52, r165);
  L320():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c48 = `as.logical`(verbose1);
    if c48 then L321() else L75();
  D85():
    deopt 328 [i23, fname];
  L53(r129):
    st control = r129;
    goto L54(r129);
  L67(i29, r154):
    attr1 = ldf attr in base;
    r156 = dyn attr1(r154, "srcfile");
    check L295() else D84();
  L69():
    goto L71(i36);
  L71(i45):
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L310() else L311();
  L75():
    goto L76(i54);
  L76(i59):
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L325() else L326();
  L247():
    control1 = ld control;
    check L249() else D64();
  L248():
    r128 = dyn base21(<sym control>, "-p", <lang shQuote(personal)>);
    goto L53(r128);
  L284(i22, dx24):
    goto L65(i22, dx24);
  L285():
    dr20 = tryDispatchBuiltin.1("$", file6);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L287() else L286(i16, dr20);
  L286(i20, file8):
    r150 = `$`(file8, <sym filename>);
    goto L284(i20, r150);
  L291():
    file9 = ld file;
    check L293() else D82();
  L292():
    r153 = dyn base27(<sym file>, "srcref");
    goto L67(i16, r153);
  L296(i33, dx27):
    goto L65(i33, dx27);
  L297():
    dr22 = tryDispatchBuiltin.1("$", r152);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L299() else L298(i26, dr22);
  L298(i31, r158):
    r159 = `$`(r158, <sym filename>);
    goto L296(i31, r159);
  L302():
    fname1 = force? fname;
    checkMissing(fname1);
    c42 = `==`(fname1, NULL);
    goto L68(i23, c42);
  L303():
    fnames = ld fnames;
    check L304() else D86();
  L321():
    message = ldf message;
    check L322() else D92();
  D64():
    deopt 254 [control1];
  D82():
    deopt 317 [i16, file9];
  D84():
    deopt 324 [i29, r156];
  D86():
    deopt 331 [i36, fnames];
  D92():
    deopt 357 [i54];
  L72(i48, r164):
    c46 = `as.logical`(r164);
    if c46 then L313() else L73();
  L77(i62, r172):
    c50 = `as.logical`(r172);
    if c50 then L328() else L78();
  L249():
    control2 = force? control1;
    checkMissing(control2);
    shQuote = ldf shQuote;
    check L250() else D65();
  L287():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L284(i16, dx23);
  L293():
    file10 = force? file9;
    checkMissing(file10);
    attr = ldf attr in base;
    r155 = dyn attr(file10, "srcref");
    check L294() else D83();
  L295():
    goto L66(i29, r156);
  L299():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L296(i26, dx26);
  L304():
    fnames1 = force? fnames;
    checkMissing(fnames1);
    c44 = `is.object`(fnames1);
    if c44 then L305() else L306(i36, fnames1);
  L310():
    fname2 = ld fname;
    check L312() else D88();
  L311():
    r163 = dyn base29(<sym fname>);
    goto L72(i45, r163);
  L322():
    p25 = prom<V +>{
      gettextf3 = ldf gettextf;
      p24 = prom<V +>{
        fname4 = ld fname;
        fname5 = force? fname4;
        checkMissing(fname5);
        return fname5;
      };
      r167 = dyn gettextf3("Processing file %s", p24);
      return r167;
    };
    r169 = dyn message[, domain](p25, NA_LGL);
    check L323() else D93();
  L325():
    filter25 = ld filter;
    check L327() else D94();
  L326():
    r171 = dyn base30(<sym filter>);
    goto L77(i59, r171);
  D65():
    deopt 258 [];
  D83():
    deopt 321 [i16, r155];
  D88():
    deopt 340 [i45, fname2];
  D93():
    deopt 361 [i54, r169];
  D94():
    deopt 365 [i59, filter25];
  L70(i42, dx29):
    st fname = dx29;
    goto L71(i42);
  L73():
    goto L62(i48);
  L78():
    do_call = ldf `do.call`;
    check L332() else D97();
  L79(i65, r176):
    st lines = r176;
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L334() else L335();
  L250():
    p22 = prom<V +>{
      personal2 = ld personal;
      personal3 = force? personal2;
      checkMissing(personal3);
      return personal3;
    };
    r131 = dyn shQuote(p22);
    check L251() else D66();
  L294():
    goto L67(i16, r155);
  L305():
    dr24 = tryDispatchBuiltin.1("[", fnames1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L307() else L306(i36, dr24);
  L306(i40, fnames3):
    i43 = ld i;
    check L308() else D87();
  L312():
    fname3 = force? fname2;
    checkMissing(fname3);
    c45 = `==`(fname3, NULL);
    goto L72(i45, c45);
  L313():
    st fname = "<unknown>";
    goto L62(i48);
  L323():
    goto L76(i54);
  L327():
    filter26 = force? filter25;
    checkMissing(filter26);
    c49 = `==`(filter26, NULL);
    goto L77(i59, c49);
  L328():
    readLines = ldf readLines;
    check L329() else D95();
  D66():
    deopt 260 [r131];
  D87():
    deopt 333 [i40, fnames3, i43];
  D95():
    deopt 369 [i62];
  D97():
    deopt 377 [i62];
  L80(i68, r187):
    st control = r187;
    writeLines = ldf writeLines;
    check L342() else D103();
  L251():
    c35 = ldf c in base;
    r132 = dyn c35(control2, "-p", r131);
    check L252() else D67();
  L307():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L70(i36, dx28);
  L308():
    i44 = force? i43;
    __9 = ldf `[` in base;
    r162 = dyn __9(fnames3, i44);
    goto L70(i40, r162);
  L329():
    p26 = prom<V +>{
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    p27 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r175 = dyn readLines[, encoding, warn](p26, p27, FALSE);
    check L330() else D96();
  L332():
    p28 = prom<V +>{
      filter27 = ld filter;
      filter28 = force? filter27;
      checkMissing(filter28);
      return filter28;
    };
    p29 = prom<V +>{
      sym31 = ldf c;
      base31 = ldf c in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L2() else L3();
    L0(r179):
      return r179;
    L2():
      sym32 = ldf list;
      base32 = ldf list in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L4() else L5();
    L3():
      r178 = dyn base31(<lang list(file, encoding=enc)>, <sym filter_args>);
      goto L0(r178);
    L1(r181):
      filter_args = ld filter_args;
      filter_args1 = force? filter_args;
      checkMissing(filter_args1);
      c51 = ldf c in base;
      r183 = dyn c51(r181, filter_args1);
      goto L0(r183);
    L4():
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      list4 = ldf list in base;
      r182 = dyn list4(file14, enc3);
      goto L1(r182);
    L5():
      r180 = dyn base32[, encoding](<sym file>, <sym enc>);
      goto L1(r180);
    };
    r185 = dyn do_call(p28, p29);
    check L333() else D98();
  L334():
    control5 = ld control;
    check L336() else D99();
  L335():
    r186 = dyn base33(<sym control>, <lang attr(lines, "control")>);
    goto L80(i65, r186);
  D67():
    deopt 262 [r132];
  D96():
    deopt 375 [i62, r175];
  D98():
    deopt 380 [i62, r185];
  D99():
    deopt 384 [i65, control5];
  D103():
    deopt 397 [i68];
  L252():
    goto L53(r132);
  L330():
    goto L79(i62, r175);
  L333():
    goto L79(i62, r185);
  L336():
    control6 = force? control5;
    checkMissing(control6);
    sym34 = ldf attr;
    base34 = ldf attr in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L337() else L338();
  L342():
    p31 = prom<V +>{
      paste1 = ldf paste0;
      p30 = prom<V +>{
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        return lines3;
      };
      r193 = dyn paste1("^", p30);
      return r193;
    };
    p32 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r196 = dyn writeLines(p31, p32);
    check L343() else D104();
  D104():
    deopt 400 [i68, r196];
  L81(i71, r189):
    c52 = ldf c in base;
    r191 = dyn c52(control6, r189);
    check L341() else D102();
  L337():
    lines = ld lines;
    check L339() else D100();
  L338():
    r188 = dyn base34(<sym lines>, "control");
    goto L81(i65, r188);
  L343():
    ___ = ldf `:::`;
    check L344() else D105();
  D100():
    deopt 388 [i65, lines];
  D102():
    deopt 394 [i71, r191];
  D105():
    deopt 402 [i68];
  L339():
    lines1 = force? lines;
    checkMissing(lines1);
    attr2 = ldf attr in base;
    r190 = dyn attr2(lines1, "control");
    check L340() else D101();
  L341():
    goto L80(i71, r191);
  L344():
    r197 = dyn ___("tools", ".system_with_capture");
    check L345() else D106();
  D101():
    deopt 392 [i65, r190];
  D106():
    deopt 405 [i68, r197];
  L340():
    goto L81(i65, r190);
  L345():
    checkFun.0(r197);
    r198 = r197 as cls;
    p33 = prom<V +>{
      program7 = ld program;
      program8 = force? program7;
      checkMissing(program8);
      return program8;
    };
    p34 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r201):
      return r201;
    L1():
      control7 = ld control;
      control8 = force? control7;
      checkMissing(control8);
      c53 = ldf c in base;
      r202 = dyn c53("-a", control8);
      goto L0(r202);
    L2():
      r200 = dyn base35("-a", <sym control>);
      goto L0(r200);
    };
    p35 = prom<V +>{
      tfile2 = ld tfile;
      tfile3 = force? tfile2;
      checkMissing(tfile3);
      return tfile3;
    };
    r205 = dyn r198[, , stdin](p33, p34, p35);
    check L346() else D107();
  D107():
    deopt 411 [i68, r205];
  L346():
    st out = r205;
    out = ld out;
    check L347() else D108();
  D108():
    deopt 413 [i68, out];
  L347():
    out1 = force? out;
    checkMissing(out1);
    c54 = `is.object`(out1);
    if c54 then L349() else L350(i68, out1);
  L348(i75, dx34):
    r207 = `!=`(dx34, 0);
    c55 = `as.logical`(r207);
    if c55 then L352() else L82();
  L349():
    dr28 = tryDispatchBuiltin.1("$", out1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L351() else L350(i68, dr28);
  L350(i73, out3):
    r206 = `$`(out3, <sym status>);
    goto L348(i73, r206);
  L82():
    goto L83(i75);
  L83(i78):
    out8 = ld out;
    check L356() else D111();
  L351():
    dx33 = getTryDispatchBuiltinValue(dr28);
    goto L348(i68, dx33);
  L352():
    stop2 = ldf stop;
    check L353() else D109();
  D109():
    deopt 419 [i75];
  D111():
    deopt 426 [i78, out8];
  L353():
    p38 = prom<V +>{
      gettextf4 = ldf gettextf;
      p37 = prom<V +>{
        paste2 = ldf paste;
        p36 = prom<V +>{
          out4 = ld out;
          out5 = force? out4;
          checkMissing(out5);
          c56 = `is.object`(out5);
          if c56 then L1() else L2(out5);
        L0(dx36):
          return dx36;
        L1():
          dr30 = tryDispatchBuiltin.1("$", out5);
          dc15 = getTryDispatchBuiltinDispatched(dr30);
          if dc15 then L3() else L2(dr30);
        L2(out7):
          r208 = `$`(out7, <sym stderr>);
          goto L0(r208);
        L3():
          dx35 = getTryDispatchBuiltinValue(dr30);
          goto L0(dx35);
        };
        r210 = dyn paste2[, collapse](p36, "\n");
        return r210;
      };
      r212 = dyn gettextf4("Running aspell failed with diagnostics:\n%s", p37);
      return r212;
    };
    r214 = dyn stop2[, domain](p38, NA_LGL);
    check L354() else D110();
  L356():
    out9 = force? out8;
    checkMissing(out9);
    c57 = `is.object`(out9);
    if c57 then L358() else L359(i78, out9);
  D110():
    deopt 423 [i75, r214];
  L354():
    goto L83(i75);
  L357(i82, dx38):
    c58 = `is.object`(dx38);
    if c58 then L361() else L362(i82, dx38);
  L358():
    dr32 = tryDispatchBuiltin.1("$", out9);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L360() else L359(i78, dr32);
  L359(i80, out11):
    r216 = `$`(out11, <sym stdout>);
    goto L357(i80, r216);
  L84(i86, dx42):
    st lines = dx42;
    sym36 = ldf cumsum;
    base36 = ldf cumsum in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L364() else L365();
  L360():
    dx37 = getTryDispatchBuiltinValue(dr32);
    goto L357(i78, dx37);
  L361():
    dr34 = tryDispatchBuiltin.1("[", dx38);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L363() else L362(i82, dr34);
  L362(i84, dx40):
    __11 = ldf `[` in base;
    r217 = dyn __11(dx40, -1);
    goto L84(i84, r217);
  L85(i89, r219):
    r222 = `+`(r219, 1);
    st pos = r222;
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L368() else L369();
  L363():
    dx41 = getTryDispatchBuiltinValue(dr34);
    goto L84(i82, dx41);
  L364():
    lines4 = ld lines;
    check L366() else D112();
  L365():
    r218 = dyn base36(<lang `==`(lines, "")>);
    goto L85(i86, r218);
  D112():
    deopt 435 [i86, lines4];
  L86(i92, r224):
    c59 = `as.logical`(r224);
    if c59 then L373() else L87();
  L366():
    lines5 = force? lines4;
    checkMissing(lines5);
    r220 = `==`(lines5, "");
    cumsum = ldf cumsum in base;
    r221 = dyn cumsum(r220);
    check L367() else D113();
  L368():
    startsWith = ldf startsWith;
    check L370() else D114();
  L369():
    r223 = dyn base37(<lang `<-`(ind, startsWith(lines, "&"))>);
    goto L86(i89, r223);
  D113():
    deopt 440 [i86, r221];
  D114():
    deopt 447 [i89];
  L87():
    goto L88(i92);
  L88(i95):
    sym42 = ldf any;
    base42 = ldf any in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L385() else L386();
  L367():
    goto L85(i86, r221);
  L370():
    p39 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r226 = dyn startsWith(p39, "&");
    check L371() else D115();
  L373():
    strsplit = ldf strsplit;
    check L374() else D117();
  D115():
    deopt 450 [i89, r226];
  D117():
    deopt 455 [i92];
  L89(i98, r267):
    c62 = `as.logical`(r267);
    if c62 then L390() else L90();
  L371():
    st ind = r226;
    any1 = ldf any in base;
    r227 = dyn any1(r226);
    check L372() else D116();
  L374():
    p40 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      c60 = `is.object`(lines9);
      if c60 then L1() else L2(lines9);
    L0(dx44):
      return dx44;
    L1():
      dr36 = tryDispatchBuiltin.1("[", lines9);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(lines11):
      ind6 = ld ind;
      ind7 = force? ind6;
      __12 = ldf `[` in base;
      r228 = dyn __12(lines11, ind7);
      goto L0(r228);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx43);
    };
    r230 = dyn strsplit[, , fixed](p40, ": ", TRUE);
    check L375() else D118();
  L385():
    startsWith1 = ldf startsWith;
    check L387() else D127();
  L386():
    r266 = dyn base42(<lang `<-`(ind, startsWith(lines, "#"))>);
    goto L89(i95, r266);
  D116():
    deopt 453 [i89, r227];
  D118():
    deopt 460 [i92, r230];
  D127():
    deopt 494 [i95];
  L90():
    goto L91(i98);
  L91(i101):
    goto L59(i101);
  L372():
    goto L86(i89, r227);
  L375():
    st info = r230;
    strsplit1 = ldf strsplit;
    check L376() else D119();
  L387():
    p54 = prom<V +>{
      lines12 = ld lines;
      lines13 = force? lines12;
      checkMissing(lines13);
      return lines13;
    };
    r269 = dyn startsWith1(p54, "#");
    check L388() else D128();
  L390():
    strsplit3 = ldf strsplit;
    check L391() else D130();
  D119():
    deopt 463 [i92];
  D128():
    deopt 497 [i95, r269];
  D130():
    deopt 502 [i98];
  L376():
    p43 = prom<V +>{
      sapply = ldf sapply;
      p41 = prom<V +>{
        info = ld info;
        info1 = force? info;
        checkMissing(info1);
        return info1;
      };
      p42 = prom<V +>{
        __13 = ld `[`;
        __14 = force? __13;
        checkMissing(__14);
        return __14;
      };
      r233 = dyn sapply(p41, p42, 1);
      return r233;
    };
    r235 = dyn strsplit1[, , fixed](p43, " ", TRUE);
    check L377() else D120();
  L388():
    st ind = r269;
    any2 = ldf any in base;
    r270 = dyn any2(r269);
    check L389() else D129();
  L391():
    p55 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      c63 = `is.object`(lines15);
      if c63 then L1() else L2(lines15);
    L0(dx48):
      return dx48;
    L1():
      dr40 = tryDispatchBuiltin.1("[", lines15);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(lines17):
      ind10 = ld ind;
      ind11 = force? ind10;
      __22 = ldf `[` in base;
      r271 = dyn __22(lines17, ind11);
      goto L0(r271);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx47);
    };
    r273 = dyn strsplit3[, , fixed](p55, " ", TRUE);
    check L392() else D131();
  D120():
    deopt 468 [i92, r235];
  D129():
    deopt 500 [i95, r270];
  D131():
    deopt 507 [i98, r273];
  L377():
    st one = r235;
    strsplit2 = ldf strsplit;
    check L378() else D121();
  L389():
    goto L89(i95, r270);
  L392():
    st one = r273;
    list2DF1 = ldf list2DF;
    check L393() else D132();
  D121():
    deopt 471 [i92];
  D132():
    deopt 510 [i98];
  L378():
    p46 = prom<V +>{
      sapply1 = ldf sapply;
      p44 = prom<V +>{
        info2 = ld info;
        info3 = force? info2;
        checkMissing(info3);
        return info3;
      };
      p45 = prom<V +>{
        __15 = ld `[`;
        __16 = force? __15;
        checkMissing(__16);
        return __16;
      };
      r238 = dyn sapply1(p44, p45, 2);
      return r238;
    };
    r240 = dyn strsplit2[, , fixed](p46, ", ", TRUE);
    check L379() else D122();
  L393():
    p60 = prom<V +>{
      sym43 = ldf list;
      base43 = ldf list in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L7() else L8();
    L0(r275):
      return r275;
    L7():
      vapply2 = ldf vapply;
      p56 = prom<V +>{
        one6 = ld one;
        one7 = force? one6;
        checkMissing(one7);
        return one7;
      };
      p57 = prom<V +>{
        __23 = ld `[`;
        __24 = force? __23;
        checkMissing(__24);
        return __24;
      };
      r278 = dyn vapply2(p56, p57, "", 2);
      sym44 = ldf rep_len;
      base44 = ldf rep_len in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L9() else L10();
    L8():
      r274 = dyn base43[Original, File, Line, Column, Suggestions](<lang vapply(one, `[`, "", 2)>, <lang rep_len(fname, length(one))>, <lang `[`(pos, ind)>, <lang as.integer(vapply(one, `[`, "", 3))>, <lang vector("list", length(one))>);
      goto L0(r274);
    L1(r280):
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      c64 = `is.object`(pos5);
      if c64 then L13() else L14(pos5);
    L9():
      fname8 = ld fname;
      fname9 = force? fname8;
      checkMissing(fname9);
      sym45 = ldf length;
      base45 = ldf length in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L11() else L12();
    L10():
      r279 = dyn base44(<sym fname>, <lang length(one)>);
      goto L1(r279);
    L2(r282):
      rep_len2 = ldf rep_len in base;
      r284 = dyn rep_len2(fname9, r282);
      goto L1(r284);
    L3(dx50):
      sym46 = ldf `as.integer`;
      base46 = ldf `as.integer` in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L16() else L17();
    L11():
      one8 = ld one;
      one9 = force? one8;
      checkMissing(one9);
      length4 = ldf length in base;
      r283 = dyn length4(one9);
      goto L2(r283);
    L12():
      r281 = dyn base45(<sym one>);
      goto L2(r281);
    L13():
      dr42 = tryDispatchBuiltin.1("[", pos5);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L15() else L14(dr42);
    L14(pos7):
      ind12 = ld ind;
      ind13 = force? ind12;
      __25 = ldf `[` in base;
      r285 = dyn __25(pos7, ind13);
      goto L3(r285);
    L4(r287):
      sym47 = ldf vector;
      base47 = ldf vector in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L18() else L19();
    L15():
      dx49 = getTryDispatchBuiltinValue(dr42);
      goto L3(dx49);
    L16():
      vapply3 = ldf vapply;
      p58 = prom<V +>{
        one10 = ld one;
        one11 = force? one10;
        checkMissing(one11);
        return one11;
      };
      p59 = prom<V +>{
        __26 = ld `[`;
        __27 = force? __26;
        checkMissing(__27);
        return __27;
      };
      r290 = dyn vapply3(p58, p59, "", 3);
      as_integer1 = ldf `as.integer` in base;
      r291 = dyn as_integer1(r290);
      goto L4(r291);
    L17():
      r286 = dyn base46(<lang vapply(one, `[`, "", 3)>);
      goto L4(r286);
    L5(r293):
      list6 = ldf list in base;
      r298 = dyn list6(r278, r280, dx50, r287, r293);
      goto L0(r298);
    L18():
      sym48 = ldf length;
      base48 = ldf length in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L20() else L21();
    L19():
      r292 = dyn base47("list", <lang length(one)>);
      goto L5(r292);
    L6(r295):
      vector = ldf vector in base;
      r297 = dyn vector("list", r295);
      goto L5(r297);
    L20():
      one12 = ld one;
      one13 = force? one12;
      checkMissing(one13);
      length5 = ldf length in base;
      r296 = dyn length5(one13);
      goto L6(r296);
    L21():
      r294 = dyn base48(<sym one>);
      goto L6(r294);
    };
    r300 = dyn list2DF1(p60);
    check L394() else D133();
  D122():
    deopt 476 [i92, r240];
  D133():
    deopt 512 [i98, r300];
  L379():
    st two = r240;
    list2DF = ldf list2DF;
    check L380() else D123();
  L394():
    st db1 = r300;
    rbind1 = ldf rbind;
    check L395() else D134();
  D123():
    deopt 479 [i92];
  D134():
    deopt 515 [i98];
  L380():
    p51 = prom<V +>{
      sym38 = ldf list;
      base38 = ldf list in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L5() else L6();
    L0(r242):
      return r242;
    L5():
      vapply = ldf vapply;
      p47 = prom<V +>{
        one = ld one;
        one1 = force? one;
        checkMissing(one1);
        return one1;
      };
      p48 = prom<V +>{
        __17 = ld `[`;
        __18 = force? __17;
        checkMissing(__18);
        return __18;
      };
      r245 = dyn vapply(p47, p48, "", 2);
      sym39 = ldf rep_len;
      base39 = ldf rep_len in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L7() else L8();
    L6():
      r241 = dyn base38[Original, File, Line, Column, Suggestions](<lang vapply(one, `[`, "", 2)>, <lang rep_len(fname, length(one))>, <lang `[`(pos, ind)>, <lang as.integer(vapply(one, `[`, "", 4))>, <sym two>);
      goto L0(r241);
    L1(r247):
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      c61 = `is.object`(pos1);
      if c61 then L11() else L12(pos1);
    L7():
      fname6 = ld fname;
      fname7 = force? fname6;
      checkMissing(fname7);
      sym40 = ldf length;
      base40 = ldf length in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L9() else L10();
    L8():
      r246 = dyn base39(<sym fname>, <lang length(one)>);
      goto L1(r246);
    L2(r249):
      rep_len1 = ldf rep_len in base;
      r251 = dyn rep_len1(fname7, r249);
      goto L1(r251);
    L3(dx46):
      sym41 = ldf `as.integer`;
      base41 = ldf `as.integer` in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L14() else L15();
    L9():
      one2 = ld one;
      one3 = force? one2;
      checkMissing(one3);
      length3 = ldf length in base;
      r250 = dyn length3(one3);
      goto L2(r250);
    L10():
      r248 = dyn base40(<sym one>);
      goto L2(r248);
    L11():
      dr38 = tryDispatchBuiltin.1("[", pos1);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L13() else L12(dr38);
    L12(pos3):
      ind8 = ld ind;
      ind9 = force? ind8;
      __19 = ldf `[` in base;
      r252 = dyn __19(pos3, ind9);
      goto L3(r252);
    L4(r254):
      two = ld two;
      two1 = force? two;
      checkMissing(two1);
      list5 = ldf list in base;
      r259 = dyn list5(r245, r247, dx46, r254, two1);
      goto L0(r259);
    L13():
      dx45 = getTryDispatchBuiltinValue(dr38);
      goto L3(dx45);
    L14():
      vapply1 = ldf vapply;
      p49 = prom<V +>{
        one4 = ld one;
        one5 = force? one4;
        checkMissing(one5);
        return one5;
      };
      p50 = prom<V +>{
        __20 = ld `[`;
        __21 = force? __20;
        checkMissing(__21);
        return __21;
      };
      r257 = dyn vapply1(p49, p50, "", 4);
      as_integer = ldf `as.integer` in base;
      r258 = dyn as_integer(r257);
      goto L4(r258);
    L15():
      r253 = dyn base41(<lang vapply(one, `[`, "", 4)>);
      goto L4(r253);
    };
    r261 = dyn list2DF(p51);
    check L381() else D124();
  L395():
    p61 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    p62 = prom<V +>{
      db6 = ld db1;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r303 = dyn rbind1(p61, p62);
    check L396() else D135();
  D124():
    deopt 481 [i92, r261];
  D135():
    deopt 518 [i98, r303];
  L381():
    st db1 = r261;
    rbind = ldf rbind;
    check L382() else D125();
  L396():
    st db = r303;
    goto L91(i98);
  D125():
    deopt 484 [i92];
  L382():
    p52 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p53 = prom<V +>{
      db2 = ld db1;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    r264 = dyn rbind(p52, p53);
    check L383() else D126();
  D126():
    deopt 487 [i92, r264];
  L383():
    st db = r264;
    goto L88(i92);
  }
}
fun inner3861840104(ifile, encoding) {
  (reg ifile:*, reg encoding:*) -+> V { var ifile:*, var encoding:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ifile1:*, reg ifile2:V, reg inherits:cls, reg r2:V, reg c:L, reg readLines:cls, reg ifile3:*, reg ifile4:V, reg c1:L, reg ifile6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg ifile7:*, reg ifile8:V, reg inherits1:cls, reg r9:V, reg c2:L, reg readLines1:cls, reg ifile9:*, reg ifile10:V, reg p2:p(V +), reg encoding3:*, reg encoding4:V, reg p3:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg ifile11:*, reg ifile12:V, reg as_character:cls, reg r15:V |
    mkenv;
    st ifile = ifile;
    st encoding = encoding;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1();
  L5():
    ifile1 = ld ifile;
    check L7() else D0();
  L6():
    r = dyn base(<sym ifile>, "srcfile");
    goto L0(r);
  D0():
    deopt 2 [ifile1];
  L1():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7():
    ifile2 = force? ifile1;
    checkMissing(ifile2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(ifile2, "srcfile", FALSE);
    check L8() else D1();
  L9():
    readLines = ldf readLines;
    check L10() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  L2(r8):
    c2 = `as.logical`(r8);
    if c2 then L17() else L3();
  L8():
    goto L0(r2);
  L10():
    p = prom<V +>{
      ifile3 = ld ifile;
      ifile4 = force? ifile3;
      checkMissing(ifile4);
      c1 = `is.object`(ifile4);
      if c1 then L1() else L2(ifile4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", ifile4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ifile6):
      r3 = `$`(ifile6, <sym filename>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r6 = dyn readLines[, encoding, warn](p, p1, FALSE);
    check L11() else D3();
  L13():
    ifile7 = ld ifile;
    check L15() else D4();
  L14():
    r7 = dyn base1(<sym ifile>, "connection");
    goto L2(r7);
  D3():
    deopt 15 [r6];
  D4():
    deopt 18 [ifile7];
  L3():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    popenv;
    return r6;
  L15():
    ifile8 = force? ifile7;
    checkMissing(ifile8);
    inherits1 = ldf inherits in base;
    r9 = dyn inherits1(ifile8, "connection", FALSE);
    check L16() else D5();
  L17():
    readLines1 = ldf readLines;
    check L18() else D6();
  D5():
    deopt 23 [r9];
  D6():
    deopt 25 [];
  L4(r14):
    popenv;
    return r14;
  L16():
    goto L2(r9);
  L18():
    p2 = prom<V +>{
      ifile9 = ld ifile;
      ifile10 = force? ifile9;
      checkMissing(ifile10);
      return ifile10;
    };
    p3 = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    r12 = dyn readLines1[, encoding, warn](p2, p3, FALSE);
    check L19() else D7();
  L21():
    ifile11 = ld ifile;
    check L23() else D8();
  L22():
    r13 = dyn base2(<sym ifile>);
    goto L4(r13);
  D7():
    deopt 31 [r12];
  D8():
    deopt 34 [ifile11];
  L19():
    popenv;
    return r12;
  L23():
    ifile12 = force? ifile11;
    checkMissing(ifile12);
    as_character = ldf `as.character` in base;
    r15 = dyn as_character(ifile12);
    check L24() else D9();
  D9():
    deopt 37 [r15];
  L24():
    goto L4(r15);
  }
}