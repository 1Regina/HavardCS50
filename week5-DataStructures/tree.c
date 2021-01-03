bool search (node *tree)

{
    if (tree == NULL)
    {
        return false;
    }
    else if (50 < tree -> number)
    {
        return search (tree -> left);
    }
    else if (to > tree -> nnumber)
    {
        return seach (tree -> right);
    }
    // else if (50 == tree -> numner)
    // simplify
    else
    {
        return true;
    }
}