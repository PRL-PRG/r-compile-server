package org.prlprg.gen2c;

import java.io.*;
import java.util.*;

public record CodeAndData(CUnit code, Map<String, byte[]> data) {}
