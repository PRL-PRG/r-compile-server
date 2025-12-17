fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg tempfile:cls, reg r4:V, reg writeLines:cls, reg test1:*, reg test2:V, reg p:p(V +), reg tf:*, reg tf1:V, reg p1:p(V +), reg r7:V, reg read_csv:cls, reg tf2:*, reg tf3:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg count_fields:cls, reg tf4:*, reg tf5:V, reg p3:p(V +), reg r13:V, reg max:cls, reg r14:V, reg read_csv1:cls, reg tf6:*, reg tf7:V, reg p4:p(V +), reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg ncol:*, reg ncol1:V, reg r18:I, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg unlink:cls, reg tf8:*, reg tf9:V, reg p7:p(V +), reg r24:V, reg read_table:cls, reg r25:V |
    mkenv;
    r = clos inner3628338692;
    st `read.table` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st test1 = r2;
    tempfile = ldf tempfile;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r3 = dyn c(<int 1, 2, 3, 4, 5>, "6,7", "8,9,10");
    check L4() else D0();
  L3():
    r1 = dyn base(<lang `:`(1.0, 5.0)>, "6,7", "8,9,10");
    goto L0(r1);
  D0():
    deopt 10 [r3];
  D1():
    deopt 13 [];
  L4():
    goto L0(r3);
  L5():
    r4 = dyn tempfile();
    check L6() else D2();
  D2():
    deopt 14 [r4];
  L6():
    st tf = r4;
    writeLines = ldf writeLines;
    check L7() else D3();
  D3():
    deopt 17 [];
  L7():
    p = prom<V +>{
      test1 = ld test1;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    p1 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r7 = dyn writeLines(p, p1);
    check L8() else D4();
  D4():
    deopt 20 [r7];
  L8():
    read_csv = ldf `read.csv`;
    check L9() else D5();
  D5():
    deopt 22 [];
  L9():
    p2 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r9 = dyn read_csv[, fill](p2, TRUE);
    check L10() else D6();
  D6():
    deopt 26 [r9];
  L10():
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r11):
    st ncol = r11;
    read_csv1 = ldf `read.csv`;
    check L16() else D10();
  L11():
    count_fields = ldf `count.fields`;
    check L13() else D7();
  L12():
    r10 = dyn base1(<lang count.fields(tf, sep=",")>);
    goto L1(r10);
  D7():
    deopt 30 [];
  D10():
    deopt 39 [];
  L13():
    p3 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r13 = dyn count_fields[, sep](p3, ",");
    check L14() else D8();
  L16():
    p4 = prom<V +>{
      tf6 = ld tf;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    p6 = prom<V +>{
      paste0 = ldf paste0;
      p5 = prom<V +>{
        sym2 = ldf seq_len;
        base2 = ldf seq_len in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        ncol = ld ncol;
        ncol1 = force? ncol;
        checkMissing(ncol1);
        r18 = seq_len(ncol1);
        goto L0(r18);
      L2():
        r16 = dyn base2(<sym ncol>);
        goto L0(r16);
      };
      r20 = dyn paste0("V", p5);
      return r20;
    };
    r22 = dyn read_csv1[, fill, header, `col.names`](p4, TRUE, FALSE, p6);
    check L17() else D11();
  D8():
    deopt 34 [r13];
  D11():
    deopt 47 [r22];
  L14():
    max = ldf max in base;
    r14 = dyn max(r13);
    check L15() else D9();
  L17():
    unlink = ldf unlink;
    check L18() else D12();
  D9():
    deopt 36 [r14];
  D12():
    deopt 49 [];
  L15():
    goto L1(r14);
  L18():
    p7 = prom<V +>{
      tf8 = ld tf;
      tf9 = force? tf8;
      checkMissing(tf9);
      return tf9;
    };
    r24 = dyn unlink(p7);
    check L19() else D13();
  D13():
    deopt 51 [r24];
  L19():
    read_table = ldf `read.table`;
    check L20() else D14();
  D14():
    deopt 53 [];
  L20():
    r25 = dyn read_table[header, text](TRUE, "\na b\n1 2\n3 4\n");
    check L21() else D15();
  D15():
    deopt 58 [r25];
  L21():
    popenv;
    return r25;
  }
}
fun inner3628338692(file, header, sep, quote, dec, numerals, `row.names`, `col.names`, `as.is`, tryLogical, `na.strings`, colClasses, nrows, skip, `check.names`, fill, `strip.white`, `blank.lines.skip`, `comment.char`, allowEscapes, flush, stringsAsFactors, fileEncoding, encoding, text, skipNul) {
  (reg file:*, reg header:*, reg sep:*, reg quote:*, reg dec:*, reg numerals:*, reg row_names:*, reg col_names:*, reg as_is:*, reg tryLogical:*, reg na_strings:*, reg colClasses:*, reg nrows:*, reg skip:*, reg check_names:*, reg fill:*, reg strip_white:*, reg blank_lines_skip:*, reg comment_char:*, reg allowEscapes:*, reg flush:*, reg stringsAsFactors:*, reg fileEncoding:*, reg encoding:*, reg text:*, reg skipNul:*) -+> V { var file:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var dec:*, reg dec_isMissing:L, reg dec_orDefault:*, var numerals:*, reg numerals_isMissing:L, reg numerals_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `row.names`:*, var `col.names`:*, var `as.is`:*, reg as_is_isMissing:L, reg as_is_orDefault:*, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg r4:V, reg p1:p(V +), var tryLogical:*, reg tryLogical_isMissing:L, reg tryLogical_orDefault:*, var `na.strings`:*, reg na_strings_isMissing:L, reg na_strings_orDefault:*, var colClasses:*, reg colClasses_isMissing:L, reg colClasses_orDefault:*, var nrows:*, reg nrows_isMissing:L, reg nrows_orDefault:*, reg p2:p(V +), var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var `check.names`:*, reg check_names_isMissing:L, reg check_names_orDefault:*, var fill:*, reg fill_isMissing:L, reg fill_orDefault:*, reg blank_lines_skip1:*, reg blank_lines_skip2:V, reg r7:V, reg p3:p(V +), var `strip.white`:*, reg strip_white_isMissing:L, reg strip_white_orDefault:*, var `blank.lines.skip`:*, reg blank_lines_skip_isMissing:L, reg blank_lines_skip_orDefault:*, var `comment.char`:*, reg comment_char_isMissing:L, reg comment_char_orDefault:*, var allowEscapes:*, reg allowEscapes_isMissing:L, reg allowEscapes_orDefault:*, var flush:*, reg flush_isMissing:L, reg flush_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, var fileEncoding:*, reg fileEncoding_isMissing:L, reg fileEncoding_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var text:*, var skipNul:*, reg skipNul_isMissing:L, reg skipNul_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c6:L, reg r13:V, reg missing1:cls, reg r14:V, reg r15:V, reg c7:L, reg c8:V, reg c10:L, reg textConnection:cls, reg text1:*, reg text2:V, reg p4:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg on_exit:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg file1:*, reg file2:V, reg c11:L, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg fileEncoding1:*, reg fileEncoding2:V, reg nzchar:cls, reg r26:V, reg c13:L, reg file3:cls, reg file4:*, reg file5:V, reg p5:p(V +), reg fileEncoding3:*, reg fileEncoding4:V, reg p6:p(V +), reg r29:V, reg r30:V, reg file6:cls, reg file7:*, reg file8:V, reg p7:p(V +), reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg on_exit1:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg file9:*, reg file10:V, reg inherits:cls, reg r39:V, reg r40:V, reg c14:L, reg stop:cls, reg r41:V, reg isOpen:cls, reg file11:*, reg file12:V, reg p8:p(V +), reg r44:V, reg r45:V, reg c15:L, reg open:cls, reg file13:*, reg file14:V, reg p9:p(V +), reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg on_exit2:cls, reg r50:V, reg _in_:cls, reg encoding1:*, reg encoding2:V, reg p10:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg c16:cls, reg r55:V, reg p11:p(V +), reg r57:V, reg c17:L, reg encoding3:*, reg encoding4:V, reg encoding5:V, reg match_arg:cls, reg numerals1:*, reg numerals2:V, reg p12:p(V +), reg r59:V, reg skip1:*, reg skip2:V, reg r60:V, reg c18:L, reg readLines:cls, reg file15:*, reg file16:V, reg p13:p(V +), reg skip3:*, reg skip4:V, reg p14:p(V +), reg r63:V, reg nrows1:*, reg nrows2:V, reg r65:V, reg c19:L, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg header1:*, reg header2:V, reg nrows3:*, reg nrows4:V, reg r68:V, reg min:cls, reg r69:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg C_readtablehead:*, reg C_readtablehead1:V, reg file17:*, reg file18:V, reg nlines:*, reg nlines1:V, reg comment_char1:*, reg comment_char2:V, reg blank_lines_skip3:*, reg blank_lines_skip4:V, reg quote1:*, reg quote2:V, reg sep1:*, reg sep2:V, reg skipNul1:*, reg skipNul2:V, reg _External:cls, reg r72:V, reg _in_1:cls, reg encoding6:*, reg encoding7:V, reg p15:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r74:V, reg r75:V, reg c20:cls, reg r76:V, reg p16:p(V +), reg r78:V, reg c21:L, reg encoding8:*, reg encoding9:V, reg l:*, reg Encoding__:cls, reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg lines:*, reg lines1:V, reg length:cls, reg r82:V, reg nlines2:*, reg nlines3:V, reg r83:V, reg c22:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg missing2:cls, reg r86:V, reg c23:L, reg stop1:cls, reg r87:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r89:V, reg r90:V, reg col_names1:*, reg col_names2:V, reg length1:cls, reg r91:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r95:V, reg r96:V, reg lines2:*, reg lines3:V, reg nzchar1:cls, reg r97:V, reg r98:V, reg all:cls, reg r99:V, reg c24:L, reg stop2:cls, reg r100:V, reg nlines4:*, reg nlines5:V, reg n0lines:*, reg n0lines1:V, reg r102:V, reg c25:L, reg c27:V, reg file19:*, reg file20:V, reg r103:V, reg c28:L, reg c29:V, reg c31:L, reg pushBack:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg lines4:*, reg lines5:V, reg lines6:*, reg lines7:V, reg c32:cls, reg r106:V, reg p17:p(V +), reg file21:*, reg file22:V, reg p18:p(V +), reg pbEncoding:*, reg pbEncoding1:V, reg p19:p(V +), reg r110:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r111:V, reg r112:V, reg on_exit3:cls, reg r113:V, reg pushBack1:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r115:V, reg r116:V, reg lines8:*, reg lines9:V, reg lines10:*, reg lines11:V, reg c33:cls, reg r117:V, reg p20:p(V +), reg file23:*, reg file24:V, reg p21:p(V +), reg pbEncoding2:*, reg pbEncoding3:V, reg p22:p(V +), reg r121:V, reg scan:cls, reg file25:*, reg file26:V, reg p23:p(V +), reg sep3:*, reg sep4:V, reg p24:p(V +), reg quote3:*, reg quote4:V, reg p25:p(V +), reg blank_lines_skip5:*, reg blank_lines_skip6:V, reg p26:p(V +), reg character:cls, reg r126:V, reg p27:p(V +), reg comment_char3:*, reg comment_char4:V, reg p28:p(V +), reg allowEscapes1:*, reg allowEscapes2:V, reg p29:p(V +), reg encoding11:*, reg encoding12:V, reg p30:p(V +), reg skipNul3:*, reg skipNul4:V, reg p31:p(V +), reg r132:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r133:V, reg r134:V, reg missing3:cls, reg r135:V, reg c34:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r136:V, reg r137:V, reg first:*, reg first1:V, reg length2:cls, reg r138:V, reg r139:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r140:V, reg col_names3:*, reg col_names4:V, reg length3:cls, reg r141:V, reg numeric:cls, reg nlines6:*, reg nlines7:V, reg r142:V, reg p32:p(V +), reg r144:V, reg nlines8:*, reg nlines9:V, reg r145:V, reg c35:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r146:V, reg r147:V, reg col:*, reg col1:V, reg r148:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r149:V, reg i7:I, reg r150:V, reg scan1:cls, reg file27:*, reg file28:V, reg p33:p(V +), reg sep5:*, reg sep6:V, reg p34:p(V +), reg quote5:*, reg quote6:V, reg p35:p(V +), reg strip_white1:*, reg strip_white2:V, reg p36:p(V +), reg blank_lines_skip7:*, reg blank_lines_skip8:V, reg p37:p(V +), reg comment_char5:*, reg comment_char6:V, reg p38:p(V +), reg allowEscapes3:*, reg allowEscapes4:V, reg p39:p(V +), reg encoding13:*, reg encoding14:V, reg p40:p(V +), reg skipNul5:*, reg skipNul6:V, reg p41:p(V +), reg r160:V, reg length4:cls, reg r161:V, reg l2:*, reg c37:L, reg i9:I, reg r163:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg ___:cls, reg r166:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r167:V, reg r168:V, reg col2:*, reg col3:V, reg col4:*, reg col5:V, reg max:cls, reg r169:V, reg cols:*, reg cols1:V, reg col6:*, reg col7:V, reg r170:V, reg r171:V, reg rlabp:*, reg rlabp1:V, reg c38:L, reg c40:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r172:V, reg c43:L, reg r173:V, reg missing4:cls, reg r174:V, reg c44:L, reg c45:V, reg c47:L, reg header3:*, reg header4:V, reg r176:V, reg c48:L, reg header5:*, reg header6:V, reg c49:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r178:V, reg C_readtablehead2:*, reg C_readtablehead3:V, reg file29:*, reg file30:V, reg comment_char7:*, reg comment_char8:V, reg blank_lines_skip9:*, reg blank_lines_skip10:V, reg quote7:*, reg quote8:V, reg sep7:*, reg sep8:V, reg skipNul7:*, reg skipNul8:V, reg _External1:cls, reg r180:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r181:V, reg r182:V, reg missing5:cls, reg r183:V, reg c50:L, reg first2:*, reg first3:V, reg first4:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r184:V, reg r185:V, reg first5:*, reg first6:V, reg length5:cls, reg r186:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r189:V, reg r190:V, reg r191:V, reg col_names5:*, reg col_names6:V, reg length6:cls, reg r192:V, reg r193:V, reg c51:L, reg warning:cls, reg r194:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r195:V, reg r196:V, reg missing6:cls, reg r197:V, reg c52:L, reg paste0:cls, reg cols2:*, reg cols3:V, reg r198:V, reg p42:p(V +), reg r200:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r201:V, reg r202:V, reg col_names7:*, reg col_names8:V, reg length7:cls, reg r203:V, reg rlabp2:*, reg rlabp3:V, reg r204:V, reg cols4:*, reg cols5:V, reg r205:V, reg c53:L, reg stop3:cls, reg r206:V, reg fill1:*, reg fill2:V, reg c54:L, reg c56:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r208:V, reg c59:L, reg r209:V, reg col_names9:*, reg col_names10:V, reg length8:cls, reg r210:V, reg cols6:*, reg cols7:V, reg r211:V, reg c60:L, reg c61:V, reg c63:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r212:V, reg r213:V, reg col_names11:*, reg col_names12:V, reg length9:cls, reg r214:V, reg fill3:*, reg fill4:V, reg r216:V, reg c64:L, reg c66:V, reg cols8:*, reg cols9:V, reg r217:V, reg c67:L, reg c68:V, reg c70:L, reg c72:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r218:V, reg c75:L, reg r219:V, reg col_names13:*, reg col_names14:V, reg length10:cls, reg r220:V, reg cols10:*, reg cols11:V, reg r221:V, reg c76:L, reg c77:V, reg c79:L, reg stop4:cls, reg r222:V, reg cols12:*, reg cols13:V, reg r224:V, reg c80:L, reg stop5:cls, reg r225:V, reg check_names1:*, reg check_names2:V, reg c81:L, reg make_names:cls, reg col_names15:*, reg col_names16:V, reg p43:p(V +), reg r227:V, reg rlabp4:*, reg rlabp5:V, reg c82:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r229:V, reg r230:V, reg col_names17:*, reg col_names18:V, reg c83:cls, reg r231:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r233:V, reg r234:V, reg colClasses1:*, reg colClasses2:V, reg names:cls, reg r235:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r236:V, reg r237:V, reg nmColClasses:*, reg nmColClasses1:V, reg c84:V, reg c85:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r238:V, reg r239:V, reg colClasses3:*, reg colClasses4:V, reg length11:cls, reg r240:V, reg cols14:*, reg cols15:V, reg r241:V, reg c86:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r242:V, reg r243:V, reg colClasses5:*, reg colClasses6:V, reg cols16:*, reg cols17:V, reg rep_len:cls, reg r244:V, reg r245:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r247:V, reg r248:V, reg cols18:*, reg cols19:V, reg rep_len1:cls, reg r249:V, reg col_names19:*, reg col_names20:V, reg l5:*, reg names__:cls, reg r250:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r251:V, reg r252:V, reg nmColClasses2:*, reg nmColClasses3:V, reg col_names21:*, reg col_names22:V, reg match:cls, reg r253:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r254:V, reg r255:V, reg i15:*, reg i16:V, reg r256:V, reg any:cls, reg r257:V, reg c87:L, reg warning1:cls, reg r258:V, reg colClasses7:*, reg colClasses8:V, reg c88:L, reg colClasses10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i17:*, reg i18:V, reg r260:V, reg __:cls, reg r261:V, reg l6:*, reg c89:L, reg dx5:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx9:V, reg i19:*, reg i20:V, reg c90:L, reg dx12:V, reg l10:*, reg dx13:V, reg i22:V, reg dr6:V, reg dc3:L, reg dx16:V, reg dx17:V, reg l12:*, reg dx18:V, reg dx19:V, reg i23:*, reg i24:V, reg r262:V, reg __1:cls, reg r263:V, reg ___1:cls, reg r264:V, reg tmp:*, reg tmp1:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r265:V, reg r266:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r267:V, reg r268:V, reg list:cls, reg r269:V, reg cols20:*, reg cols21:V, reg rep_int:cls, reg r270:V, reg col_names23:*, reg col_names24:V, reg l13:*, reg names__1:cls, reg r271:V, reg l14:*, reg c91:L, reg r273:S, reg l16:*, reg dr8:V, reg dc4:L, reg dx20:V, reg dx21:V, reg _in_2:cls, reg colClasses11:*, reg colClasses12:V, reg p44:p(V +), reg sym47:cls, reg base47:cls, reg guard47:L, reg r277:V, reg r278:V, reg c92:cls, reg r279:V, reg p45:p(V +), reg r281:V, reg ___2:cls, reg r282:V, reg _in_3:cls, reg colClasses13:*, reg colClasses14:V, reg p46:p(V +), reg sym48:cls, reg base48:cls, reg guard48:L, reg r284:V, reg r285:V, reg c93:cls, reg r286:V, reg p47:p(V +), reg r288:V, reg lapply:cls, reg colClasses15:*, reg colClasses16:V, reg c94:L, reg colClasses18:V, reg dr10:V, reg dc5:L, reg dx22:V, reg dx23:V, reg known:*, reg known1:V, reg __2:cls, reg r289:V, reg p48:p(V +), reg do_call:*, reg do_call1:V, reg p49:p(V +), reg sym49:cls, reg base49:cls, reg guard49:L, reg r292:V, reg r293:V, reg list1:cls, reg r294:V, reg p50:p(V +), reg r296:V, reg l17:*, reg c95:L, reg r298:V, reg l19:*, reg dr12:V, reg dc6:L, reg dx24:V, reg dx25:V, reg known2:*, reg known3:V, reg ___3:cls, reg r301:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r302:V, reg r303:V, reg list2:cls, reg r304:V, reg l20:*, reg c96:L, reg r306:V, reg l22:*, reg dr14:V, reg dc7:L, reg dx26:V, reg dx27:V, reg _in_4:cls, reg colClasses19:*, reg colClasses20:V, reg p51:p(V +), reg r310:V, reg ___4:cls, reg r311:V, reg vapply:cls, reg what:*, reg what1:V, reg p52:p(V +), reg is_null:*, reg is_null1:V, reg p53:p(V +), reg r314:V, reg r315:V, reg scan2:cls, reg file31:*, reg file32:V, reg p54:p(V +), reg what2:*, reg what3:V, reg p55:p(V +), reg sep9:*, reg sep10:V, reg p56:p(V +), reg quote9:*, reg quote10:V, reg p57:p(V +), reg dec1:*, reg dec2:V, reg p58:p(V +), reg nrows5:*, reg nrows6:V, reg p59:p(V +), reg na_strings1:*, reg na_strings2:V, reg p60:p(V +), reg fill5:*, reg fill6:V, reg p61:p(V +), reg strip_white3:*, reg strip_white4:V, reg p62:p(V +), reg blank_lines_skip11:*, reg blank_lines_skip12:V, reg p63:p(V +), reg comment_char9:*, reg comment_char10:V, reg p64:p(V +), reg allowEscapes5:*, reg allowEscapes6:V, reg p65:p(V +), reg flush1:*, reg flush2:V, reg p66:p(V +), reg encoding15:*, reg encoding16:V, reg p67:p(V +), reg skipNul9:*, reg skipNul10:V, reg p68:p(V +), reg r331:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r332:V, reg r333:V, reg data:*, reg data1:V, reg c97:L, reg data3:V, reg dr16:V, reg dc8:L, reg dx28:V, reg dx29:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r334:V, reg data6:V, reg r335:V, reg keep:*, reg keep1:V, reg which_max:cls, reg r336:V, reg __3:cls, reg r337:V, reg length12:cls, reg r338:V, reg cols22:*, reg cols23:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r339:V, reg cols26:V, reg r340:V, reg data7:*, reg data8:V, reg length13:cls, reg r341:V, reg r342:V, reg c98:L, reg warning2:cls, reg cols27:*, reg cols28:V, reg p69:p(V +), reg sym54:cls, reg base54:cls, reg guard54:L, reg r344:V, reg r345:V, reg data9:*, reg data10:V, reg length14:cls, reg r346:V, reg p70:p(V +), reg r348:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r349:V, reg r350:V, reg data11:*, reg data12:V, reg length15:cls, reg r351:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r353:V, reg r354:V, reg as_is1:*, reg as_is2:V, reg c99:L, reg c100:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r355:V, reg r356:V, reg as_is3:*, reg as_is4:V, reg cols29:*, reg cols30:V, reg rep_len2:cls, reg r357:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r359:V, reg r360:V, reg as_is5:*, reg as_is6:V, reg is_numeric:cls, reg r361:V, reg c101:L, reg sym59:cls, reg base59:cls, reg guard59:L, reg r362:V, reg r363:V, reg as_is7:*, reg as_is8:V, reg r364:V, reg as_is9:*, reg as_is10:V, reg cols31:*, reg cols32:V, reg r365:V, reg r366:V, reg any1:cls, reg r367:V, reg c102:L, reg stop6:cls, reg r368:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r370:V, reg r371:V, reg cols33:*, reg cols34:V, reg rep_int1:cls, reg r372:V, reg l23:*, reg c103:L, reg r374:L, reg l25:*, reg dr18:V, reg dc9:L, reg dx30:V, reg dx31:V, reg as_is11:*, reg as_is12:V, reg ___5:cls, reg r377:V, reg i25:*, reg i26:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r378:V, reg r379:V, reg as_is13:*, reg as_is14:V, reg c104:L, reg c105:L, reg sym62:cls, reg base62:cls, reg guard62:L, reg r380:V, reg r381:V, reg as_is15:*, reg as_is16:V, reg col_names25:*, reg col_names26:V, reg match1:cls, reg r382:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r383:V, reg r384:V, reg i27:*, reg i28:V, reg r385:V, reg any2:cls, reg r386:V, reg c106:L, reg warning3:cls, reg r387:V, reg i29:*, reg i30:V, reg c107:L, reg i32:V, reg dr20:V, reg dc10:L, reg dx32:V, reg dx33:V, reg i33:*, reg i34:V, reg r389:V, reg __4:cls, reg r390:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r391:V, reg r392:V, reg cols35:*, reg cols36:V, reg rep_int2:cls, reg r393:V, reg l26:*, reg c108:L, reg r395:L, reg l28:*, reg dr22:V, reg dc11:L, reg dx34:V, reg r397:L, reg dx35:V, reg i35:*, reg i36:V, reg ___6:cls, reg r398:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r399:V, reg r400:V, reg as_is17:*, reg as_is18:V, reg length16:cls, reg r401:V, reg cols37:*, reg cols38:V, reg r402:V, reg c109:L, reg stop7:cls, reg gettextf:cls, reg sym66:cls, reg base66:cls, reg guard66:L, reg r403:V, reg r404:V, reg as_is19:*, reg as_is20:V, reg length17:cls, reg r405:V, reg p71:p(V +), reg cols39:*, reg cols40:V, reg p72:p(V +), reg r408:V, reg p73:p(V +), reg r410:V, reg keep2:*, reg keep3:V, reg known4:*, reg known5:V, reg r411:V, reg r412:V, reg rlabp6:*, reg rlabp7:V, reg c110:L, reg l29:*, reg c111:L, reg r414:L, reg l31:*, reg dr24:V, reg dc12:L, reg dx36:V, reg r416:L, reg dx37:V, reg ___7:cls, reg r417:V, reg cols41:*, reg cols42:V, reg r419:V, reg c112:L, reg r421:V, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg do:*, reg do1:V, reg __5:cls, reg r422:V, reg s1:V, reg l32:I, reg i37:I, reg i38:I, reg i39:I, reg c113:L, reg x1:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r423:V, reg i44:I, reg r424:V, reg colClasses21:*, reg colClasses22:V, reg c114:L, reg i46:I, reg colClasses24:V, reg dr28:V, reg dc14:L, reg dx40:V, reg i48:I, reg dx41:V, reg i49:*, reg i50:V, reg __6:cls, reg r425:V, reg is_na:cls, reg r426:V, reg c115:L, reg type_convert:cls, reg data13:*, reg data14:V, reg c116:L, reg data16:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg i53:*, reg i54:V, reg __7:cls, reg r427:V, reg p74:p(V +), reg as_is21:*, reg as_is22:V, reg c117:L, reg as_is24:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg i55:*, reg i56:V, reg __8:cls, reg r429:V, reg p75:p(V +), reg dec3:*, reg dec4:V, reg p76:p(V +), reg numerals3:*, reg numerals4:V, reg p77:p(V +), reg character1:cls, reg r433:V, reg p78:p(V +), reg tryLogical1:*, reg tryLogical2:V, reg p79:p(V +), reg r436:V, reg i57:I, reg r437:V, reg colClasses25:*, reg colClasses26:V, reg c118:L, reg i59:I, reg colClasses28:V, reg dr34:V, reg dc17:L, reg dx46:V, reg i61:I, reg dx47:V, reg i62:*, reg i63:V, reg __9:cls, reg r438:V, reg r439:V, reg c119:L, reg as_factor:cls, reg data17:*, reg data18:V, reg c120:L, reg data20:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg i66:*, reg i67:V, reg __10:cls, reg r440:V, reg p80:p(V +), reg r442:V, reg colClasses29:*, reg colClasses30:V, reg c121:L, reg i69:I, reg colClasses32:V, reg dr38:V, reg dc19:L, reg dx50:V, reg i71:I, reg dx51:V, reg i72:*, reg i73:V, reg __11:cls, reg r443:V, reg r444:V, reg c122:L, reg as_Date:cls, reg data21:*, reg data22:V, reg c123:L, reg data24:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg i76:*, reg i77:V, reg __12:cls, reg r445:V, reg p81:p(V +), reg r447:V, reg colClasses33:*, reg colClasses34:V, reg c124:L, reg i79:I, reg colClasses36:V, reg dr42:V, reg dc21:L, reg dx54:V, reg i81:I, reg dx55:V, reg i82:*, reg i83:V, reg __13:cls, reg r448:V, reg r449:V, reg c125:L, reg as_POSIXct:cls, reg data25:*, reg data26:V, reg c126:L, reg data28:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg i86:*, reg i87:V, reg __14:cls, reg r450:V, reg p82:p(V +), reg r452:V, reg __15:cls, reg r453:V, reg r454:cls, reg data29:*, reg data30:V, reg c127:L, reg data32:V, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg i88:*, reg i89:V, reg __16:cls, reg r455:V, reg p83:p(V +), reg colClasses37:*, reg colClasses38:V, reg c128:L, reg colClasses40:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg i90:*, reg i91:V, reg __17:cls, reg r457:V, reg p84:p(V +), reg r459:V, reg l33:*, reg c129:L, reg i93:I, reg r461:V, reg l35:*, reg dr50:V, reg dc25:L, reg dx62:V, reg i95:I, reg dx63:V, reg i96:*, reg i97:V, reg ____:cls, reg r464:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r465:V, reg r466:V, reg missing7:cls, reg r467:V, reg c130:L, reg rlabp8:*, reg rlabp9:V, reg c131:L, reg data33:*, reg data34:V, reg c132:L, reg data36:V, reg dr52:V, reg dc26:L, reg dx64:V, reg dx65:V, reg __18:cls, reg r468:V, reg data37:*, reg data38:V, reg c133:L, reg data40:V, reg dr54:V, reg dc27:L, reg dx66:V, reg dx67:V, reg __19:cls, reg r469:V, reg keep4:*, reg keep5:V, reg c134:L, reg keep7:V, reg dr56:V, reg dc28:L, reg dx68:V, reg dx69:V, reg __20:cls, reg r470:V, reg r471:V, reg _set_row_names:cls, reg sym69:cls, reg base69:cls, reg guard69:L, reg r472:V, reg r473:V, reg nlines10:*, reg nlines11:V, reg as_integer:cls, reg r474:V, reg p85:p(V +), reg r476:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r478:V, reg r479:V, reg row_names1:*, reg row_names2:V, reg c135:V, reg c136:L, reg _set_row_names1:cls, reg sym71:cls, reg base71:cls, reg guard71:L, reg r480:V, reg r481:V, reg nlines12:*, reg nlines13:V, reg as_integer1:cls, reg r482:V, reg p86:p(V +), reg r484:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r485:V, reg r486:V, reg row_names3:*, reg row_names4:V, reg c137:L, reg c138:L, reg sym73:cls, reg base73:cls, reg guard73:L, reg r487:V, reg r488:V, reg row_names5:*, reg row_names6:V, reg length18:cls, reg r489:V, reg r490:V, reg c139:L, reg cols43:*, reg cols44:V, reg r491:V, reg c140:L, reg r493:V, reg dr58:V, reg dc29:L, reg dx70:V, reg dx71:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r496:V, reg r497:V, reg r498:V, reg col_names27:*, reg col_names28:V, reg row_names7:*, reg row_names8:V, reg match2:cls, reg r499:V, reg r500:V, reg __21:cls, reg r501:V, reg data41:*, reg data42:V, reg c141:L, reg data44:V, reg dr60:V, reg dc30:L, reg dx72:V, reg dx73:V, reg rowvar:*, reg rowvar1:V, reg __22:cls, reg r502:V, reg data45:*, reg data46:V, reg c142:L, reg data48:V, reg dr62:V, reg dc31:L, reg dx74:V, reg dx75:V, reg rowvar2:*, reg rowvar3:V, reg r503:V, reg __23:cls, reg r504:V, reg keep8:*, reg keep9:V, reg c143:L, reg keep11:V, reg dr64:V, reg dc32:L, reg dx76:V, reg dx77:V, reg rowvar4:*, reg rowvar5:V, reg r505:V, reg __24:cls, reg r506:V, reg dx78:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r507:V, reg r508:V, reg row_names9:*, reg row_names10:V, reg is_numeric1:cls, reg r509:V, reg c144:L, reg c146:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r510:V, reg c149:L, reg r511:V, reg row_names11:*, reg row_names12:V, reg length19:cls, reg r512:V, reg r513:V, reg c150:L, reg c151:V, reg c153:L, reg row_names13:*, reg row_names14:V, reg data49:*, reg data50:V, reg c154:L, reg data52:V, reg dr66:V, reg dc33:L, reg dx79:V, reg dx80:V, reg rlabp10:*, reg rlabp11:V, reg __25:cls, reg r514:V, reg data53:*, reg data54:V, reg c155:L, reg data56:V, reg dr68:V, reg dc34:L, reg dx81:V, reg dx82:V, reg rlabp12:*, reg rlabp13:V, reg r515:V, reg __26:cls, reg r516:V, reg keep12:*, reg keep13:V, reg c156:L, reg keep15:V, reg dr70:V, reg dc35:L, reg dx83:V, reg dx84:V, reg rlabp14:*, reg rlabp15:V, reg r517:V, reg __27:cls, reg r518:V, reg stop8:cls, reg r519:V, reg data57:*, reg data58:V, reg c157:L, reg data60:V, reg dr72:V, reg dc36:L, reg dx85:V, reg dx86:V, reg keep16:*, reg keep17:V, reg __28:cls, reg r520:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r521:V, reg r522:V, reg row_names15:*, reg row_names16:V, reg c158:L, reg c159:L, reg c160:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r523:V, reg c164:L, reg r524:V, reg row_names17:*, reg row_names18:V, reg c165:L, reg r525:V, reg c166:L, reg c167:V, reg c169:L, reg sym79:cls, reg base79:cls, reg guard79:L, reg r526:V, reg r527:V, reg row_names19:*, reg row_names20:V, reg as_character:cls, reg r528:V, reg compactRN:*, reg compactRN1:V, reg r530:V, reg c170:L, reg sym80:cls, reg base80:cls, reg guard80:L, reg r531:V, reg r532:V, reg row_names21:*, reg row_names22:V, reg length20:cls, reg r533:V, reg nlines14:*, reg nlines15:V, reg r534:V, reg c171:L, reg stop9:cls, reg r535:V, reg anyDuplicated:cls, reg row_names23:*, reg row_names24:V, reg p87:p(V +), reg r538:V, reg c172:L, reg stop10:cls, reg r539:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r541:V, reg r542:V, reg row_names25:*, reg row_names26:V, reg anyNA:cls, reg r543:V, reg c173:L, reg stop11:cls, reg r544:V, reg r545:V, reg l36:*, reg class__:cls, reg r547:V, reg row_names27:*, reg row_names28:V, reg l37:*, reg attr__:cls, reg r548:V, reg data61:*, reg data62:V |
    mkenv;
    st file = file;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(FALSE) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1("") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L2("\"'") else L2(quote);
  L2(quote_orDefault):
    st quote = quote_orDefault;
    dec_isMissing = missing.0(dec);
    if dec_isMissing then L3(".") else L3(dec);
  L3(dec_orDefault):
    st dec = dec_orDefault;
    numerals_isMissing = missing.0(numerals);
    if numerals_isMissing then L4() else L5(numerals);
  L4():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("allow.loss", "warn.loss", "no.loss");
      goto L0(r2);
    L2():
      r = dyn base("allow.loss", "warn.loss", "no.loss");
      goto L0(r);
    };
    goto L5(p);
  L5(numerals_orDefault):
    st numerals = numerals_orDefault;
    st `row.names` = row_names;
    st `col.names` = col_names;
    as_is_isMissing = missing.0(as_is);
    if as_is_isMissing then L6() else L7(as_is);
  L6():
    p1 = prom<V +>{
      stringsAsFactors1 = ld stringsAsFactors;
      stringsAsFactors2 = force? stringsAsFactors1;
      checkMissing(stringsAsFactors2);
      r4 = `!`(stringsAsFactors2);
      return r4;
    };
    goto L7(p1);
  L7(as_is_orDefault):
    st `as.is` = as_is_orDefault;
    tryLogical_isMissing = missing.0(tryLogical);
    if tryLogical_isMissing then L8(TRUE) else L8(tryLogical);
  L8(tryLogical_orDefault):
    st tryLogical = tryLogical_orDefault;
    na_strings_isMissing = missing.0(na_strings);
    if na_strings_isMissing then L9("NA") else L9(na_strings);
  L9(na_strings_orDefault):
    st `na.strings` = na_strings_orDefault;
    colClasses_isMissing = missing.0(colClasses);
    if colClasses_isMissing then L10(NA_LGL) else L10(colClasses);
  L10(colClasses_orDefault):
    st colClasses = colClasses_orDefault;
    nrows_isMissing = missing.0(nrows);
    if nrows_isMissing then L11() else L12(nrows);
  L11():
    p2 = prom<V +>{
      return -1.0;
    };
    goto L12(p2);
  L12(nrows_orDefault):
    st nrows = nrows_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L13(0.0) else L13(skip);
  L13(skip_orDefault):
    st skip = skip_orDefault;
    check_names_isMissing = missing.0(check_names);
    if check_names_isMissing then L14(TRUE) else L14(check_names);
  L14(check_names_orDefault):
    st `check.names` = check_names_orDefault;
    fill_isMissing = missing.0(fill);
    if fill_isMissing then L15() else L16(fill);
  L15():
    p3 = prom<V +>{
      blank_lines_skip1 = ld `blank.lines.skip`;
      blank_lines_skip2 = force? blank_lines_skip1;
      checkMissing(blank_lines_skip2);
      r7 = `!`(blank_lines_skip2);
      return r7;
    };
    goto L16(p3);
  L16(fill_orDefault):
    st fill = fill_orDefault;
    strip_white_isMissing = missing.0(strip_white);
    if strip_white_isMissing then L17(FALSE) else L17(strip_white);
  L17(strip_white_orDefault):
    st `strip.white` = strip_white_orDefault;
    blank_lines_skip_isMissing = missing.0(blank_lines_skip);
    if blank_lines_skip_isMissing then L18(TRUE) else L18(blank_lines_skip);
  L18(blank_lines_skip_orDefault):
    st `blank.lines.skip` = blank_lines_skip_orDefault;
    comment_char_isMissing = missing.0(comment_char);
    if comment_char_isMissing then L19("#") else L19(comment_char);
  L19(comment_char_orDefault):
    st `comment.char` = comment_char_orDefault;
    allowEscapes_isMissing = missing.0(allowEscapes);
    if allowEscapes_isMissing then L20(FALSE) else L20(allowEscapes);
  L20(allowEscapes_orDefault):
    st allowEscapes = allowEscapes_orDefault;
    flush_isMissing = missing.0(flush);
    if flush_isMissing then L21(FALSE) else L21(flush);
  L21(flush_orDefault):
    st flush = flush_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L22(FALSE) else L22(stringsAsFactors);
  L22(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    fileEncoding_isMissing = missing.0(fileEncoding);
    if fileEncoding_isMissing then L23("") else L23(fileEncoding);
  L23(fileEncoding_orDefault):
    st fileEncoding = fileEncoding_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L24("unknown") else L24(encoding);
  L24(encoding_orDefault):
    st encoding = encoding_orDefault;
    st text = text;
    skipNul_isMissing = missing.0(skipNul);
    if skipNul_isMissing then L25(FALSE) else L25(skipNul);
  L25(skipNul_orDefault):
    st skipNul = skipNul_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L229() else L230();
  L26(r10):
    c1 = `as.logical`(r10);
    if c1 then L231() else L27(c1);
  L229():
    missing = ldf missing in base;
    r11 = dyn missing(<sym file>);
    goto L26(r11);
  L230():
    r9 = dyn base1(<sym file>);
    goto L26(r9);
  L27(c3):
    c10 = `as.logical`(c3);
    if c10 then L235() else L29();
  L231():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L232() else L233();
  L28(c6, r13):
    r15 = `!`(r13);
    c7 = `as.logical`(r15);
    c8 = `&&`(c6, c7);
    goto L27(c8);
  L29():
    goto L31();
  L31():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L241() else L242();
  L232():
    missing1 = ldf missing in base;
    r14 = dyn missing1(<sym text>);
    goto L28(c1, r14);
  L233():
    r12 = dyn base2(<sym text>);
    goto L28(c1, r12);
  L235():
    textConnection = ldf textConnection;
    check L236() else D0();
  D0():
    deopt 9 [];
  L32(r23):
    c12 = `as.logical`(r23);
    if c12 then L244() else L33();
  L236():
    p4 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r17 = dyn textConnection[, encoding](p4, "UTF-8");
    check L237() else D1();
  L241():
    file1 = ld file;
    check L243() else D2();
  L242():
    r22 = dyn base4(<sym file>);
    goto L32(r22);
  D1():
    deopt 13 [r17];
  D2():
    deopt 24 [file1];
  L33():
    goto L38();
  L38():
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L258() else L259();
  L237():
    st file = r17;
    st encoding = "UTF-8";
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L238() else L239();
  L243():
    file2 = force? file1;
    checkMissing(file2);
    c11 = `is.character`(file2);
    goto L32(c11);
  L244():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L245() else L246();
  L30(r19):
    goto L31();
  L34(r25):
    c13 = `as.logical`(r25);
    if c13 then L249() else L35();
  L39(r38):
    r40 = `!`(r38);
    c14 = `as.logical`(r40);
    if c14 then L262() else L40();
  L238():
    on_exit = ldf `on.exit` in base;
    r20 = dyn on_exit(<lang close(file)>);
    goto L30(r20);
  L239():
    r18 = dyn base3(<lang close(file)>);
    goto L30(r18);
  L245():
    fileEncoding1 = ld fileEncoding;
    check L247() else D3();
  L246():
    r24 = dyn base5(<sym fileEncoding>);
    goto L34(r24);
  L258():
    file9 = ld file;
    check L260() else D9();
  L259():
    r37 = dyn base7(<sym file>, "connection");
    goto L39(r37);
  D3():
    deopt 29 [fileEncoding1];
  D9():
    deopt 53 [file9];
  L35():
    file6 = ldf file;
    check L253() else D7();
  L36(r30):
    st file = r30;
    sym6 = ldf `on.exit`;
    base6 = ldf `on.exit` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L255() else L256();
  L40():
    goto L41();
  L41():
    isOpen = ldf isOpen;
    check L266() else D13();
  L247():
    fileEncoding2 = force? fileEncoding1;
    checkMissing(fileEncoding2);
    nzchar = ldf nzchar in base;
    r26 = dyn nzchar(fileEncoding2);
    check L248() else D4();
  L249():
    file3 = ldf file;
    check L250() else D5();
  L260():
    file10 = force? file9;
    checkMissing(file10);
    inherits = ldf inherits in base;
    r39 = dyn inherits(file10, "connection", FALSE);
    check L261() else D10();
  L262():
    stop = ldf stop;
    check L263() else D11();
  D4():
    deopt 32 [r26];
  D5():
    deopt 34 [];
  D7():
    deopt 41 [];
  D10():
    deopt 58 [r39];
  D11():
    deopt 61 [];
  D13():
    deopt 67 [];
  L37(r34):
    goto L38();
  L248():
    goto L34(r26);
  L250():
    p5 = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    p6 = prom<V +>{
      fileEncoding3 = ld fileEncoding;
      fileEncoding4 = force? fileEncoding3;
      checkMissing(fileEncoding4);
      return fileEncoding4;
    };
    r29 = dyn file3[, , encoding](p5, "rt", p6);
    check L251() else D6();
  L253():
    p7 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r32 = dyn file6(p7, "rt");
    check L254() else D8();
  L255():
    on_exit1 = ldf `on.exit` in base;
    r35 = dyn on_exit1(<lang close(file)>);
    goto L37(r35);
  L256():
    r33 = dyn base6(<lang close(file)>);
    goto L37(r33);
  L261():
    goto L39(r39);
  L263():
    r41 = dyn stop("'file' must be a character string or connection");
    check L264() else D12();
  L266():
    p8 = prom<V +>{
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    r44 = dyn isOpen(p8, "rt");
    check L267() else D14();
  D6():
    deopt 39 [r29];
  D8():
    deopt 44 [r32];
  D12():
    deopt 63 [r41];
  D14():
    deopt 70 [r44];
  L251():
    goto L36(r29);
  L254():
    goto L36(r32);
  L264():
    goto L41();
  L267():
    r45 = `!`(r44);
    c15 = `as.logical`(r45);
    if c15 then L268() else L42();
  L42():
    goto L44();
  L44():
    _in_ = ldf `%in%`;
    check L274() else D17();
  L268():
    open = ldf open;
    check L269() else D15();
  D15():
    deopt 73 [];
  D17():
    deopt 83 [];
  L269():
    p9 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    r47 = dyn open(p9, "rt");
    check L270() else D16();
  L274():
    p10 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p11 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      c16 = ldf c in base;
      r55 = dyn c16("", "bytes", "UTF-8");
      goto L0(r55);
    L2():
      r53 = dyn base9("", "bytes", "UTF-8");
      goto L0(r53);
    };
    r57 = dyn _in_(p10, p11);
    check L275() else D18();
  D16():
    deopt 76 [r47];
  D18():
    deopt 86 [r57];
  L270():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L271() else L272();
  L275():
    c17 = `as.logical`(r57);
    if c17 then L276() else L45();
  L43(r49):
    goto L44();
  L45():
    goto L46("bytes");
  L46(encoding5):
    st pbEncoding = encoding5;
    match_arg = ldf `match.arg`;
    check L279() else D20();
  L271():
    on_exit2 = ldf `on.exit` in base;
    r50 = dyn on_exit2(<lang close(file)>);
    goto L43(r50);
  L272():
    r48 = dyn base8(<lang close(file)>);
    goto L43(r48);
  L276():
    encoding3 = ld encoding;
    check L277() else D19();
  D19():
    deopt 87 [encoding3];
  D20():
    deopt 93 [];
  L277():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    goto L46(encoding4);
  L279():
    p12 = prom<V +>{
      numerals1 = ld numerals;
      numerals2 = force? numerals1;
      checkMissing(numerals2);
      return numerals2;
    };
    r59 = dyn match_arg(p12);
    check L280() else D21();
  D21():
    deopt 95 [r59];
  L280():
    st numerals = r59;
    skip1 = ld skip;
    check L281() else D22();
  D22():
    deopt 97 [skip1];
  L281():
    skip2 = force? skip1;
    checkMissing(skip2);
    r60 = `>`(skip2, 0);
    c18 = `as.logical`(r60);
    if c18 then L282() else L47();
  L47():
    goto L48();
  L48():
    nrows1 = ld nrows;
    check L286() else D25();
  L282():
    readLines = ldf readLines;
    check L283() else D23();
  D23():
    deopt 102 [];
  D25():
    deopt 108 [nrows1];
  L283():
    p13 = prom<V +>{
      file15 = ld file;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    p14 = prom<V +>{
      skip3 = ld skip;
      skip4 = force? skip3;
      checkMissing(skip4);
      return skip4;
    };
    r63 = dyn readLines(p13, p14);
    check L284() else D24();
  L286():
    nrows2 = force? nrows1;
    checkMissing(nrows2);
    r65 = `<`(nrows2, 0);
    c19 = `as.logical`(r65);
    if c19 then L287() else L49();
  D24():
    deopt 105 [r63];
  L49():
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L289() else L290();
  L50(r66):
    st n0lines = r66;
    st nlines = r66;
    sym11 = ldf `.External`;
    base11 = ldf `.External` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L294() else L295();
  L284():
    goto L48();
  L287():
    goto L50(5.0);
  L51(r71):
    st lines = r71;
    _in_1 = ldf `%in%`;
    check L305() else D38();
  L289():
    header1 = ld header;
    check L291() else D26();
  L290():
    r67 = dyn base10(5, <lang `(`(`+`(header, nrows))>);
    goto L50(r67);
  L294():
    C_readtablehead = ld C_readtablehead;
    check L296() else D29();
  L295():
    r70 = dyn base11(<sym C_readtablehead>, <sym file>, <sym nlines>, <sym comment.char>, <sym blank.lines.skip>, <sym quote>, <sym sep>, <sym skipNul>);
    goto L51(r70);
  D26():
    deopt 117 [header1];
  D29():
    deopt 127 [C_readtablehead];
  D38():
    deopt 147 [];
  L291():
    header2 = force? header1;
    checkMissing(header2);
    nrows3 = ld nrows;
    check L292() else D27();
  L296():
    C_readtablehead1 = force? C_readtablehead;
    checkMissing(C_readtablehead1);
    file17 = ld file;
    check L297() else D30();
  L305():
    p15 = prom<V +>{
      encoding6 = ld encoding;
      encoding7 = force? encoding6;
      checkMissing(encoding7);
      return encoding7;
    };
    p16 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c20 = ldf c in base;
      r76 = dyn c20("UTF-8", "latin1");
      goto L0(r76);
    L2():
      r74 = dyn base12("UTF-8", "latin1");
      goto L0(r74);
    };
    r78 = dyn _in_1(p15, p16);
    check L306() else D39();
  D27():
    deopt 118 [header2, nrows3];
  D30():
    deopt 129 [file17];
  D39():
    deopt 150 [r78];
  L292():
    nrows4 = force? nrows3;
    checkMissing(nrows4);
    r68 = `+`(header2, nrows4);
    min = ldf min in base;
    r69 = dyn min(5, r68);
    check L293() else D28();
  L297():
    file18 = force? file17;
    checkMissing(file18);
    nlines = ld nlines;
    check L298() else D31();
  L306():
    c21 = `as.logical`(r78);
    if c21 then L307() else L52();
  D28():
    deopt 122 [r69];
  D31():
    deopt 131 [nlines];
  L52():
    goto L53();
  L53():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L312() else L313();
  L293():
    goto L50(r69);
  L298():
    nlines1 = force? nlines;
    checkMissing(nlines1);
    comment_char1 = ld `comment.char`;
    check L299() else D32();
  L307():
    encoding8 = ld encoding;
    check L308() else D40();
  D32():
    deopt 133 [comment_char1];
  D40():
    deopt 151 [encoding8];
  L54(r81):
    st nlines = r81;
    nlines2 = ld nlines;
    check L316() else D45();
  L299():
    comment_char2 = force? comment_char1;
    checkMissing(comment_char2);
    blank_lines_skip3 = ld `blank.lines.skip`;
    check L300() else D33();
  L308():
    encoding9 = force? encoding8;
    checkMissing(encoding9);
    l = ld lines;
    Encoding__ = ldf `Encoding<-`;
    check L309() else D41();
  L312():
    lines = ld lines;
    check L314() else D43();
  L313():
    r80 = dyn base13(<sym lines>);
    goto L54(r80);
  D33():
    deopt 135 [blank_lines_skip3];
  D41():
    deopt 154 [encoding9, l, encoding9];
  D43():
    deopt 162 [lines];
  D45():
    deopt 167 [nlines2];
  L300():
    blank_lines_skip4 = force? blank_lines_skip3;
    checkMissing(blank_lines_skip4);
    quote1 = ld quote;
    check L301() else D34();
  L309():
    r79 = dyn Encoding__(l, NULL, encoding9);
    check L310() else D42();
  L314():
    lines1 = force? lines;
    checkMissing(lines1);
    length = ldf length in base;
    r82 = dyn length(lines1);
    check L315() else D44();
  L316():
    nlines3 = force? nlines2;
    checkMissing(nlines3);
    r83 = `!`(nlines3);
    c22 = `as.logical`(r83);
    if c22 then L317() else L55();
  D34():
    deopt 137 [quote1];
  D42():
    deopt 156 [encoding9, r79];
  D44():
    deopt 165 [r82];
  L55():
    sym16 = ldf all;
    base16 = ldf all in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L329() else L330();
  L60():
    check_names1 = ld `check.names`;
    check L482() else D123();
  L301():
    quote2 = force? quote1;
    checkMissing(quote2);
    sep1 = ld sep;
    check L302() else D35();
  L310():
    st lines = r79;
    goto L53();
  L315():
    goto L54(r82);
  L317():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L318() else L319();
  D35():
    deopt 139 [sep1];
  D123():
    deopt 494 [check_names1];
  L56(r85):
    c23 = `as.logical`(r85);
    if c23 then L320() else L57();
  L61(r94):
    c24 = `as.logical`(r94);
    if c24 then L336() else L63();
  L302():
    sep2 = force? sep1;
    checkMissing(sep2);
    skipNul1 = ld skipNul;
    check L303() else D36();
  L318():
    missing2 = ldf missing in base;
    r86 = dyn missing2(<sym col.names>);
    goto L56(r86);
  L319():
    r84 = dyn base14(<sym col.names>);
    goto L56(r84);
  L329():
    sym17 = ldf nzchar;
    base17 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L331() else L332();
  L330():
    r93 = dyn base16(<lang `!`(nzchar(lines))>);
    goto L61(r93);
  L482():
    check_names2 = force? check_names1;
    checkMissing(check_names2);
    c81 = `as.logical`(check_names2);
    if c81 then L483() else L112();
  D36():
    deopt 141 [skipNul1];
  L57():
    goto L58();
  L58():
    st rlabp = FALSE;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L324() else L325();
  L62(r96):
    r98 = `!`(r96);
    all = ldf all in base;
    r99 = dyn all(r98);
    check L335() else D52();
  L63():
    goto L64();
  L64():
    nlines4 = ld nlines;
    check L340() else D55();
  L112():
    goto L113();
  L113():
    rlabp4 = ld rlabp;
    check L487() else D126();
  L303():
    skipNul2 = force? skipNul1;
    checkMissing(skipNul2);
    _External = ldf `.External` in base;
    r72 = dyn _External(C_readtablehead1, file18, nlines1, comment_char2, blank_lines_skip4, quote2, sep2, skipNul2);
    check L304() else D37();
  L320():
    stop1 = ldf stop;
    check L321() else D46();
  L331():
    lines2 = ld lines;
    check L333() else D50();
  L332():
    r95 = dyn base17(<sym lines>);
    goto L62(r95);
  L336():
    stop2 = ldf stop;
    check L337() else D53();
  L483():
    make_names = ldf `make.names`;
    check L484() else D124();
  D37():
    deopt 144 [r72];
  D46():
    deopt 174 [];
  D50():
    deopt 193 [lines2];
  D52():
    deopt 199 [r99];
  D53():
    deopt 201 [];
  D55():
    deopt 206 [nlines4];
  D124():
    deopt 497 [];
  D126():
    deopt 505 [rlabp4];
  L59(r90):
    st cols = r90;
    goto L60();
  L304():
    goto L51(r72);
  L321():
    r87 = dyn stop1("no lines available in input");
    check L322() else D47();
  L324():
    col_names1 = ld `col.names`;
    check L326() else D48();
  L325():
    r89 = dyn base15(<sym col.names>);
    goto L59(r89);
  L333():
    lines3 = force? lines2;
    checkMissing(lines3);
    nzchar1 = ldf nzchar in base;
    r97 = dyn nzchar1(lines3);
    check L334() else D51();
  L335():
    goto L61(r99);
  L337():
    r100 = dyn stop2("empty beginning of file");
    check L338() else D54();
  L340():
    nlines5 = force? nlines4;
    checkMissing(nlines5);
    n0lines = ld n0lines;
    check L341() else D56();
  L484():
    p43 = prom<V +>{
      col_names15 = ld `col.names`;
      col_names16 = force? col_names15;
      checkMissing(col_names16);
      return col_names16;
    };
    r227 = dyn make_names[, unique](p43, TRUE);
    check L485() else D125();
  L487():
    rlabp5 = force? rlabp4;
    checkMissing(rlabp5);
    c82 = `as.logical`(rlabp5);
    if c82 then L488() else L114();
  D47():
    deopt 176 [r87];
  D48():
    deopt 184 [col_names1];
  D51():
    deopt 196 [r97];
  D54():
    deopt 203 [r100];
  D56():
    deopt 207 [nlines5, n0lines];
  D125():
    deopt 501 [r227];
  L114():
    goto L116();
  L116():
    sym38 = ldf names;
    base38 = ldf names in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L494() else L495();
  L322():
    goto L58();
  L326():
    col_names2 = force? col_names1;
    checkMissing(col_names2);
    length1 = ldf length in base;
    r91 = dyn length1(col_names2);
    check L327() else D49();
  L334():
    goto L62(r97);
  L338():
    goto L64();
  L341():
    n0lines1 = force? n0lines;
    checkMissing(n0lines1);
    r102 = `<`(nlines5, n0lines1);
    c25 = `as.logical`(r102);
    if c25 then L342() else L65(c25);
  L485():
    st `col.names` = r227;
    goto L113();
  L488():
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L489() else L490();
  D49():
    deopt 187 [r91];
  L65(c27):
    c31 = `as.logical`(c27);
    if c31 then L345() else L66();
  L115(r230):
    st `col.names` = r230;
    goto L116();
  L117(r234):
    st nmColClasses = r234;
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L498() else L499();
  L327():
    goto L59(r91);
  L342():
    file19 = ld file;
    check L343() else D57();
  L489():
    col_names17 = ld `col.names`;
    check L491() else D127();
  L490():
    r229 = dyn base37("row.names", <sym col.names>);
    goto L115(r229);
  L494():
    colClasses1 = ld colClasses;
    check L496() else D129();
  L495():
    r233 = dyn base38(<sym colClasses>);
    goto L117(r233);
  D57():
    deopt 210 [c25, file19];
  D127():
    deopt 510 [col_names17];
  D129():
    deopt 519 [colClasses1];
  L66():
    pushBack1 = ldf pushBack;
    check L351() else D60();
  L68():
    scan = ldf scan;
    check L353() else D62();
  L118(r237):
    c85 = `as.logical`(r237);
    if c85 then L501() else L119();
  L343():
    file20 = force? file19;
    checkMissing(file20);
    r103 = `==`(file20, 0);
    c28 = `as.logical`(r103);
    c29 = `&&`(c25, c28);
    goto L65(c29);
  L345():
    pushBack = ldf pushBack;
    check L346() else D58();
  L491():
    col_names18 = force? col_names17;
    checkMissing(col_names18);
    c83 = ldf c in base;
    r231 = dyn c83("row.names", col_names18);
    check L492() else D128();
  L496():
    colClasses2 = force? colClasses1;
    checkMissing(colClasses2);
    names = ldf names in base;
    r235 = dyn names(colClasses2);
    check L497() else D130();
  L498():
    nmColClasses = ld nmColClasses;
    check L500() else D131();
  L499():
    r236 = dyn base39(<sym nmColClasses>);
    goto L118(r236);
  D58():
    deopt 216 [];
  D60():
    deopt 226 [];
  D62():
    deopt 233 [];
  D128():
    deopt 513 [r231];
  D130():
    deopt 522 [r235];
  D131():
    deopt 525 [nmColClasses];
  L119():
    sym42 = ldf rep_len;
    base42 = ldf rep_len in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L515() else L516();
  L124():
    sym45 = ldf `rep.int`;
    base45 = ldf `rep.int` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L549() else L550();
  L346():
    p17 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      c32 = ldf c in base;
      r106 = dyn c32(lines5, lines7, "");
      goto L0(r106);
    L2():
      r104 = dyn base18(<sym lines>, <sym lines>, "");
      goto L0(r104);
    };
    p18 = prom<V +>{
      file21 = ld file;
      file22 = force? file21;
      checkMissing(file22);
      return file22;
    };
    p19 = prom<V +>{
      pbEncoding = ld pbEncoding;
      pbEncoding1 = force? pbEncoding;
      checkMissing(pbEncoding1);
      return pbEncoding1;
    };
    r110 = dyn pushBack[, , encoding](p17, p18, p19);
    check L347() else D59();
  L351():
    p20 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      c33 = ldf c in base;
      r117 = dyn c33(lines9, lines11);
      goto L0(r117);
    L2():
      r115 = dyn base20(<sym lines>, <sym lines>);
      goto L0(r115);
    };
    p21 = prom<V +>{
      file23 = ld file;
      file24 = force? file23;
      checkMissing(file24);
      return file24;
    };
    p22 = prom<V +>{
      pbEncoding2 = ld pbEncoding;
      pbEncoding3 = force? pbEncoding2;
      checkMissing(pbEncoding3);
      return pbEncoding3;
    };
    r121 = dyn pushBack1[, , encoding](p20, p21, p22);
    check L352() else D61();
  L353():
    p23 = prom<V +>{
      file25 = ld file;
      file26 = force? file25;
      checkMissing(file26);
      return file26;
    };
    p24 = prom<V +>{
      sep3 = ld sep;
      sep4 = force? sep3;
      checkMissing(sep4);
      return sep4;
    };
    p25 = prom<V +>{
      quote3 = ld quote;
      quote4 = force? quote3;
      checkMissing(quote4);
      return quote4;
    };
    p26 = prom<V +>{
      blank_lines_skip5 = ld `blank.lines.skip`;
      blank_lines_skip6 = force? blank_lines_skip5;
      checkMissing(blank_lines_skip6);
      return blank_lines_skip6;
    };
    p27 = prom<V +>{
      character = ldf character;
      r126 = dyn character(0.0);
      return r126;
    };
    p28 = prom<V +>{
      comment_char3 = ld `comment.char`;
      comment_char4 = force? comment_char3;
      checkMissing(comment_char4);
      return comment_char4;
    };
    p29 = prom<V +>{
      allowEscapes1 = ld allowEscapes;
      allowEscapes2 = force? allowEscapes1;
      checkMissing(allowEscapes2);
      return allowEscapes2;
    };
    p30 = prom<V +>{
      encoding11 = ld encoding;
      encoding12 = force? encoding11;
      checkMissing(encoding12);
      return encoding12;
    };
    p31 = prom<V +>{
      skipNul3 = ld skipNul;
      skipNul4 = force? skipNul3;
      checkMissing(skipNul4);
      return skipNul4;
    };
    r132 = dyn scan[, what, sep, quote, nlines, quiet, skip, `strip.white`, `blank.lines.skip`, `na.strings`, `comment.char`, allowEscapes, encoding, skipNul](p23, "", p24, p25, 1.0, TRUE, 0.0, TRUE, p26, p27, p28, p29, p30, p31);
    check L354() else D63();
  L492():
    goto L115(r231);
  L497():
    goto L117(r235);
  L500():
    nmColClasses1 = force? nmColClasses;
    checkMissing(nmColClasses1);
    c84 = `==`(nmColClasses1, NULL);
    goto L118(c84);
  L501():
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L502() else L503();
  D59():
    deopt 221 [r110];
  D61():
    deopt 231 [r121];
  D63():
    deopt 261 [r132];
  L120(r239):
    cols14 = ld cols;
    check L506() else D134();
  L125(r248):
    st tmp = r248;
    col_names19 = ld `col.names`;
    check L519() else D140();
  L133(r266):
    st what = r266;
    col_names23 = ld `col.names`;
    check L556() else D158();
  L347():
    sym19 = ldf `on.exit`;
    base19 = ldf `on.exit` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L348() else L349();
  L352():
    goto L68();
  L354():
    st first = r132;
    sym21 = ldf missing;
    base21 = ldf missing in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L355() else L356();
  L502():
    colClasses3 = ld colClasses;
    check L504() else D132();
  L503():
    r238 = dyn base40(<sym colClasses>);
    goto L120(r238);
  L515():
    cols18 = ld cols;
    check L517() else D138();
  L516():
    r247 = dyn base42(NA_STR, <sym cols>);
    goto L125(r247);
  L549():
    sym46 = ldf list;
    base46 = ldf list in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L551() else L552();
  L550():
    r265 = dyn base45(<lang list("")>, <sym cols>);
    goto L133(r265);
  D132():
    deopt 530 [colClasses3];
  D134():
    deopt 533 [r239, cols14];
  D138():
    deopt 550 [cols18];
  D140():
    deopt 555 [col_names19];
  D158():
    deopt 619 [col_names23];
  L67(r112):
    goto L68();
  L69(r134):
    c34 = `as.logical`(r134);
    if c34 then L357() else L70();
  L134(r268):
    cols20 = ld cols;
    check L554() else D156();
  L348():
    on_exit3 = ldf `on.exit` in base;
    r113 = dyn on_exit3(<lang `(`(clearPushBack(stdin()))>);
    goto L67(r113);
  L349():
    r111 = dyn base19(<lang `(`(clearPushBack(stdin()))>);
    goto L67(r111);
  L355():
    missing3 = ldf missing in base;
    r135 = dyn missing3(<sym col.names>);
    goto L69(r135);
  L356():
    r133 = dyn base21(<sym col.names>);
    goto L69(r133);
  L504():
    colClasses4 = force? colClasses3;
    checkMissing(colClasses4);
    length11 = ldf length in base;
    r240 = dyn length11(colClasses4);
    check L505() else D133();
  L506():
    cols15 = force? cols14;
    checkMissing(cols15);
    r241 = `<`(r239, cols15);
    c86 = `as.logical`(r241);
    if c86 then L507() else L121();
  L517():
    cols19 = force? cols18;
    checkMissing(cols19);
    rep_len1 = ldf rep_len in base;
    r249 = dyn rep_len1(NA_STR, cols19);
    check L518() else D139();
  L519():
    col_names20 = force? col_names19;
    checkMissing(col_names20);
    l5 = ld tmp;
    names__ = ldf `names<-`;
    check L520() else D141();
  L551():
    list = ldf list in base;
    r269 = dyn list("");
    check L553() else D155();
  L552():
    r267 = dyn base46("");
    goto L134(r267);
  L556():
    col_names24 = force? col_names23;
    checkMissing(col_names24);
    l13 = ld what;
    names__1 = ldf `names<-`;
    check L557() else D159();
  D133():
    deopt 533 [r240];
  D139():
    deopt 553 [r249];
  D141():
    deopt 558 [col_names20, l5, col_names20];
  D155():
    deopt 613 [r269];
  D156():
    deopt 614 [cols20];
  D159():
    deopt 622 [col_names24, l13, col_names24];
  L70():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L363() else L364();
  L72(r139):
    st col1 = r139;
    numeric = ldf numeric;
    check L367() else D68();
  L121():
    goto L123(NULL);
  L123(r245):
    goto L124();
  L357():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L358() else L359();
  L505():
    goto L120(r240);
  L507():
    sym41 = ldf rep_len;
    base41 = ldf rep_len in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L508() else L509();
  L518():
    goto L125(r249);
  L520():
    r250 = dyn names__(l5, NULL, col_names20);
    check L521() else D142();
  L553():
    goto L134(r269);
  L554():
    cols21 = force? cols20;
    checkMissing(cols21);
    rep_int = ldf `rep.int` in base;
    r270 = dyn rep_int(r268, cols21);
    check L555() else D157();
  L557():
    r271 = dyn names__1(l13, NULL, col_names24);
    check L558() else D160();
  D68():
    deopt 280 [];
  D142():
    deopt 560 [col_names20, r250];
  D157():
    deopt 617 [r270];
  D160():
    deopt 624 [col_names24, r271];
  L71(r137):
    goto L72(r137);
  L122(r243):
    st colClasses = r243;
    goto L123(r243);
  L358():
    first = ld first;
    check L360() else D64();
  L359():
    r136 = dyn base22(<sym first>);
    goto L71(r136);
  L363():
    col_names3 = ld `col.names`;
    check L365() else D66();
  L364():
    r140 = dyn base23(<sym col.names>);
    goto L72(r140);
  L367():
    p32 = prom<V +>{
      nlines6 = ld nlines;
      nlines7 = force? nlines6;
      checkMissing(nlines7);
      r142 = `-`(nlines7, 1);
      return r142;
    };
    r144 = dyn numeric(p32);
    check L368() else D69();
  L508():
    colClasses5 = ld colClasses;
    check L510() else D135();
  L509():
    r242 = dyn base41(<sym colClasses>, <sym cols>);
    goto L122(r242);
  L521():
    st tmp = r250;
    sym43 = ldf match;
    base43 = ldf match in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L522() else L523();
  L555():
    goto L133(r270);
  L558():
    st what = r271;
    l14 = ld colClasses;
    c91 = `is.object`(l14);
    if c91 then L559() else L560("numeric", l14);
  D64():
    deopt 268 [first];
  D66():
    deopt 274 [col_names3];
  D69():
    deopt 282 [r144];
  D135():
    deopt 538 [colClasses5];
  L126(r252):
    st i = r252;
    sym44 = ldf any;
    base44 = ldf any in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L527() else L528();
  L135(dx21):
    st colClasses = dx21;
    _in_3 = ldf `%in%`;
    check L564() else D163();
  L360():
    first1 = force? first;
    checkMissing(first1);
    length2 = ldf length in base;
    r138 = dyn length2(first1);
    check L361() else D65();
  L365():
    col_names4 = force? col_names3;
    checkMissing(col_names4);
    length3 = ldf length in base;
    r141 = dyn length3(col_names4);
    check L366() else D67();
  L368():
    st col = r144;
    nlines8 = ld nlines;
    check L369() else D70();
  L510():
    colClasses6 = force? colClasses5;
    checkMissing(colClasses6);
    cols16 = ld cols;
    check L511() else D136();
  L522():
    nmColClasses2 = ld nmColClasses;
    check L524() else D143();
  L523():
    r251 = dyn base43(<sym nmColClasses>, <sym col.names>, 0);
    goto L126(r251);
  L559():
    dr8 = tryDispatchBuiltin.0("[<-", l14, "numeric");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L561() else L560("numeric", dr8);
  L560(r273, l16):
    _in_2 = ldf `%in%`;
    check L562() else D161();
  D65():
    deopt 271 [r138];
  D67():
    deopt 277 [r141];
  D70():
    deopt 284 [nlines8];
  D136():
    deopt 540 [cols16];
  D143():
    deopt 564 [nmColClasses2];
  D161():
    deopt 630 [r273, l16, "numeric"];
  D163():
    deopt 637 [];
  L127(r255):
    c87 = `as.logical`(r255);
    if c87 then L531() else L128();
  L361():
    goto L71(r138);
  L366():
    goto L72(r141);
  L369():
    nlines9 = force? nlines8;
    checkMissing(nlines9);
    r145 = `>`(nlines9, 1);
    c35 = `as.logical`(r145);
    if c35 then L370() else L73();
  L511():
    cols17 = force? cols16;
    checkMissing(cols17);
    rep_len = ldf rep_len in base;
    r244 = dyn rep_len(colClasses6, cols17);
    check L512() else D137();
  L524():
    nmColClasses3 = force? nmColClasses2;
    checkMissing(nmColClasses3);
    col_names21 = ld `col.names`;
    check L525() else D144();
  L527():
    i15 = ld i;
    check L529() else D146();
  L528():
    r254 = dyn base44(<lang `<=`(i, 0)>);
    goto L127(r254);
  L561():
    dx20 = getTryDispatchBuiltinValue(dr8);
    goto L135(dx20);
  L562():
    p44 = prom<V +>{
      colClasses11 = ld colClasses;
      colClasses12 = force? colClasses11;
      checkMissing(colClasses12);
      return colClasses12;
    };
    p45 = prom<V +>{
      sym47 = ldf c;
      base47 = ldf c in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L1() else L2();
    L0(r278):
      return r278;
    L1():
      c92 = ldf c in base;
      r279 = dyn c92("real", "double");
      goto L0(r279);
    L2():
      r277 = dyn base47("real", "double");
      goto L0(r277);
    };
    r281 = dyn _in_2(p44, p45);
    check L563() else D162();
  L564():
    p46 = prom<V +>{
      colClasses13 = ld colClasses;
      colClasses14 = force? colClasses13;
      checkMissing(colClasses14);
      return colClasses14;
    };
    p47 = prom<V +>{
      sym48 = ldf c;
      base48 = ldf c in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L1() else L2();
    L0(r285):
      return r285;
    L1():
      c93 = ldf c in base;
      r286 = dyn c93("logical", "integer", "numeric", "complex", "character", "raw");
      goto L0(r286);
    L2():
      r284 = dyn base48("logical", "integer", "numeric", "complex", "character", "raw");
      goto L0(r284);
    };
    r288 = dyn _in_3(p46, p47);
    check L565() else D164();
  D137():
    deopt 543 [r244];
  D144():
    deopt 566 [col_names21];
  D146():
    deopt 575 [i15];
  D162():
    deopt 633 [r273, l16, "numeric", r281];
  D164():
    deopt 640 [r288];
  L73():
    goto L79();
  L79():
    sym26 = ldf max;
    base26 = ldf max in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L385() else L386();
  L128():
    goto L129();
  L129():
    colClasses7 = ld colClasses;
    check L535() else D150();
  L370():
    sym24 = ldf seq_along;
    base24 = ldf seq_along in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L371() else L372();
  L512():
    goto L122(r244);
  L525():
    col_names22 = force? col_names21;
    checkMissing(col_names22);
    match = ldf match in base;
    r253 = dyn match(nmColClasses3, col_names22, 0, NULL);
    check L526() else D145();
  L529():
    i16 = force? i15;
    checkMissing(i16);
    r256 = `<=`(i16, 0);
    any = ldf any in base;
    r257 = dyn any(r256);
    check L530() else D147();
  L531():
    warning1 = ldf warning;
    check L532() else D148();
  L563():
    ___2 = ldf `[<-` in base;
    r282 = dyn ___2(l16, "numeric", r281);
    goto L135(r282);
  L565():
    st known = r288;
    lapply = ldf lapply;
    check L566() else D165();
  D145():
    deopt 571 [r253];
  D147():
    deopt 580 [r257];
  D148():
    deopt 582 [];
  D150():
    deopt 587 [colClasses7];
  D165():
    deopt 643 [];
  L74(r147):
    s = toForSeq(r147);
    l1 = length(s);
    i = 0;
    goto L75(i);
  L80(r168):
    st cols = r168;
    cols = ld cols;
    check L390() else D79();
  L371():
    col = ld col;
    check L373() else D71();
  L372():
    r146 = dyn base24(<sym col>);
    goto L74(r146);
  L385():
    col2 = ld col1;
    check L387() else D76();
  L386():
    r167 = dyn base26(<sym col1>, <sym col>);
    goto L80(r167);
  L526():
    goto L126(r253);
  L530():
    goto L127(r257);
  L532():
    r258 = dyn warning1("not all columns named in 'colClasses' exist");
    check L533() else D149();
  L535():
    colClasses8 = force? colClasses7;
    checkMissing(colClasses8);
    c88 = `is.object`(colClasses8);
    if c88 then L536() else L537(colClasses8);
  L566():
    p48 = prom<V +>{
      colClasses15 = ld colClasses;
      colClasses16 = force? colClasses15;
      checkMissing(colClasses16);
      c94 = `is.object`(colClasses16);
      if c94 then L1() else L2(colClasses16);
    L0(dx23):
      return dx23;
    L1():
      dr10 = tryDispatchBuiltin.1("[", colClasses16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(colClasses18):
      known = ld known;
      known1 = force? known;
      __2 = ldf `[` in base;
      r289 = dyn __2(colClasses18, known1);
      goto L0(r289);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx22);
    };
    p49 = prom<V +>{
      do_call = ld `do.call`;
      do_call1 = force? do_call;
      checkMissing(do_call1);
      return do_call1;
    };
    p50 = prom<V +>{
      sym49 = ldf list;
      base49 = ldf list in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r293):
      return r293;
    L1():
      list1 = ldf list in base;
      r294 = dyn list1(0.0);
      goto L0(r294);
    L2():
      r292 = dyn base49(0.0);
      goto L0(r292);
    };
    r296 = dyn lapply(p48, p49, p50);
    check L567() else D166();
  D71():
    deopt 289 [col];
  D76():
    deopt 336 [col2];
  D79():
    deopt 343 [cols];
  D149():
    deopt 584 [r258];
  D166():
    deopt 647 [r296];
  L75(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l1, i2);
    if c36 then L374() else L78();
  L130(dx3):
    l6 = ld tmp;
    c89 = `is.object`(l6);
    if c89 then L540() else L541(dx3, l6);
  L373():
    col1 = force? col;
    checkMissing(col1);
    r148 = seq_along(col1);
    goto L74(r148);
  L387():
    col3 = force? col2;
    checkMissing(col3);
    col4 = ld col;
    check L388() else D77();
  L390():
    cols1 = force? cols;
    checkMissing(cols1);
    col6 = ld col1;
    check L391() else D80();
  L533():
    goto L129();
  L536():
    dr2 = tryDispatchBuiltin.1("[", colClasses8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L538() else L537(dr2);
  L537(colClasses10):
    i17 = ld i;
    check L539() else D151();
  L567():
    l17 = ld what;
    c95 = `is.object`(l17);
    if c95 then L568() else L569(r296, l17);
  D77():
    deopt 338 [col4];
  D80():
    deopt 344 [cols1, col6];
  D151():
    deopt 589 [colClasses10, i17];
  L78():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L375() else L376();
  L131(dx9):
    st tmp = dx9;
    tmp = ld tmp;
    check L548() else D154();
  L136(dx25):
    st what = dx25;
    sym50 = ldf list;
    base50 = ldf list in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L572() else L573();
  L374():
    goto L79();
  L388():
    col5 = force? col4;
    checkMissing(col5);
    max = ldf max in base;
    r169 = dyn max(col3, col5);
    check L389() else D78();
  L391():
    col7 = force? col6;
    checkMissing(col7);
    r170 = `-`(cols1, col7);
    r171 = `==`(r170, 1);
    st rlabp = r171;
    rlabp = ld rlabp;
    check L392() else D81();
  L538():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L130(dx2);
  L539():
    i18 = force? i17;
    checkMissing(i18);
    r260 = `>`(i18, 0);
    __ = ldf `[` in base;
    r261 = dyn __(colClasses10, r260);
    goto L130(r261);
  L540():
    dr4 = tryDispatchBuiltin.0("[<-", l6, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L542() else L541(dx3, dr4);
  L541(dx5, l8):
    i19 = ld i;
    check L543() else D152();
  L568():
    dr12 = tryDispatchBuiltin.0("[<-", l17, r296);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L570() else L569(r296, dr12);
  L569(r298, l19):
    known2 = ld known;
    check L571() else D167();
  D78():
    deopt 341 [r169];
  D81():
    deopt 350 [rlabp];
  D152():
    deopt 595 [dx5, l8, dx3, i19];
  D154():
    deopt 604 [tmp];
  D167():
    deopt 649 [r298, l19, r296, known2];
  L76(i7, r150):
    l2 = ld col;
    c37 = `is.object`(l2);
    if c37 then L380() else L381(i7, r150, l2);
  L137(r303):
    l20 = ld what;
    c96 = `is.object`(l20);
    if c96 then L575() else L576(r303, l20);
  L375():
    scan1 = ldf scan;
    check L377() else D72();
  L376():
    r149 = dyn base25(<lang scan(file, what="", sep=sep, quote=quote, nlines=1.0, quiet=TRUE, skip=0.0, strip.white=strip.white, blank.lines.skip=blank.lines.skip, comment.char=comment.char, allowEscapes=allowEscapes, encoding=encoding, skipNul=skipNul)>);
    goto L76(i2, r149);
  L389():
    goto L80(r169);
  L392():
    rlabp1 = force? rlabp;
    checkMissing(rlabp1);
    c38 = `as.logical`(rlabp1);
    if c38 then L393() else L81(c38);
  L542():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L131(dx7);
  L543():
    i20 = force? i19;
    checkMissing(i20);
    c90 = `is.object`(i20);
    if c90 then L544() else L545(dx5, l8, dx3, i20);
  L548():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st colClasses = tmp1;
    goto L124();
  L570():
    dx24 = getTryDispatchBuiltinValue(dr12);
    goto L136(dx24);
  L571():
    known3 = force? known2;
    ___3 = ldf `[<-` in base;
    r301 = dyn ___3(l19, r296, known3);
    goto L136(r301);
  L572():
    list2 = ldf list in base;
    r304 = dyn list2(NULL);
    check L574() else D168();
  L573():
    r302 = dyn base50(NULL);
    goto L137(r302);
  D72():
    deopt 295 [i2];
  D168():
    deopt 657 [r304];
  L77(i11, dx1):
    st col = dx1;
    goto L75(i11);
  L81(c40):
    c47 = `as.logical`(c40);
    if c47 then L397() else L83();
  L132(dx17, l12, dx18, dx19):
    ___1 = ldf `[<-` in base;
    r264 = dyn ___1(l12, dx18, dx19);
    goto L131(r264);
  L138(dx27):
    st what = dx27;
    vapply = ldf vapply;
    check L580() else D171();
  L377():
    p33 = prom<V +>{
      file27 = ld file;
      file28 = force? file27;
      checkMissing(file28);
      return file28;
    };
    p34 = prom<V +>{
      sep5 = ld sep;
      sep6 = force? sep5;
      checkMissing(sep6);
      return sep6;
    };
    p35 = prom<V +>{
      quote5 = ld quote;
      quote6 = force? quote5;
      checkMissing(quote6);
      return quote6;
    };
    p36 = prom<V +>{
      strip_white1 = ld `strip.white`;
      strip_white2 = force? strip_white1;
      checkMissing(strip_white2);
      return strip_white2;
    };
    p37 = prom<V +>{
      blank_lines_skip7 = ld `blank.lines.skip`;
      blank_lines_skip8 = force? blank_lines_skip7;
      checkMissing(blank_lines_skip8);
      return blank_lines_skip8;
    };
    p38 = prom<V +>{
      comment_char5 = ld `comment.char`;
      comment_char6 = force? comment_char5;
      checkMissing(comment_char6);
      return comment_char6;
    };
    p39 = prom<V +>{
      allowEscapes3 = ld allowEscapes;
      allowEscapes4 = force? allowEscapes3;
      checkMissing(allowEscapes4);
      return allowEscapes4;
    };
    p40 = prom<V +>{
      encoding13 = ld encoding;
      encoding14 = force? encoding13;
      checkMissing(encoding14);
      return encoding14;
    };
    p41 = prom<V +>{
      skipNul5 = ld skipNul;
      skipNul6 = force? skipNul5;
      checkMissing(skipNul6);
      return skipNul6;
    };
    r160 = dyn scan1[, what, sep, quote, nlines, quiet, skip, `strip.white`, `blank.lines.skip`, `comment.char`, allowEscapes, encoding, skipNul](p33, "", p34, p35, 1.0, TRUE, 0.0, p36, p37, p38, p39, p40, p41);
    check L378() else D73();
  L380():
    dr = tryDispatchBuiltin.0("[<-", l2, r150);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L382() else L381(i7, r150, dr);
  L381(i9, r163, l4):
    i12 = ld i;
    check L383() else D75();
  L393():
    sym27 = ldf missing;
    base27 = ldf missing in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L394() else L395();
  L544():
    dr6 = tryDispatchBuiltin.1("[", i20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L546() else L545(dx5, l8, dx3, dr6);
  L545(dx12, l10, dx13, i22):
    i23 = ld i;
    check L547() else D153();
  L574():
    goto L137(r304);
  L575():
    dr14 = tryDispatchBuiltin.0("[<-", l20, r303);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L577() else L576(r303, dr14);
  L576(r306, l22):
    _in_4 = ldf `%in%`;
    check L578() else D169();
  D73():
    deopt 321 [i2, r160];
  D75():
    deopt 325 [i9, r163, l4, r150, i12];
  D153():
    deopt 597 [dx12, l10, dx13, i22, i23];
  D169():
    deopt 660 [r306, l22, r303];
  D171():
    deopt 667 [];
  L82(c43, r173):
    c44 = `as.logical`(r173);
    c45 = `&&`(c43, c44);
    goto L81(c45);
  L83():
    goto L84();
  L84():
    header3 = ld header;
    check L399() else D82();
  L378():
    length4 = ldf length in base;
    r161 = dyn length4(r160);
    check L379() else D74();
  L382():
    dx = getTryDispatchBuiltinValue(dr);
    goto L77(i7, dx);
  L383():
    i13 = force? i12;
    ___ = ldf `[<-` in base;
    r166 = dyn ___(l4, r150, i13);
    goto L77(i9, r166);
  L394():
    missing4 = ldf missing in base;
    r174 = dyn missing4(<sym header>);
    goto L82(c38, r174);
  L395():
    r172 = dyn base27(<sym header>);
    goto L82(c38, r172);
  L397():
    st header = TRUE;
    goto L84();
  L546():
    dx16 = getTryDispatchBuiltinValue(dr6);
    goto L132(dx5, l8, dx3, dx16);
  L547():
    i24 = force? i23;
    checkMissing(i24);
    r262 = `>`(i24, 0);
    __1 = ldf `[` in base;
    r263 = dyn __1(i22, r262);
    goto L132(dx12, l10, dx13, r263);
  L577():
    dx26 = getTryDispatchBuiltinValue(dr14);
    goto L138(dx26);
  L578():
    p51 = prom<V +>{
      colClasses19 = ld colClasses;
      colClasses20 = force? colClasses19;
      checkMissing(colClasses20);
      return colClasses20;
    };
    r310 = dyn _in_4(p51, "NULL");
    check L579() else D170();
  L580():
    p52 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p53 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r314 = dyn vapply(p52, p53, NA_LGL);
    check L581() else D172();
  D74():
    deopt 323 [i2, r161];
  D82():
    deopt 361 [header3];
  D170():
    deopt 663 [r306, l22, r303, r310];
  D172():
    deopt 671 [r314];
  L379():
    goto L76(i2, r161);
  L399():
    header4 = force? header3;
    checkMissing(header4);
    r176 = `!`(header4);
    c48 = `as.logical`(r176);
    if c48 then L400() else L85();
  L579():
    ___4 = ldf `[<-` in base;
    r311 = dyn ___4(l22, r303, r310);
    goto L138(r311);
  L581():
    r315 = `!`(r314);
    st keep = r315;
    scan2 = ldf scan;
    check L582() else D173();
  D173():
    deopt 675 [];
  L85():
    goto L86();
  L86():
    header5 = ld header;
    check L402() else D83();
  L400():
    st rlabp = FALSE;
    goto L86();
  L582():
    p54 = prom<V +>{
      file31 = ld file;
      file32 = force? file31;
      checkMissing(file32);
      return file32;
    };
    p55 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p56 = prom<V +>{
      sep9 = ld sep;
      sep10 = force? sep9;
      checkMissing(sep10);
      return sep10;
    };
    p57 = prom<V +>{
      quote9 = ld quote;
      quote10 = force? quote9;
      checkMissing(quote10);
      return quote10;
    };
    p58 = prom<V +>{
      dec1 = ld dec;
      dec2 = force? dec1;
      checkMissing(dec2);
      return dec2;
    };
    p59 = prom<V +>{
      nrows5 = ld nrows;
      nrows6 = force? nrows5;
      checkMissing(nrows6);
      return nrows6;
    };
    p60 = prom<V +>{
      na_strings1 = ld `na.strings`;
      na_strings2 = force? na_strings1;
      checkMissing(na_strings2);
      return na_strings2;
    };
    p61 = prom<V +>{
      fill5 = ld fill;
      fill6 = force? fill5;
      checkMissing(fill6);
      return fill6;
    };
    p62 = prom<V +>{
      strip_white3 = ld `strip.white`;
      strip_white4 = force? strip_white3;
      checkMissing(strip_white4);
      return strip_white4;
    };
    p63 = prom<V +>{
      blank_lines_skip11 = ld `blank.lines.skip`;
      blank_lines_skip12 = force? blank_lines_skip11;
      checkMissing(blank_lines_skip12);
      return blank_lines_skip12;
    };
    p64 = prom<V +>{
      comment_char9 = ld `comment.char`;
      comment_char10 = force? comment_char9;
      checkMissing(comment_char10);
      return comment_char10;
    };
    p65 = prom<V +>{
      allowEscapes5 = ld allowEscapes;
      allowEscapes6 = force? allowEscapes5;
      checkMissing(allowEscapes6);
      return allowEscapes6;
    };
    p66 = prom<V +>{
      flush1 = ld flush;
      flush2 = force? flush1;
      checkMissing(flush2);
      return flush2;
    };
    p67 = prom<V +>{
      encoding15 = ld encoding;
      encoding16 = force? encoding15;
      checkMissing(encoding16);
      return encoding16;
    };
    p68 = prom<V +>{
      skipNul9 = ld skipNul;
      skipNul10 = force? skipNul9;
      checkMissing(skipNul10);
      return skipNul10;
    };
    r331 = dyn scan2[file, what, sep, quote, dec, nmax, skip, `na.strings`, quiet, fill, `strip.white`, `blank.lines.skip`, `multi.line`, `comment.char`, allowEscapes, flush, encoding, skipNul](p54, p55, p56, p57, p58, p59, 0.0, p60, TRUE, p61, p62, p63, FALSE, p64, p65, p66, p67, p68);
    check L583() else D174();
  D83():
    deopt 369 [header5];
  D174():
    deopt 712 [r331];
  L402():
    header6 = force? header5;
    checkMissing(header6);
    c49 = `as.logical`(header6);
    if c49 then L403() else L87();
  L583():
    st data = r331;
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L584() else L585();
  L87():
    sym32 = ldf missing;
    base32 = ldf missing in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L432() else L433();
  L95():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L438() else L439();
  L139(r333):
    st nlines = r333;
    cols22 = ld cols;
    check L595() else D179();
  L403():
    sym28 = ldf `.External`;
    base28 = ldf `.External` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L404() else L405();
  L584():
    data = ld data;
    check L586() else D175();
  L585():
    r332 = dyn base51(<lang `[[`(data, which.max(keep))>);
    goto L139(r332);
  D175():
    deopt 716 [data];
  D179():
    deopt 728 [cols22];
  L88():
    sym29 = ldf missing;
    base29 = ldf missing in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L414() else L415();
  L96(r196):
    c52 = `as.logical`(r196);
    if c52 then L434() else L97();
  L98(r202):
    rlabp2 = ld rlabp;
    check L442() else D103();
  L404():
    C_readtablehead2 = ld C_readtablehead;
    check L406() else D84();
  L405():
    r178 = dyn base28(<sym C_readtablehead>, <sym file>, 1, <sym comment.char>, <sym blank.lines.skip>, <sym quote>, <sym sep>, <sym skipNul>);
    goto L88();
  L432():
    missing6 = ldf missing in base;
    r197 = dyn missing6(<sym col.names>);
    goto L96(r197);
  L433():
    r195 = dyn base32(<sym col.names>);
    goto L96(r195);
  L438():
    col_names7 = ld `col.names`;
    check L440() else D101();
  L439():
    r201 = dyn base33(<sym col.names>);
    goto L98(r201);
  L586():
    data1 = force? data;
    checkMissing(data1);
    c97 = `is.object`(data1);
    if c97 then L587() else L588(data1);
  L595():
    cols23 = force? cols22;
    checkMissing(cols23);
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L596() else L597();
  D84():
    deopt 373 [C_readtablehead2];
  D101():
    deopt 427 [col_names7];
  D103():
    deopt 430 [r202, rlabp2];
  L89(r182):
    c50 = `as.logical`(r182);
    if c50 then L416() else L90();
  L97():
    goto L95();
  L140(dx29):
    length12 = ldf length in base;
    r338 = dyn length12(dx29);
    check L594() else D178();
  L142(cols26, r340):
    r342 = `!=`(cols26, r340);
    c98 = `as.logical`(r342);
    if c98 then L600() else L143();
  L406():
    C_readtablehead3 = force? C_readtablehead2;
    checkMissing(C_readtablehead3);
    file29 = ld file;
    check L407() else D85();
  L414():
    missing5 = ldf missing in base;
    r183 = dyn missing5(<sym col.names>);
    goto L89(r183);
  L415():
    r181 = dyn base29(<sym col.names>);
    goto L89(r181);
  L434():
    paste0 = ldf paste0;
    check L435() else D99();
  L440():
    col_names8 = force? col_names7;
    checkMissing(col_names8);
    length7 = ldf length in base;
    r203 = dyn length7(col_names8);
    check L441() else D102();
  L442():
    rlabp3 = force? rlabp2;
    checkMissing(rlabp3);
    r204 = `+`(r202, rlabp3);
    cols4 = ld cols;
    check L443() else D104();
  L587():
    dr16 = tryDispatchBuiltin.1("[[", data1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L589() else L588(dr16);
  L588(data3):
    sym52 = ldf `which.max`;
    base52 = ldf `which.max` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L590() else L591();
  L596():
    data7 = ld data;
    check L598() else D180();
  L597():
    r339 = dyn base53(<sym data>);
    goto L142(cols23, r339);
  D85():
    deopt 375 [file29];
  D99():
    deopt 418 [];
  D102():
    deopt 430 [r203];
  D104():
    deopt 432 [r204, cols4];
  D178():
    deopt 726 [r338];
  D180():
    deopt 731 [cols23, data7];
  L90():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L419() else L420();
  L91(first4):
    goto L95();
  L141(data6, r335):
    __3 = ldf `[[` in base;
    r337 = dyn __3(data6, r335);
    goto L140(r337);
  L143():
    goto L145();
  L145():
    sym56 = ldf `is.logical`;
    base56 = ldf `is.logical` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L608() else L609();
  L407():
    file30 = force? file29;
    checkMissing(file30);
    comment_char7 = ld `comment.char`;
    check L408() else D86();
  L416():
    first2 = ld first;
    check L417() else D92();
  L435():
    p42 = prom<V +>{
      cols2 = ld cols;
      cols3 = force? cols2;
      checkMissing(cols3);
      r198 = `:`(1, cols3);
      return r198;
    };
    r200 = dyn paste0("V", p42);
    check L436() else D100();
  L441():
    goto L98(r203);
  L443():
    cols5 = force? cols4;
    checkMissing(cols5);
    r205 = `<`(r204, cols5);
    c53 = `as.logical`(r205);
    if c53 then L444() else L99();
  L589():
    dx28 = getTryDispatchBuiltinValue(dr16);
    goto L140(dx28);
  L590():
    keep = ld keep;
    check L592() else D176();
  L591():
    r334 = dyn base52(<sym keep>);
    goto L141(data3, r334);
  L594():
    goto L139(r338);
  L598():
    data8 = force? data7;
    checkMissing(data8);
    length13 = ldf length in base;
    r341 = dyn length13(data8);
    check L599() else D181();
  L600():
    warning2 = ldf warning;
    check L601() else D182();
  D86():
    deopt 378 [comment_char7];
  D92():
    deopt 393 [first2];
  D100():
    deopt 421 [r200];
  D176():
    deopt 720 [data3, keep];
  D181():
    deopt 734 [cols23, r341];
  D182():
    deopt 737 [];
  L92(r185):
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L423() else L424();
  L99():
    goto L100();
  L100():
    fill1 = ld fill;
    check L448() else D107();
  L146(r354):
    c100 = `as.logical`(r354);
    if c100 then L611() else L147();
  L408():
    comment_char8 = force? comment_char7;
    checkMissing(comment_char8);
    blank_lines_skip9 = ld `blank.lines.skip`;
    check L409() else D87();
  L417():
    first3 = force? first2;
    checkMissing(first3);
    st `col.names` = first3;
    goto L91(first3);
  L419():
    first5 = ld first;
    check L421() else D93();
  L420():
    r184 = dyn base30(<sym first>);
    goto L92(r184);
  L436():
    st `col.names` = r200;
    goto L95();
  L444():
    stop3 = ldf stop;
    check L445() else D105();
  L592():
    keep1 = force? keep;
    checkMissing(keep1);
    which_max = ldf `which.max` in base;
    r336 = dyn which_max(keep1);
    check L593() else D177();
  L599():
    goto L142(cols23, r341);
  L601():
    p69 = prom<V +>{
      cols27 = ld cols;
      cols28 = force? cols27;
      checkMissing(cols28);
      return cols28;
    };
    p70 = prom<V +>{
      sym54 = ldf length;
      base54 = ldf length in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L1() else L2();
    L0(r345):
      return r345;
    L1():
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      length14 = ldf length in base;
      r346 = dyn length14(data10);
      goto L0(r346);
    L2():
      r344 = dyn base54(<sym data>);
      goto L0(r344);
    };
    r348 = dyn warning2[, , , , domain]("cols = ", p69, " != length(data) = ", p70, NA_LGL);
    check L602() else D183();
  L608():
    as_is1 = ld `as.is`;
    check L610() else D186();
  L609():
    r353 = dyn base56(<sym as.is>);
    goto L146(r353);
  D87():
    deopt 380 [blank_lines_skip9];
  D93():
    deopt 398 [first5];
  D105():
    deopt 436 [];
  D107():
    deopt 441 [fill1];
  D177():
    deopt 723 [data3, r336];
  D183():
    deopt 744 [r348];
  D186():
    deopt 755 [as_is1];
  L93(r190, r191):
    r193 = `!=`(r190, r191);
    c51 = `as.logical`(r193);
    if c51 then L427() else L94();
  L147():
    sym58 = ldf `is.numeric`;
    base58 = ldf `is.numeric` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L618() else L619();
  L149():
    keep2 = ld keep;
    check L683() else D220();
  L409():
    blank_lines_skip10 = force? blank_lines_skip9;
    checkMissing(blank_lines_skip10);
    quote7 = ld quote;
    check L410() else D88();
  L421():
    first6 = force? first5;
    checkMissing(first6);
    length5 = ldf length in base;
    r186 = dyn length5(first6);
    check L422() else D94();
  L423():
    col_names5 = ld `col.names`;
    check L425() else D95();
  L424():
    r189 = dyn base31(<sym col.names>);
    goto L93(r185, r189);
  L445():
    r206 = dyn stop3("more columns than column names");
    check L446() else D106();
  L448():
    fill2 = force? fill1;
    checkMissing(fill2);
    c54 = `as.logical`(fill2);
    if c54 then L449() else L101(c54);
  L593():
    goto L141(data3, r336);
  L602():
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L603() else L604();
  L610():
    as_is2 = force? as_is1;
    checkMissing(as_is2);
    c99 = `is.logical`(as_is2);
    goto L146(c99);
  L611():
    sym57 = ldf rep_len;
    base57 = ldf rep_len in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L612() else L613();
  D88():
    deopt 382 [quote7];
  D94():
    deopt 401 [r186];
  D95():
    deopt 403 [r185, col_names5];
  D106():
    deopt 438 [r206];
  D220():
    deopt 877 [keep2];
  L94():
    goto L91(NULL);
  L101(c56):
    c63 = `as.logical`(c56);
    if c63 then L456() else L103();
  L144(r350):
    st cols = r350;
    goto L145();
  L148(r356):
    st `as.is` = r356;
    goto L149();
  L150(r360):
    c101 = `as.logical`(r360);
    if c101 then L622() else L151();
  L410():
    quote8 = force? quote7;
    checkMissing(quote8);
    sep7 = ld sep;
    check L411() else D89();
  L422():
    goto L92(r186);
  L425():
    col_names6 = force? col_names5;
    checkMissing(col_names6);
    length6 = ldf length in base;
    r192 = dyn length6(col_names6);
    check L426() else D96();
  L427():
    warning = ldf warning;
    check L428() else D97();
  L446():
    goto L100();
  L449():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L450() else L451();
  L603():
    data11 = ld data;
    check L605() else D184();
  L604():
    r349 = dyn base55(<sym data>);
    goto L144(r349);
  L612():
    as_is3 = ld `as.is`;
    check L614() else D187();
  L613():
    r355 = dyn base57(<sym as.is>, <sym cols>);
    goto L148(r355);
  L618():
    as_is5 = ld `as.is`;
    check L620() else D190();
  L619():
    r359 = dyn base58(<sym as.is>);
    goto L150(r359);
  L683():
    keep3 = force? keep2;
    checkMissing(keep3);
    known4 = ld known;
    check L684() else D221();
  D89():
    deopt 384 [sep7];
  D96():
    deopt 406 [r185, r192];
  D97():
    deopt 409 [];
  D184():
    deopt 747 [data11];
  D187():
    deopt 760 [as_is3];
  D190():
    deopt 769 [as_is5];
  D221():
    deopt 878 [keep3, known4];
  L102(c59, r209):
    cols6 = ld cols;
    check L454() else D110();
  L103():
    goto L105();
  L105():
    fill3 = ld fill;
    check L462() else D113();
  L151():
    sym61 = ldf `is.character`;
    base61 = ldf `is.character` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L643() else L644();
  L411():
    sep8 = force? sep7;
    checkMissing(sep8);
    skipNul7 = ld skipNul;
    check L412() else D90();
  L426():
    goto L93(r185, r192);
  L428():
    r194 = dyn warning("header and 'col.names' are of different lengths");
    check L429() else D98();
  L450():
    col_names9 = ld `col.names`;
    check L452() else D108();
  L451():
    r208 = dyn base34(<sym col.names>);
    goto L102(c54, r208);
  L456():
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L457() else L458();
  L605():
    data12 = force? data11;
    checkMissing(data12);
    length15 = ldf length in base;
    r351 = dyn length15(data12);
    check L606() else D185();
  L614():
    as_is4 = force? as_is3;
    checkMissing(as_is4);
    cols29 = ld cols;
    check L615() else D188();
  L620():
    as_is6 = force? as_is5;
    checkMissing(as_is6);
    is_numeric = ldf `is.numeric` in base;
    r361 = dyn is_numeric(as_is6);
    check L621() else D191();
  L622():
    sym59 = ldf any;
    base59 = ldf any in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L623() else L624();
  L684():
    known5 = force? known4;
    checkMissing(known5);
    r411 = `!`(known5);
    r412 = `&&`(keep3, r411);
    st do = r412;
    rlabp6 = ld rlabp;
    check L685() else D222();
  D90():
    deopt 386 [skipNul7];
  D98():
    deopt 411 [r194];
  D108():
    deopt 445 [c54, col_names9];
  D110():
    deopt 448 [c59, r209, cols6];
  D113():
    deopt 461 [fill3];
  D185():
    deopt 750 [r351];
  D188():
    deopt 762 [cols29];
  D191():
    deopt 772 [r361];
  D222():
    deopt 883 [rlabp6];
  L104(r213):
    st cols = r213;
    goto L105();
  L152(r363):
    c102 = `as.logical`(r363);
    if c102 then L629() else L153();
  L157(r379):
    c105 = `as.logical`(r379);
    if c105 then L646() else L158();
  L412():
    skipNul8 = force? skipNul7;
    checkMissing(skipNul8);
    _External1 = ldf `.External` in base;
    r180 = dyn _External1(C_readtablehead3, file30, 1, comment_char8, blank_lines_skip10, quote8, sep8, skipNul8);
    check L413() else D91();
  L429():
    goto L91(r194);
  L452():
    col_names10 = force? col_names9;
    checkMissing(col_names10);
    length8 = ldf length in base;
    r210 = dyn length8(col_names10);
    check L453() else D109();
  L454():
    cols7 = force? cols6;
    checkMissing(cols7);
    r211 = `>`(r209, cols7);
    c60 = `as.logical`(r211);
    c61 = `&&`(c59, c60);
    goto L101(c61);
  L457():
    col_names11 = ld `col.names`;
    check L459() else D111();
  L458():
    r212 = dyn base35(<sym col.names>);
    goto L104(r212);
  L462():
    fill4 = force? fill3;
    checkMissing(fill4);
    r216 = `!`(fill4);
    c64 = `as.logical`(r216);
    if c64 then L463() else L106(c64);
  L606():
    goto L144(r351);
  L615():
    cols30 = force? cols29;
    checkMissing(cols30);
    rep_len2 = ldf rep_len in base;
    r357 = dyn rep_len2(as_is4, cols30);
    check L616() else D189();
  L621():
    goto L150(r361);
  L623():
    as_is7 = ld `as.is`;
    check L625() else D192();
  L624():
    r362 = dyn base59(<lang `|`(`<`(as.is, 1.0), `>`(as.is, cols))>);
    goto L152(r362);
  L643():
    as_is13 = ld `as.is`;
    check L645() else D202();
  L644():
    r378 = dyn base61(<sym as.is>);
    goto L157(r378);
  L685():
    rlabp7 = force? rlabp6;
    checkMissing(rlabp7);
    c110 = `as.logical`(rlabp7);
    if c110 then L686() else L168();
  D91():
    deopt 389 [r180];
  D109():
    deopt 448 [c54, r210];
  D111():
    deopt 454 [col_names11];
  D189():
    deopt 765 [r357];
  D192():
    deopt 775 [as_is7];
  D202():
    deopt 810 [as_is13];
  L106(c66):
    c70 = `as.logical`(c66);
    if c70 then L466() else L107(c70);
  L153():
    goto L154();
  L154():
    sym60 = ldf `rep.int`;
    base60 = ldf `rep.int` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L633() else L634();
  L158():
    sym65 = ldf length;
    base65 = ldf length in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L674() else L675();
  L168():
    goto L170();
  L170():
    cols41 = ld cols;
    check L691() else D223();
  L413():
    goto L88();
  L453():
    goto L102(c54, r210);
  L459():
    col_names12 = force? col_names11;
    checkMissing(col_names12);
    length9 = ldf length in base;
    r214 = dyn length9(col_names12);
    check L460() else D112();
  L463():
    cols8 = ld cols;
    check L464() else D114();
  L616():
    goto L148(r357);
  L625():
    as_is8 = force? as_is7;
    checkMissing(as_is8);
    r364 = `<`(as_is8, 1.0);
    as_is9 = ld `as.is`;
    check L626() else D193();
  L629():
    stop6 = ldf stop;
    check L630() else D196();
  L645():
    as_is14 = force? as_is13;
    checkMissing(as_is14);
    c104 = `is.character`(as_is14);
    goto L157(c104);
  L646():
    sym62 = ldf match;
    base62 = ldf match in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L647() else L648();
  L686():
    l29 = ld do;
    c111 = `is.object`(l29);
    if c111 then L687() else L688(FALSE, l29);
  D112():
    deopt 457 [r214];
  D114():
    deopt 464 [c64, cols8];
  D193():
    deopt 778 [r364, as_is9];
  D196():
    deopt 786 [];
  D223():
    deopt 895 [1, cols41];
  L107(c72):
    c79 = `as.logical`(c72);
    if c79 then L473() else L109();
  L155(r371):
    st i = r371;
    l23 = ld i;
    c103 = `is.object`(l23);
    if c103 then L637() else L638(TRUE, l23);
  L159(r381):
    st i = r381;
    sym63 = ldf any;
    base63 = ldf any in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L652() else L653();
  L166(r400):
    cols37 = ld cols;
    check L678() else D217();
  L169(r416, dx37):
    st do = dx37;
    goto L170();
  L460():
    goto L104(r214);
  L464():
    cols9 = force? cols8;
    checkMissing(cols9);
    r217 = `>`(cols9, 0);
    c67 = `as.logical`(r217);
    c68 = `&&`(c64, c67);
    goto L106(c68);
  L466():
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L467() else L468();
  L626():
    as_is10 = force? as_is9;
    checkMissing(as_is10);
    cols31 = ld cols;
    check L627() else D194();
  L630():
    r368 = dyn stop6("invalid numeric 'as.is' expression");
    check L631() else D197();
  L633():
    cols33 = ld cols;
    check L635() else D198();
  L634():
    r370 = dyn base60(FALSE, <sym cols>);
    goto L155(r370);
  L647():
    as_is15 = ld `as.is`;
    check L649() else D203();
  L648():
    r380 = dyn base62(<sym as.is>, <sym col.names>, 0);
    goto L159(r380);
  L674():
    as_is17 = ld `as.is`;
    check L676() else D215();
  L675():
    r399 = dyn base65(<sym as.is>);
    goto L166(r399);
  L687():
    dr24 = tryDispatchBuiltin.0("[<-", l29, FALSE);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L689() else L688(FALSE, dr24);
  L688(r414, l31):
    ___7 = ldf `[<-` in base;
    r417 = dyn ___7(l31, FALSE, 1);
    goto L169(r414, r417);
  L691():
    cols42 = force? cols41;
    checkMissing(cols42);
    r419 = `:`(1, cols42);
    c112 = `is.object`(r419);
    if c112 then L692() else L693(r419);
  D194():
    deopt 779 [r364, as_is10, cols31];
  D197():
    deopt 788 [r368];
  D198():
    deopt 794 [cols33];
  D203():
    deopt 815 [as_is15];
  D215():
    deopt 863 [as_is17];
  D217():
    deopt 866 [r400, cols37];
  L108(c75, r219):
    cols10 = ld cols;
    check L471() else D117();
  L109():
    goto L110();
  L110():
    cols12 = ld cols;
    check L477() else D120();
  L156(dx31):
    st i = dx31;
    i25 = ld i;
    check L641() else D201();
  L160(r384):
    c106 = `as.logical`(r384);
    if c106 then L656() else L161();
  L171(dx39):
    s1 = toForSeq(dx39);
    l32 = length(s1);
    i37 = 0;
    goto L172(i37);
  L467():
    col_names13 = ld `col.names`;
    check L469() else D115();
  L468():
    r218 = dyn base36(<sym col.names>);
    goto L108(c70, r218);
  L473():
    stop4 = ldf stop;
    check L474() else D118();
  L627():
    cols32 = force? cols31;
    checkMissing(cols32);
    r365 = `>`(as_is10, cols32);
    r366 = `||`(r364, r365);
    any1 = ldf any in base;
    r367 = dyn any1(r366);
    check L628() else D195();
  L631():
    goto L154();
  L635():
    cols34 = force? cols33;
    checkMissing(cols34);
    rep_int1 = ldf `rep.int` in base;
    r372 = dyn rep_int1(FALSE, cols34);
    check L636() else D199();
  L637():
    dr18 = tryDispatchBuiltin.0("[<-", l23, TRUE);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L639() else L638(TRUE, dr18);
  L638(r374, l25):
    as_is11 = ld `as.is`;
    check L640() else D200();
  L649():
    as_is16 = force? as_is15;
    checkMissing(as_is16);
    col_names25 = ld `col.names`;
    check L650() else D204();
  L652():
    i27 = ld i;
    check L654() else D206();
  L653():
    r383 = dyn base63(<lang `<=`(i, 0)>);
    goto L160(r383);
  L676():
    as_is18 = force? as_is17;
    checkMissing(as_is18);
    length16 = ldf length in base;
    r401 = dyn length16(as_is18);
    check L677() else D216();
  L678():
    cols38 = force? cols37;
    checkMissing(cols38);
    r402 = `!=`(r400, cols38);
    c109 = `as.logical`(r402);
    if c109 then L679() else L167();
  L689():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L169(FALSE, dx36);
  L692():
    dr26 = tryDispatchBuiltin.1("[", r419);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L694() else L693(dr26);
  L693(r421):
    do = ld do;
    check L695() else D224();
  D115():
    deopt 471 [c70, col_names13];
  D117():
    deopt 474 [c75, r219, cols10];
  D118():
    deopt 479 [];
  D120():
    deopt 484 [cols12];
  D195():
    deopt 784 [r367];
  D199():
    deopt 797 [r372];
  D200():
    deopt 802 [r374, l25, TRUE, as_is11];
  D201():
    deopt 806 [i25];
  D204():
    deopt 817 [col_names25];
  D206():
    deopt 826 [i27];
  D216():
    deopt 866 [r401];
  D224():
    deopt 898 [r421, do];
  L161():
    goto L162();
  L162():
    i29 = ld i;
    check L660() else D210();
  L167():
    goto L149();
  L172(i38):
    i39 = `+`.1(i38, 1);
    c113 = `<`.1(l32, i39);
    if c113 then L696() else L184();
  L469():
    col_names14 = force? col_names13;
    checkMissing(col_names14);
    length10 = ldf length in base;
    r220 = dyn length10(col_names14);
    check L470() else D116();
  L471():
    cols11 = force? cols10;
    checkMissing(cols11);
    r221 = `>`(r219, cols11);
    c76 = `as.logical`(r221);
    c77 = `&&`(c75, c76);
    goto L107(c77);
  L474():
    r222 = dyn stop4("more column names than columns");
    check L475() else D119();
  L477():
    cols13 = force? cols12;
    checkMissing(cols13);
    r224 = `==`(cols13, 0);
    c80 = `as.logical`(r224);
    if c80 then L478() else L111();
  L628():
    goto L152(r367);
  L636():
    goto L155(r372);
  L639():
    dx30 = getTryDispatchBuiltinValue(dr18);
    goto L156(dx30);
  L640():
    as_is12 = force? as_is11;
    ___5 = ldf `[<-` in base;
    r377 = dyn ___5(l25, TRUE, as_is12);
    goto L156(r377);
  L641():
    i26 = force? i25;
    checkMissing(i26);
    st `as.is` = i26;
    goto L149();
  L650():
    col_names26 = force? col_names25;
    checkMissing(col_names26);
    match1 = ldf match in base;
    r382 = dyn match1(as_is16, col_names26, 0, NULL);
    check L651() else D205();
  L654():
    i28 = force? i27;
    checkMissing(i28);
    r385 = `<=`(i28, 0);
    any2 = ldf any in base;
    r386 = dyn any2(r385);
    check L655() else D207();
  L656():
    warning3 = ldf warning;
    check L657() else D208();
  L677():
    goto L166(r401);
  L679():
    stop7 = ldf stop;
    check L680() else D218();
  L694():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L171(dx38);
  L695():
    do1 = force? do;
    __5 = ldf `[` in base;
    r422 = dyn __5(r421, do1);
    goto L171(r422);
  D116():
    deopt 474 [c70, r220];
  D119():
    deopt 481 [r222];
  D205():
    deopt 822 [r382];
  D207():
    deopt 831 [r386];
  D208():
    deopt 833 [];
  D210():
    deopt 838 [i29];
  D218():
    deopt 870 [];
  L111():
    goto L60();
  L184():
    x1 = `[[`(s1, i39, NULL, TRUE);
    st i = x1;
    sym67 = ldf `is.na`;
    base67 = ldf `is.na` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L697() else L698();
  L470():
    goto L108(c70, r220);
  L475():
    goto L110();
  L478():
    stop5 = ldf stop;
    check L479() else D121();
  L651():
    goto L159(r382);
  L655():
    goto L160(r386);
  L657():
    r387 = dyn warning3("not all columns named in 'as.is' exist");
    check L658() else D209();
  L660():
    i30 = force? i29;
    checkMissing(i30);
    c107 = `is.object`(i30);
    if c107 then L661() else L662(i30);
  L680():
    p73 = prom<V +>{
      gettextf = ldf gettextf;
      p71 = prom<V +>{
        sym66 = ldf length;
        base66 = ldf length in base;
        guard66 = `==`.4(sym66, base66);
        if guard66 then L1() else L2();
      L0(r404):
        return r404;
      L1():
        as_is19 = ld `as.is`;
        as_is20 = force? as_is19;
        checkMissing(as_is20);
        length17 = ldf length in base;
        r405 = dyn length17(as_is20);
        goto L0(r405);
      L2():
        r403 = dyn base66(<sym as.is>);
        goto L0(r403);
      };
      p72 = prom<V +>{
        cols39 = ld cols;
        cols40 = force? cols39;
        checkMissing(cols40);
        return cols40;
      };
      r408 = dyn gettextf("'as.is' has the wrong length %d  != cols = %d", p71, p72);
      return r408;
    };
    r410 = dyn stop7[, domain](p73, NA_LGL);
    check L681() else D219();
  L696():
    st compactRN = TRUE;
    sym68 = ldf missing;
    base68 = ldf missing in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L743() else L744();
  D121():
    deopt 489 [];
  D209():
    deopt 835 [r387];
  D219():
    deopt 874 [r410];
  L163(dx33):
    st i = dx33;
    sym64 = ldf `rep.int`;
    base64 = ldf `rep.int` in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L665() else L666();
  L173(i44, r424):
    c115 = `as.logical`(r424);
    if c115 then L705() else L175();
  L185(r466):
    c130 = `as.logical`(r466);
    if c130 then L745() else L186();
  L479():
    r225 = dyn stop5("first five rows are empty: giving up");
    check L480() else D122();
  L658():
    goto L162();
  L661():
    dr20 = tryDispatchBuiltin.1("[", i30);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L663() else L662(dr20);
  L662(i32):
    i33 = ld i;
    check L664() else D211();
  L681():
    goto L149();
  L697():
    colClasses21 = ld colClasses;
    check L699() else D225();
  L698():
    r423 = dyn base67(<lang `[`(colClasses, i)>);
    goto L173(i39, r423);
  L743():
    missing7 = ldf missing in base;
    r467 = dyn missing7(<sym row.names>);
    goto L185(r467);
  L744():
    r465 = dyn base68(<sym row.names>);
    goto L185(r465);
  D122():
    deopt 491 [r225];
  D211():
    deopt 840 [i32, i33];
  D225():
    deopt 903 [i39, colClasses21];
  L164(r392):
    st `as.is` = r392;
    l26 = ld `as.is`;
    c108 = `is.object`(l26);
    if c108 then L669() else L670(TRUE, l26);
  L175():
    colClasses25 = ld colClasses;
    check L709() else D230();
  L176(i57, r437):
    l33 = ld data;
    c129 = `is.object`(l33);
    if c129 then L739() else L740(i57, r437, l33);
  L186():
    sym70 = ldf `is.null`;
    base70 = ldf `is.null` in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L764() else L765();
  L192():
    data57 = ld data;
    check L836() else D281();
  L480():
    goto L60();
  L663():
    dx32 = getTryDispatchBuiltinValue(dr20);
    goto L163(dx32);
  L664():
    i34 = force? i33;
    checkMissing(i34);
    r389 = `>`(i34, 0);
    __4 = ldf `[` in base;
    r390 = dyn __4(i32, r389);
    goto L163(r390);
  L665():
    cols35 = ld cols;
    check L667() else D212();
  L666():
    r391 = dyn base64(FALSE, <sym cols>);
    goto L164(r391);
  L699():
    colClasses22 = force? colClasses21;
    checkMissing(colClasses22);
    c114 = `is.object`(colClasses22);
    if c114 then L700() else L701(i39, colClasses22);
  L705():
    type_convert = ldf `type.convert`;
    check L706() else D228();
  L745():
    rlabp8 = ld rlabp;
    check L746() else D246();
  D212():
    deopt 849 [cols35];
  D228():
    deopt 911 [i44];
  D230():
    deopt 924 [i44, colClasses25];
  D246():
    deopt 980 [rlabp8];
  D281():
    deopt 1117 [data57];
  L165(r397, dx35):
    st `as.is` = dx35;
    goto L149();
  L174(i48, dx41):
    is_na = ldf `is.na` in base;
    r426 = dyn is_na(dx41);
    check L704() else D227();
  L183(i95, dx63):
    st data = dx63;
    goto L172(i95);
  L193(r479):
    c136 = `as.logical`(r479);
    if c136 then L767() else L194();
  L667():
    cols36 = force? cols35;
    checkMissing(cols36);
    rep_int2 = ldf `rep.int` in base;
    r393 = dyn rep_int2(FALSE, cols36);
    check L668() else D213();
  L669():
    dr22 = tryDispatchBuiltin.0("[<-", l26, TRUE);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L671() else L670(TRUE, dr22);
  L670(r395, l28):
    i35 = ld i;
    check L672() else D214();
  L700():
    dr28 = tryDispatchBuiltin.1("[", colClasses22);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L702() else L701(i39, dr28);
  L701(i46, colClasses24):
    i49 = ld i;
    check L703() else D226();
  L706():
    p74 = prom<V +>{
      data13 = ld data;
      data14 = force? data13;
      checkMissing(data14);
      c116 = `is.object`(data14);
      if c116 then L1() else L2(data14);
    L0(dx43):
      return dx43;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", data14);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(data16):
      i53 = ld i;
      i54 = force? i53;
      __7 = ldf `[[` in base;
      r427 = dyn __7(data16, i54);
      goto L0(r427);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx42);
    };
    p75 = prom<V +>{
      as_is21 = ld `as.is`;
      as_is22 = force? as_is21;
      checkMissing(as_is22);
      c117 = `is.object`(as_is22);
      if c117 then L1() else L2(as_is22);
    L0(dx45):
      return dx45;
    L1():
      dr32 = tryDispatchBuiltin.1("[", as_is22);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(as_is24):
      i55 = ld i;
      i56 = force? i55;
      __8 = ldf `[` in base;
      r429 = dyn __8(as_is24, i56);
      goto L0(r429);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    };
    p76 = prom<V +>{
      dec3 = ld dec;
      dec4 = force? dec3;
      checkMissing(dec4);
      return dec4;
    };
    p77 = prom<V +>{
      numerals3 = ld numerals;
      numerals4 = force? numerals3;
      checkMissing(numerals4);
      return numerals4;
    };
    p78 = prom<V +>{
      character1 = ldf character;
      r433 = dyn character1(0);
      return r433;
    };
    p79 = prom<V +>{
      tryLogical1 = ld tryLogical;
      tryLogical2 = force? tryLogical1;
      checkMissing(tryLogical2);
      return tryLogical2;
    };
    r436 = dyn type_convert[, `as.is`, dec, numerals, `na.strings`, tryLogical](p74, p75, p76, p77, p78, p79);
    check L707() else D229();
  L709():
    colClasses26 = force? colClasses25;
    checkMissing(colClasses26);
    c118 = `is.object`(colClasses26);
    if c118 then L710() else L711(i44, colClasses26);
  L739():
    dr50 = tryDispatchBuiltin.0("[[<-", l33, r437);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L741() else L740(i57, r437, dr50);
  L740(i93, r461, l35):
    i96 = ld i;
    check L742() else D245();
  L746():
    rlabp9 = force? rlabp8;
    checkMissing(rlabp9);
    c131 = `as.logical`(rlabp9);
    if c131 then L747() else L187();
  L764():
    row_names1 = ld `row.names`;
    check L766() else D252();
  L765():
    r478 = dyn base70(<sym row.names>);
    goto L193(r478);
  L836():
    data58 = force? data57;
    checkMissing(data58);
    c157 = `is.object`(data58);
    if c157 then L837() else L838(data58);
  D213():
    deopt 852 [r393];
  D214():
    deopt 857 [r395, l28, TRUE, i35];
  D226():
    deopt 905 [i46, colClasses24, i49];
  D227():
    deopt 909 [i48, r426];
  D229():
    deopt 923 [i44, r436];
  D245():
    deopt 967 [i93, r461, l35, r437, i96];
  D252():
    deopt 1009 [row_names1];
  L177(i61, dx47):
    r439 = `==`(dx47, "factor");
    c119 = `as.logical`(r439);
    if c119 then L714() else L178();
  L187():
    _set_row_names = ldf `.set_row_names`;
    check L761() else D250();
  L191(r471):
    goto L192();
  L194():
    sym72 = ldf `is.character`;
    base72 = ldf `is.character` in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L771() else L772();
  L212(dx86):
    st data = dx86;
    sym77 = ldf `is.object`;
    base77 = ldf `is.object` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L841() else L842();
  L668():
    goto L164(r393);
  L671():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L165(TRUE, dx34);
  L672():
    i36 = force? i35;
    ___6 = ldf `[<-` in base;
    r398 = dyn ___6(l28, TRUE, i36);
    goto L165(r395, r398);
  L702():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L174(i39, dx40);
  L703():
    i50 = force? i49;
    __6 = ldf `[` in base;
    r425 = dyn __6(colClasses24, i50);
    goto L174(i46, r425);
  L704():
    goto L173(i48, r426);
  L707():
    goto L176(i44, r436);
  L710():
    dr34 = tryDispatchBuiltin.1("[", colClasses26);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L712() else L711(i44, dr34);
  L711(i59, colClasses28):
    i62 = ld i;
    check L713() else D231();
  L741():
    dx62 = getTryDispatchBuiltinValue(dr50);
    goto L183(i57, dx62);
  L742():
    i97 = force? i96;
    ____ = ldf `[[<-` in base;
    r464 = dyn ____(l35, r437, i97);
    goto L183(i93, r464);
  L747():
    data33 = ld data;
    check L748() else D247();
  L766():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c135 = `==`(row_names2, NULL);
    goto L193(c135);
  L767():
    _set_row_names1 = ldf `.set_row_names`;
    check L768() else D253();
  L837():
    dr72 = tryDispatchBuiltin.1("[", data58);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L839() else L838(dr72);
  L838(data60):
    keep16 = ld keep;
    check L840() else D282();
  D231():
    deopt 926 [i59, colClasses28, i62];
  D247():
    deopt 982 [data33];
  D250():
    deopt 1004 [];
  D253():
    deopt 1013 [];
  D282():
    deopt 1119 [data60, keep16];
  L178():
    colClasses29 = ld colClasses;
    check L718() else D234();
  L195(r486):
    c138 = `as.logical`(r486);
    if c138 then L774() else L196();
  L213(r522):
    c159 = `as.logical`(r522);
    if c159 then L214(c159) else L844();
  L712():
    dx46 = getTryDispatchBuiltinValue(dr34);
    goto L177(i44, dx46);
  L713():
    i63 = force? i62;
    __9 = ldf `[` in base;
    r438 = dyn __9(colClasses28, i63);
    goto L177(i59, r438);
  L714():
    as_factor = ldf `as.factor`;
    check L715() else D232();
  L748():
    data34 = force? data33;
    checkMissing(data34);
    c132 = `is.object`(data34);
    if c132 then L749() else L750(data34);
  L761():
    p85 = prom<V +>{
      sym69 = ldf `as.integer`;
      base69 = ldf `as.integer` in base;
      guard69 = `==`.4(sym69, base69);
      if guard69 then L1() else L2();
    L0(r473):
      return r473;
    L1():
      nlines10 = ld nlines;
      nlines11 = force? nlines10;
      checkMissing(nlines11);
      as_integer = ldf `as.integer` in base;
      r474 = dyn as_integer(nlines11);
      goto L0(r474);
    L2():
      r472 = dyn base69(<sym nlines>);
      goto L0(r472);
    };
    r476 = dyn _set_row_names(p85);
    check L762() else D251();
  L768():
    p86 = prom<V +>{
      sym71 = ldf `as.integer`;
      base71 = ldf `as.integer` in base;
      guard71 = `==`.4(sym71, base71);
      if guard71 then L1() else L2();
    L0(r481):
      return r481;
    L1():
      nlines12 = ld nlines;
      nlines13 = force? nlines12;
      checkMissing(nlines13);
      as_integer1 = ldf `as.integer` in base;
      r482 = dyn as_integer1(nlines13);
      goto L0(r482);
    L2():
      r480 = dyn base71(<sym nlines>);
      goto L0(r480);
    };
    r484 = dyn _set_row_names1(p86);
    check L769() else D254();
  L771():
    row_names3 = ld `row.names`;
    check L773() else D255();
  L772():
    r485 = dyn base72(<sym row.names>);
    goto L195(r485);
  L839():
    dx85 = getTryDispatchBuiltinValue(dr72);
    goto L212(dx85);
  L840():
    keep17 = force? keep16;
    __28 = ldf `[` in base;
    r520 = dyn __28(data60, keep17);
    goto L212(r520);
  L841():
    row_names15 = ld `row.names`;
    check L843() else D283();
  L842():
    r521 = dyn base77(<sym row.names>);
    goto L213(r521);
  D232():
    deopt 932 [i61];
  D234():
    deopt 935 [i61, colClasses29];
  D251():
    deopt 1006 [r476];
  D254():
    deopt 1015 [r484];
  D255():
    deopt 1018 [row_names3];
  D283():
    deopt 1124 [row_names15];
  L188(dx65):
    st `row.names` = dx65;
    data37 = ld data;
    check L752() else D248();
  L196():
    sym75 = ldf `is.numeric`;
    base75 = ldf `is.numeric` in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L806() else L807();
  L214(c160):
    c169 = `as.logical`(c160);
    if c169 then L849() else L216();
  L715():
    p80 = prom<V +>{
      data17 = ld data;
      data18 = force? data17;
      checkMissing(data18);
      c120 = `is.object`(data18);
      if c120 then L1() else L2(data18);
    L0(dx49):
      return dx49;
    L1():
      dr36 = tryDispatchBuiltin.1("[[", data18);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(data20):
      i66 = ld i;
      i67 = force? i66;
      __10 = ldf `[[` in base;
      r440 = dyn __10(data20, i67);
      goto L0(r440);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx48);
    };
    r442 = dyn as_factor(p80);
    check L716() else D233();
  L718():
    colClasses30 = force? colClasses29;
    checkMissing(colClasses30);
    c121 = `is.object`(colClasses30);
    if c121 then L719() else L720(i61, colClasses30);
  L749():
    dr52 = tryDispatchBuiltin.1("[[", data34);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L751() else L750(dr52);
  L750(data36):
    __18 = ldf `[[` in base;
    r468 = dyn __18(data36, 1);
    goto L188(r468);
  L762():
    st `row.names` = r476;
    goto L191(r476);
  L769():
    st `row.names` = r484;
    goto L192();
  L773():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    c137 = `is.character`(row_names4);
    goto L195(c137);
  L774():
    st compactRN = FALSE;
    sym73 = ldf length;
    base73 = ldf length in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L775() else L776();
  L843():
    row_names16 = force? row_names15;
    checkMissing(row_names16);
    c158 = `is.object`(row_names16);
    goto L213(c158);
  L844():
    sym78 = ldf `is.integer`;
    base78 = ldf `is.integer` in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L845() else L846();
  D233():
    deopt 934 [i61, r442];
  D248():
    deopt 988 [data37];
  L179(i71, dx51):
    r444 = `==`(dx51, "Date");
    c122 = `as.logical`(r444);
    if c122 then L723() else L180();
  L197(r488):
    r490 = `==`(r488, 1);
    c139 = `as.logical`(r490);
    if c139 then L779() else L198();
  L205(r508):
    c144 = `as.logical`(r508);
    if c144 then L810() else L206(c144);
  L215(c164, r524):
    r525 = `!`(r524);
    c166 = `as.logical`(r525);
    c167 = `||`(c164, c166);
    goto L214(c167);
  L216():
    goto L218();
  L218():
    compactRN = ld compactRN;
    check L855() else D287();
  L716():
    goto L176(i61, r442);
  L719():
    dr38 = tryDispatchBuiltin.1("[", colClasses30);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L721() else L720(i61, dr38);
  L720(i69, colClasses32):
    i72 = ld i;
    check L722() else D235();
  L751():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L188(dx64);
  L752():
    data38 = force? data37;
    checkMissing(data38);
    c133 = `is.object`(data38);
    if c133 then L753() else L754(data38);
  L775():
    row_names5 = ld `row.names`;
    check L777() else D256();
  L776():
    r487 = dyn base73(<sym row.names>);
    goto L197(r487);
  L806():
    row_names9 = ld `row.names`;
    check L808() else D268();
  L807():
    r507 = dyn base75(<sym row.names>);
    goto L205(r507);
  L845():
    row_names17 = ld `row.names`;
    check L847() else D284();
  L846():
    r523 = dyn base78(<sym row.names>);
    goto L215(c159, r523);
  L849():
    sym79 = ldf `as.character`;
    base79 = ldf `as.character` in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L850() else L851();
  D235():
    deopt 937 [i69, colClasses32, i72];
  D256():
    deopt 1026 [row_names5];
  D268():
    deopt 1074 [row_names9];
  D284():
    deopt 1128 [c159, row_names17];
  D287():
    deopt 1142 [compactRN];
  L180():
    colClasses33 = ld colClasses;
    check L727() else D238();
  L189(dx67):
    st data = dx67;
    keep4 = ld keep;
    check L756() else D249();
  L198():
    goto L204(NULL);
  L204(dx78):
    goto L192();
  L206(c146):
    c153 = `as.logical`(c146);
    if c153 then L816() else L208();
  L217(r527):
    st `row.names` = r527;
    goto L218();
  L721():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L179(i61, dx50);
  L722():
    i73 = force? i72;
    __11 = ldf `[` in base;
    r443 = dyn __11(colClasses32, i73);
    goto L179(i69, r443);
  L723():
    as_Date = ldf `as.Date`;
    check L724() else D236();
  L753():
    dr54 = tryDispatchBuiltin.1("[", data38);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L755() else L754(dr54);
  L754(data40):
    __19 = ldf `[` in base;
    r469 = dyn __19(data40, -1);
    goto L189(r469);
  L777():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    length18 = ldf length in base;
    r489 = dyn length18(row_names6);
    check L778() else D257();
  L779():
    cols43 = ld cols;
    check L780() else D258();
  L808():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    is_numeric1 = ldf `is.numeric` in base;
    r509 = dyn is_numeric1(row_names10);
    check L809() else D269();
  L810():
    sym76 = ldf length;
    base76 = ldf length in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L811() else L812();
  L847():
    row_names18 = force? row_names17;
    checkMissing(row_names18);
    c165 = `is.integer`(row_names18);
    goto L215(c159, c165);
  L850():
    row_names19 = ld `row.names`;
    check L852() else D285();
  L851():
    r526 = dyn base79(<sym row.names>);
    goto L217(r526);
  L855():
    compactRN1 = force? compactRN;
    checkMissing(compactRN1);
    r530 = `!`(compactRN1);
    c170 = `as.logical`(r530);
    if c170 then L856() else L219();
  D236():
    deopt 943 [i71];
  D238():
    deopt 946 [i71, colClasses33];
  D249():
    deopt 994 [keep4];
  D257():
    deopt 1029 [r489];
  D258():
    deopt 1033 [1, cols43];
  D269():
    deopt 1077 [r509];
  D285():
    deopt 1135 [row_names19];
  L207(c149, r511):
    r513 = `==`(r511, 1);
    c150 = `as.logical`(r513);
    c151 = `&&`(c149, c150);
    goto L206(c151);
  L208():
    stop8 = ldf stop;
    check L834() else D279();
  L219():
    goto L228();
  L228():
    l36 = ld data;
    class__ = ldf `class<-`;
    check L881() else D301();
  L724():
    p81 = prom<V +>{
      data21 = ld data;
      data22 = force? data21;
      checkMissing(data22);
      c123 = `is.object`(data22);
      if c123 then L1() else L2(data22);
    L0(dx53):
      return dx53;
    L1():
      dr40 = tryDispatchBuiltin.1("[[", data22);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(data24):
      i76 = ld i;
      i77 = force? i76;
      __12 = ldf `[[` in base;
      r445 = dyn __12(data24, i77);
      goto L0(r445);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx52);
    };
    r447 = dyn as_Date(p81);
    check L725() else D237();
  L727():
    colClasses34 = force? colClasses33;
    checkMissing(colClasses34);
    c124 = `is.object`(colClasses34);
    if c124 then L728() else L729(i71, colClasses34);
  L755():
    dx66 = getTryDispatchBuiltinValue(dr54);
    goto L189(dx66);
  L756():
    keep5 = force? keep4;
    checkMissing(keep5);
    c134 = `is.object`(keep5);
    if c134 then L757() else L758(keep5);
  L778():
    goto L197(r489);
  L780():
    cols44 = force? cols43;
    checkMissing(cols44);
    r491 = `:`(1, cols44);
    c140 = `is.object`(r491);
    if c140 then L781() else L782(r491);
  L809():
    goto L205(r509);
  L811():
    row_names11 = ld `row.names`;
    check L813() else D270();
  L812():
    r510 = dyn base76(<sym row.names>);
    goto L207(c144, r510);
  L816():
    st compactRN = FALSE;
    row_names13 = ld `row.names`;
    check L817() else D272();
  L852():
    row_names20 = force? row_names19;
    checkMissing(row_names20);
    as_character = ldf `as.character` in base;
    r528 = dyn as_character(row_names20);
    check L853() else D286();
  L856():
    sym80 = ldf length;
    base80 = ldf length in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L857() else L858();
  D237():
    deopt 945 [i71, r447];
  D270():
    deopt 1080 [c144, row_names11];
  D272():
    deopt 1090 [row_names13];
  D279():
    deopt 1114 [];
  D286():
    deopt 1138 [r528];
  D301():
    deopt 1186 ["data.frame", l36, "data.frame"];
  L181(i81, dx55):
    r449 = `==`(dx55, "POSIXct");
    c125 = `as.logical`(r449);
    if c125 then L732() else L182();
  L190(dx69):
    st keep = dx69;
    st compactRN = FALSE;
    goto L191(FALSE);
  L199(dx71):
    st rowvar = dx71;
    data41 = ld data;
    check L789() else D262();
  L220(r532):
    nlines14 = ld nlines;
    check L861() else D290();
  L725():
    goto L176(i71, r447);
  L728():
    dr42 = tryDispatchBuiltin.1("[", colClasses34);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L730() else L729(i71, dr42);
  L729(i79, colClasses36):
    i82 = ld i;
    check L731() else D239();
  L757():
    dr56 = tryDispatchBuiltin.1("[", keep5);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L759() else L758(dr56);
  L758(keep7):
    __20 = ldf `[` in base;
    r470 = dyn __20(keep7, -1);
    goto L190(r470);
  L781():
    dr58 = tryDispatchBuiltin.1("[", r491);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L783() else L782(dr58);
  L782(r493):
    sym74 = ldf match;
    base74 = ldf match in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L784() else L785();
  L813():
    row_names12 = force? row_names11;
    checkMissing(row_names12);
    length19 = ldf length in base;
    r512 = dyn length19(row_names12);
    check L814() else D271();
  L817():
    row_names14 = force? row_names13;
    checkMissing(row_names14);
    st rlabp = row_names14;
    data49 = ld data;
    check L818() else D273();
  L834():
    r519 = dyn stop8("invalid 'row.names' specification");
    check L835() else D280();
  L853():
    goto L217(r528);
  L857():
    row_names21 = ld `row.names`;
    check L859() else D288();
  L858():
    r531 = dyn base80(<sym row.names>);
    goto L220(r531);
  L881():
    r547 = dyn class__(l36, NULL, "data.frame");
    check L882() else D302();
  D239():
    deopt 948 [i79, colClasses36, i82];
  D262():
    deopt 1050 [data41];
  D271():
    deopt 1083 [c144, r512];
  D273():
    deopt 1093 [data49];
  D280():
    deopt 1116 [r519];
  D288():
    deopt 1147 [row_names21];
  D290():
    deopt 1150 [r532, nlines14];
  D302():
    deopt 1188 ["data.frame", r547];
  L182():
    __15 = ldf `::`;
    check L736() else D242();
  L200(r497, r498):
    r500 = `==`(r498, 1);
    __21 = ldf `[` in base;
    r501 = dyn __21(r497, r500);
    goto L199(r501);
  L730():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L181(i71, dx54);
  L731():
    i83 = force? i82;
    __13 = ldf `[` in base;
    r448 = dyn __13(colClasses36, i83);
    goto L181(i79, r448);
  L732():
    as_POSIXct = ldf `as.POSIXct`;
    check L733() else D240();
  L759():
    dx68 = getTryDispatchBuiltinValue(dr56);
    goto L190(dx68);
  L783():
    dx70 = getTryDispatchBuiltinValue(dr58);
    goto L199(dx70);
  L784():
    col_names27 = ld `col.names`;
    check L786() else D259();
  L785():
    r496 = dyn base74(<sym col.names>, <sym row.names>, 0);
    goto L200(r493, r496);
  L789():
    data42 = force? data41;
    checkMissing(data42);
    c141 = `is.object`(data42);
    if c141 then L790() else L791(data42);
  L814():
    goto L207(c144, r512);
  L818():
    data50 = force? data49;
    checkMissing(data50);
    c154 = `is.object`(data50);
    if c154 then L819() else L820(data50);
  L835():
    goto L192();
  L859():
    row_names22 = force? row_names21;
    checkMissing(row_names22);
    length20 = ldf length in base;
    r533 = dyn length20(row_names22);
    check L860() else D289();
  L861():
    nlines15 = force? nlines14;
    checkMissing(nlines15);
    r534 = `!=`(r532, nlines15);
    c171 = `as.logical`(r534);
    if c171 then L862() else L221();
  L882():
    st data = r547;
    row_names27 = ld `row.names`;
    check L883() else D303();
  D240():
    deopt 954 [i81];
  D242():
    deopt 958 [i81];
  D259():
    deopt 1038 [r493, col_names27];
  D289():
    deopt 1150 [r533];
  D303():
    deopt 1190 [row_names27];
  L201(dx73):
    st `row.names` = dx73;
    data45 = ld data;
    check L794() else D264();
  L209(dx80):
    st `row.names` = dx80;
    data53 = ld data;
    check L823() else D275();
  L221():
    goto L222();
  L222():
    anyDuplicated = ldf anyDuplicated;
    check L866() else D293();
  L733():
    p82 = prom<V +>{
      data25 = ld data;
      data26 = force? data25;
      checkMissing(data26);
      c126 = `is.object`(data26);
      if c126 then L1() else L2(data26);
    L0(dx57):
      return dx57;
    L1():
      dr44 = tryDispatchBuiltin.1("[[", data26);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(data28):
      i86 = ld i;
      i87 = force? i86;
      __14 = ldf `[[` in base;
      r450 = dyn __14(data28, i87);
      goto L0(r450);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx56);
    };
    r452 = dyn as_POSIXct(p82);
    check L734() else D241();
  L736():
    r453 = dyn __15("methods", "as");
    check L737() else D243();
  L786():
    col_names28 = force? col_names27;
    checkMissing(col_names28);
    row_names7 = ld `row.names`;
    check L787() else D260();
  L790():
    dr60 = tryDispatchBuiltin.1("[[", data42);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L792() else L791(dr60);
  L791(data44):
    rowvar = ld rowvar;
    check L793() else D263();
  L819():
    dr66 = tryDispatchBuiltin.1("[[", data50);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L821() else L820(dr66);
  L820(data52):
    rlabp10 = ld rlabp;
    check L822() else D274();
  L860():
    goto L220(r533);
  L862():
    stop9 = ldf stop;
    check L863() else D291();
  L883():
    row_names28 = force? row_names27;
    checkMissing(row_names28);
    l37 = ld data;
    attr__ = ldf `attr<-`;
    check L884() else D304();
  D241():
    deopt 956 [i81, r452];
  D243():
    deopt 961 [i81, r453];
  D260():
    deopt 1040 [r493, row_names7];
  D263():
    deopt 1052 [data44, rowvar];
  D264():
    deopt 1056 [data45];
  D274():
    deopt 1095 [data52, rlabp10];
  D275():
    deopt 1099 [data53];
  D291():
    deopt 1154 [];
  D293():
    deopt 1160 [];
  D304():
    deopt 1193 [row_names28, l37, row_names28];
  L734():
    goto L176(i81, r452);
  L737():
    checkFun.0(r453);
    r454 = r453 as cls;
    p83 = prom<V +>{
      data29 = ld data;
      data30 = force? data29;
      checkMissing(data30);
      c127 = `is.object`(data30);
      if c127 then L1() else L2(data30);
    L0(dx59):
      return dx59;
    L1():
      dr46 = tryDispatchBuiltin.1("[[", data30);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(data32):
      i88 = ld i;
      i89 = force? i88;
      __16 = ldf `[[` in base;
      r455 = dyn __16(data32, i89);
      goto L0(r455);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx58);
    };
    p84 = prom<V +>{
      colClasses37 = ld colClasses;
      colClasses38 = force? colClasses37;
      checkMissing(colClasses38);
      c128 = `is.object`(colClasses38);
      if c128 then L1() else L2(colClasses38);
    L0(dx61):
      return dx61;
    L1():
      dr48 = tryDispatchBuiltin.1("[", colClasses38);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(colClasses40):
      i90 = ld i;
      i91 = force? i90;
      __17 = ldf `[` in base;
      r457 = dyn __17(colClasses40, i91);
      goto L0(r457);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    r459 = dyn r454(p83, p84);
    check L738() else D244();
  L787():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    match2 = ldf match in base;
    r499 = dyn match2(col_names28, row_names8, 0, NULL);
    check L788() else D261();
  L792():
    dx72 = getTryDispatchBuiltinValue(dr60);
    goto L201(dx72);
  L793():
    rowvar1 = force? rowvar;
    __22 = ldf `[[` in base;
    r502 = dyn __22(data44, rowvar1);
    goto L201(r502);
  L794():
    data46 = force? data45;
    checkMissing(data46);
    c142 = `is.object`(data46);
    if c142 then L795() else L796(data46);
  L821():
    dx79 = getTryDispatchBuiltinValue(dr66);
    goto L209(dx79);
  L822():
    rlabp11 = force? rlabp10;
    __25 = ldf `[[` in base;
    r514 = dyn __25(data52, rlabp11);
    goto L209(r514);
  L823():
    data54 = force? data53;
    checkMissing(data54);
    c155 = `is.object`(data54);
    if c155 then L824() else L825(data54);
  L863():
    r535 = dyn stop9("invalid 'row.names' length");
    check L864() else D292();
  L866():
    p87 = prom<V +>{
      row_names23 = ld `row.names`;
      row_names24 = force? row_names23;
      checkMissing(row_names24);
      return row_names24;
    };
    r538 = dyn anyDuplicated(p87);
    check L867() else D294();
  L884():
    r548 = dyn attr__(l37, NULL, "row.names", row_names28);
    check L885() else D305();
  D244():
    deopt 965 [i81, r459];
  D261():
    deopt 1045 [r493, r499];
  D292():
    deopt 1156 [r535];
  D294():
    deopt 1162 [r538];
  D305():
    deopt 1196 [row_names28, r548];
  L202(dx75):
    st data = dx75;
    keep8 = ld keep;
    check L799() else D266();
  L210(dx82):
    st data = dx82;
    keep12 = ld keep;
    check L828() else D277();
  L738():
    goto L176(i81, r459);
  L788():
    goto L200(r493, r499);
  L795():
    dr62 = tryDispatchBuiltin.1("[", data46);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L797() else L796(dr62);
  L796(data48):
    rowvar2 = ld rowvar;
    check L798() else D265();
  L824():
    dr68 = tryDispatchBuiltin.1("[", data54);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L826() else L825(dr68);
  L825(data56):
    rlabp12 = ld rlabp;
    check L827() else D276();
  L864():
    goto L222();
  L867():
    c172 = `as.logical`(r538);
    if c172 then L868() else L223();
  L885():
    st data = r548;
    data61 = ld data;
    check L886() else D306();
  D265():
    deopt 1058 [data48, rowvar2];
  D266():
    deopt 1063 [keep8];
  D276():
    deopt 1101 [data56, rlabp12];
  D277():
    deopt 1106 [keep12];
  D306():
    deopt 1198 [data61];
  L223():
    goto L224();
  L224():
    sym81 = ldf anyNA;
    base81 = ldf anyNA in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L872() else L873();
  L797():
    dx74 = getTryDispatchBuiltinValue(dr62);
    goto L202(dx74);
  L798():
    rowvar3 = force? rowvar2;
    checkMissing(rowvar3);
    r503 = `-`(<missing>, rowvar3);
    __23 = ldf `[` in base;
    r504 = dyn __23(data48, r503);
    goto L202(r504);
  L799():
    keep9 = force? keep8;
    checkMissing(keep9);
    c143 = `is.object`(keep9);
    if c143 then L800() else L801(keep9);
  L826():
    dx81 = getTryDispatchBuiltinValue(dr68);
    goto L210(dx81);
  L827():
    rlabp13 = force? rlabp12;
    checkMissing(rlabp13);
    r515 = `-`(<missing>, rlabp13);
    __26 = ldf `[` in base;
    r516 = dyn __26(data56, r515);
    goto L210(r516);
  L828():
    keep13 = force? keep12;
    checkMissing(keep13);
    c156 = `is.object`(keep13);
    if c156 then L829() else L830(keep13);
  L868():
    stop10 = ldf stop;
    check L869() else D295();
  L886():
    data62 = force? data61;
    checkMissing(data62);
    popenv;
    return data62;
  D295():
    deopt 1164 [];
  L203(dx77):
    st keep = dx77;
    goto L204(dx77);
  L211(dx84):
    st keep = dx84;
    goto L192();
  L225(r542):
    c173 = `as.logical`(r542);
    if c173 then L876() else L226();
  L800():
    dr64 = tryDispatchBuiltin.1("[", keep9);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L802() else L801(dr64);
  L801(keep11):
    rowvar4 = ld rowvar;
    check L803() else D267();
  L829():
    dr70 = tryDispatchBuiltin.1("[", keep13);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L831() else L830(dr70);
  L830(keep15):
    rlabp14 = ld rlabp;
    check L832() else D278();
  L869():
    r539 = dyn stop10("duplicate 'row.names' are not allowed");
    check L870() else D296();
  L872():
    row_names25 = ld `row.names`;
    check L874() else D297();
  L873():
    r541 = dyn base81(<sym row.names>);
    goto L225(r541);
  D267():
    deopt 1065 [keep11, rowvar4];
  D278():
    deopt 1108 [keep15, rlabp14];
  D296():
    deopt 1166 [r539];
  D297():
    deopt 1171 [row_names25];
  L226():
    goto L227(NULL);
  L227(r545):
    goto L228();
  L802():
    dx76 = getTryDispatchBuiltinValue(dr64);
    goto L203(dx76);
  L803():
    rowvar5 = force? rowvar4;
    checkMissing(rowvar5);
    r505 = `-`(<missing>, rowvar5);
    __24 = ldf `[` in base;
    r506 = dyn __24(keep11, r505);
    goto L203(r506);
  L831():
    dx83 = getTryDispatchBuiltinValue(dr70);
    goto L211(dx83);
  L832():
    rlabp15 = force? rlabp14;
    checkMissing(rlabp15);
    r517 = `-`(<missing>, rlabp15);
    __27 = ldf `[` in base;
    r518 = dyn __27(keep15, r517);
    goto L211(r518);
  L870():
    goto L224();
  L874():
    row_names26 = force? row_names25;
    checkMissing(row_names26);
    anyNA = ldf anyNA in base;
    r543 = dyn anyNA(row_names26);
    check L875() else D298();
  L876():
    stop11 = ldf stop;
    check L877() else D299();
  D298():
    deopt 1174 [r543];
  D299():
    deopt 1176 [];
  L875():
    goto L225(r543);
  L877():
    r544 = dyn stop11("missing values in 'row.names' are not allowed");
    check L878() else D300();
  D300():
    deopt 1178 [r544];
  L878():
    goto L227(r544);
  }
}