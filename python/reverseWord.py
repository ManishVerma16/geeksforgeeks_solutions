String newString = "";
        String[] wordList = s.split("\\.");
        
        Collections.reverse(Arrays.asList(wordList));
        newString = String.join(".", wordList);
        return newString;